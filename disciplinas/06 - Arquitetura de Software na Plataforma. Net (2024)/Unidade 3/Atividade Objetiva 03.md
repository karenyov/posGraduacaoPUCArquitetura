# Pergunta 1
Uma das possibilidades de se criar uma camada de Serviços com a plataforma .NET é utilizando o WCF - Windows Communication Foundation. 

O WCF é parametrizável e permite que o arquiteto defina alguns comportamentos da Camada de Serviços.

Avalie a afirmação a seguir: "Apesar de flexível o WCF não permite utilização de outro método de transporte diferente do protocolo HTTP"

- True
- False :heavy_check_mark: 


# Pergunta 2
Para se implementar uma camada de serviços é preciso lembrar que ela poderá ser utilizada por diversas interfaces e sistemas externos, além de encapsular toda tecnologia e complexidades inerentes às camadas internas, como a de Dados ou de Negócio.

Com o objetivo de se criar uma camada de Serviços que atenda a todos estes requisitos é importante lembrar de algumas características-chave. Marque abaixo uma característica que NÃO é verdadeira em relação à camada de Serviços.

- Deve sempre utilizar protocolo HTTP :heavy_check_mark: 
- Não deve armazenar estado de sessão - Stateless
- Deve usar padrões universais e ser independente de tecnologias, como SOAP ou REST
- Deve permitir concorrência de requisições

# Pergunta 3
Sabemos que SOAP é um protocolo e REST é uma plataforma, que é possível com SOAP expor métodos com comportamentos e contratos mais bem definidos e que o REST possui limitações.

De acordo com o que vimos nas aulas, avalie a seguinte afirmativa: "Na maioria dos cenários, o REST é mais leve, possui melhor performance e tem curva de aprendizado menor"

- True :heavy_check_mark: 
- False

# Pergunta 4
Uma camada de serviços expõe funcionalidades das camadas de negócio para o mundo e possui um conjunto grande de missões adicionais. Esta tem se tornado cada dia mais importante em estratégias de arquitetura de software.

Aponte abaixo uma característica que NÃO é da camada de serviços

- Isolar as camadas de interface das camadas de negócios
- Expor funcionalidades para integração entre sistemas
- Separar a camada de Negócios da camada de Dados :heavy_check_mark: 
- Permitir que várias interfaces façam uso do mesmo conjunto de serviços, sendo um ponto central e único de dados e ações

# Pergunta 5
Como o .NET Core é uma plataforma nova, a Microsoft ainda está em fase de migração de uma série de recursos que já existem na plataforma .NET Framework; e outros recursos existentes no .NET Framework não fazem mais sentido existirem na plataforma .NET Core.

Escolha abaixo o que NÃO é possível fazer com .NET Core
Grupo de escolhas da pergunta

- Acessar Web Service do tipo REST
- Utilizar o WCF para criar uma camada de serviços  :heavy_check_mark: 
- Criar aplicações no modelo MVC
- Acessar Web Services do tipo SOAP