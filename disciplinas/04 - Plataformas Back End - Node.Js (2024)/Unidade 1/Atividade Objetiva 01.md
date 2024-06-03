- 
# Pergunta 1
Qual das seguintes afirmações sobre Node.js é FALSA?

- Node.js é baseado no motor V8 do Google Chrome.
- Node.js usa um modelo de I/O bloqueante e orientado a eventos. :heavy_check_mark: 
- Node.js é amplamente utilizado para desenvolver aplicações web escaláveis e de alto desempenho.
- Node.js foi criado em 2009 por Ryan Dahl.
- Node.js é uma plataforma de código aberto que permite a execução de código JavaScript no lado do servidor.

# Pergunta 2
Como o Node.js consegue lidar com um grande volume de requisições simultâneas de forma mais eficiente em comparação com abordagens de ambientes de back end?

- Node.js emprega uma arquitetura multi-processos, criando um novo processo para cada nova requisição.
- Node.js usa um modelo de thread única com event loop e callbacks não bloqueantes, o que permite processar outras requisições enquanto espera por operações I/O. :heavy_check_mark:
- Node.js aloca uma nova thread para cada nova requisição, permitindo a execução simultânea de múltiplas requisições.
- Node.js usa um modelo de threading bloqueante, em que cada requisição é processada por completo antes de passar para a próxima.
- Node.js restringe a quantidade de requisições simultâneas, evitando a sobrecarga do servidor.

# Pergunta 3
Analise o seguinte código Node.js. Qual será a saída?

```
const fs = require('fs');

fs.readFile('test.txt', 'utf8', (err, data) => {
    if (err) {
         console.error(err);
         return;
     }
     console.log(data);
});

console.log('Reading file...');
``` 
- 'Reading file...' repetidamente, em um loop infinito.
- O conteúdo do arquivo 'test.txt', seguido por 'Reading file...'.
- 'Reading file...', seguido pelo conteúdo do arquivo 'test.txt'. :heavy_check_mark:
- Um erro, porque 'test.txt' não existe.
- Apenas 'Reading file...',

# Pergunta 4
No JavaScript, qual é a diferença entre usar var e let para declarar uma variável dentro de um bloco for?

- var pode ser reatribuído dentro do bloco for, mas let não pode.
- var cria uma nova variável para cada iteração, enquanto let reutiliza a mesma variável.
- var e let reutilizam a mesma variável para cada iteração.
- var e let criam uma nova variável para cada iteração. :heavy_check_mark: 
- let cria uma nova variável para cada iteração, enquanto var reutiliza a mesma variável 

# Pergunta 5
O padrão utilizado para identificar recursos na Internet é denominado Uniform Resource Identifier (URI) que se desdobra em Uniform Resource Locator (URL) ou Uniform Resource Name (URN). Suponha a URL

AAAA://BBBB:CCCC/DDDD?EEEE#FFFFF

Dada a URL abaixo, a que se refere a porção identificada por AAAA?

IMPORTANTE:

Escreva uma única palavra no singular
Use caixa baixa (minúsculo)
Não utilize acentos

- esquema

# Pergunta 6
Os métodos mais frequentemente utilizados nas aplicações Web são os métodos GET e POST. Existem várias diferenças entre os dois métodos. Marque a alternativa incorreta quanto a esta comparação. 

- O método GET encaminha informações apenas via URL, enquanto o POST envia tanto pela URL quanto pelo corpo da requisição
- As requisições feitas com POST são mais seguras que requisições GET pois os dados são enviados criptografados no corpo da requisição :heavy_check_mark: 
- Com o POST é possível enviar dados de diversos formatos e com um volume maior que o permitido pelo GET
- Proxy servers armazenam respostas de requisições no cache apenas para aquelas que utilizam o método GET
- O registro de atalhos (bookmarks) do browser é recomendado apenas para respostas a requisições feitas com GET


# Pergunta 7
O código de retorno do protocolo HTTP que corresponde a um erro no servidor para uma requisição é:

- 2XX
- 5XX :heavy_check_mark:
- 1XX
- 4XX
- 3XX

# Pergunta 8
O protocolo HTTP é a base de comunicação entre navegador e servidor Web. Quanto a este protocolo, podemos afirmar que

- Concorre com o protocolo URI que também define uma forma de comunicação entre as partes na Web.
- Trata-se de uma linguagem de programação exclusivamente voltada para a Web.
- Atua na parte do back-end, enquanto o HTML, diferentemente, atua no front-end.
- Define um fluxo de troca de mensagens baseado em primitivas que se constituem por requisição e resposta. :heavy_check_mark:
- Possui nas tags, os elementos fundamentais de estruturação da comunicação entre as partes.

# Pergunta 9
O padrão utilizado para identificar recursos na Internet é denominado Uniform Resource Identifier (URI) que se desdobra em Uniform Resource Locator (URL) ou Uniform Resource Name (URN). Suponha a URL

AAAA://BBBB:CCCC/DDDD?EEEE#FFFFF

Dada a URL abaixo, a que se refere a porção identificada por EEEE?

IMPORTANTE:

Escreva uma única palavra no singular
Use caixa baixa (minúsculo)
Não utilize acentos

- query

# Pergunta 10
As respostas enviadas por um servidor Web podem conter diversos tipos de informação, páginas HTML, arquivos JavaScript, arquivos CSS, imagens, vídeo, entre outros. Ao receber o conteúdo, é necessário que o cliente identifique o tipo do conteúdo retornado para poder exibi-lo adequadamente. 

Como o cliente identifica o tipo do conteúdo recebido?

- A primeira linha do corpo da resposta informa o tipo do arquivo
- O browser utiliza um parser que identifica o tipo do conteúdo interpretando o corpo da resposta HTTP
- Por meio de um cabeçalho HTTP específico para este propósito :heavy_check_mark:
- Por meio do status code da resposta HTTP
- Por meio da extensão do conteúdo retornado (.html, .js, .css, etc)





