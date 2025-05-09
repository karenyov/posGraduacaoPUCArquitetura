#include <ESP8266WiFi.h>
#include <ESP8266WebServer.h>
#include <Wire.h>
#include <OneWire.h> 
#include <DallasTemperature.h>
#include "MAX30100_PulseOximeter.h"
#include "FirebaseESP8266.h"

#define FIREBASE_HOST "iot-health-b6eaa.firebaseio.com/" 
#define FIREBASE_AUTH "YCcn40lW64RSUudMr5kj6IKWB13FrhiSk0gFBHck"
#define WIFI_SSID "AulaIoT"
#define WIFI_PASSWORD "secreta123"

FirebaseData firebaseData;
unsigned long sendDataPrevMillis = 0;
String path = "/sensor";

#define Intervalo 1000
PulseOximeter pox;
uint32_t ultimaMedicao = 0;
int BPM, SpO2;
float temperatura;

#define ONE_WIRE_BUS D7
OneWire oneWire(ONE_WIRE_BUS); 
DallasTemperature sensors(&oneWire);


void batimentoDetectado()
{
    Serial.println("Pulsação detectada!"); 
}

void setup()
{
  Serial.begin(115200);
  sensors.begin();
  WiFi.begin(WIFI_SSID, WIFI_PASSWORD);

  Serial.print("Conectando ao Wifi");
  while (WiFi.status() != WL_CONNECTED)
  {
    Serial.print(".");
    delay(300);
  }
  Serial.println();
  Serial.print("IP: ");
  Serial.println(WiFi.localIP());

  
  Serial.print("Inicializando o sensor PulseOximeter..");
  if (!pox.begin()) {
        Serial.println("Falha no sensor");
        for(;;);
    } else {
        Serial.println("Em operação");
        
    }
  pox.setIRLedCurrent(MAX30100_LED_CURR_7_6MA);
  pox.setOnBeatDetectedCallback(batimentoDetectado);

  Firebase.begin(FIREBASE_HOST, FIREBASE_AUTH);
  Firebase.reconnectWiFi(true);

  firebaseData.setBSSLBufferSize(1024, 1024);
  firebaseData.setResponseSize(1024);

  if (!Firebase.beginStream(firebaseData, path))
  {
    Serial.println("Falha ao conectar ao Firebase. Motivo: " + firebaseData.errorReason());
  }
}

void loop()
{
    // BPM = random (60,85); - simulação de sensores
    // SpO2 = random (94,99); - simulação de sensores
    // Temperatura = random(35,37); - simulação de sensores

    BPM = pox.getHeartRate();
    SpO2 = pox.getSpO2();
    sensors.requestTemperatures();
    temperatura = sensors.getTempCByIndex(0);

    if (millis() - ultimaMedicao > Intervalo) {
        Serial.print("Pulsação:");
        Serial.print(BPM);
        Serial.print("bpm / SpO2:");
        Serial.print(SpO2);
        Serial.print("%");
        Serial.print(" Temperatura:");
        Serial.print(temperatura);
        Serial.println(" C");
        ultimaMedicao = millis();
    }
    enviaFirebase();
}

void enviaFirebase() {
  if (millis() - sendDataPrevMillis > 15000)
  {
    sendDataPrevMillis = millis();
    preparaDados(String(BPM), "/BPM");
    preparaDados(String(SpO2), "/SpO2");
    preparaDados(String(temperatura), "/Temperatura");
  } 
}

void preparaDados (String valor, String campo) {
  
      if (Firebase.setString(firebaseData, path + campo, valor))
    {
      Serial.println("PATH: " + firebaseData.dataPath());
      Serial.println("TIPO: " + firebaseData.dataType());
      Serial.print("VALOR: "+ valor);
      Serial.println();
    }
    else
    {
      Serial.println("Erro: " + firebaseData.errorReason());
    }
  }
