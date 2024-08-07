# Pergunta 1
A abordagem de desenho de software guiado a domínio permite que o desenvolvimento construa o modelo de negócio da aplicação sem profundo apego à forma com que as informações serão armazenadas, gerando mais liberdade e flexibilidade para que a camada de domínio represente melhor o negócio que o software deve atender.

Dos cenários abaixo, qual o mais indicado para utilizar a abordagem de Desenho guiado a domínio?

- Software transacional com objetivo centrado em cadastros e armazenamento e recuperação de dados
- Cenário de projeto simples com demanda de grande velocidade de produção inicial
- Alta complexidade de negócio e alta demanda de adaptações nas regras de negócio :heavy_check_mark: 

# Pergunta 2
Com a evolução da Engenharia de Software e metodologias mais modernas e flexíveis de se produzir software. DevOps é uma abordagem que, em última instância de maturidade, visa automatizar processos importantes da produção de software e está intimamente ligado aos conceitos de entrega contínua, onde pode-se atualizar as versões de um software com o menor impacto possível e maior segurança.

Para entregas rápidas, menores e independentes é preciso que a Arquitetura do Software que aplica este tipo de engenharia esteja desenhada de forma adequada.

Qual o modelo arquitetural que possui maior aderência e facilidade para suportar entregas pequenas, contínuas e seguras?


- N Camadas - por ser dividido de forma horizontal mas ser monolítico em seu contexto de negócio (verticalmente)
- Cliente servidor - por possuir um banco de dados centralizador
- Microsserviços - por ser subdividido em partes menores  :heavy_check_mark: 

# Pergunta 3
Existem diversas formas de aplicações se persistir dados em bancos relacionais. Geralmente o dilema é escolher entre encapsulamento de complexidades e performance, via de regra, enquanto mais encapsuladas as complexidades maior o esforço computacional das interações entre a aplicação e o banco de dados.

De forma geral, qual dos padrões descritos abaixo possui melhor performance de execução (menor tempo de execução entre a aplicação e o banco de dados)? 

- Table Module - DataSets e DataTables
- Domain Model - com outro mapeador objeto relacional, ex.: NHibernate
- Active Record - com Entity Framework
- Transaction Script - Execução direta de scripts no banco de dados  :heavy_check_mark: 

# Pergunta 4
.NET Core tem como missão ser a referência para criação de novos projetos na plataforma .NET. 

Qual das alternativas abaixo NÃO é uma característica do .NET Core?

- Multiplataforma - Compatível com Linux  
- Mais indicado para aplicações desktop :heavy_check_mark: 
- Melhor performance 
- Open Source

# Pergunta 5
Uma das formas mais comuns de se iniciar o desenho de um software é desenhando sua estrutura de armazenamento de dados, geralmente através de um DER (diagrama de entidade e relacionamento). A plataforma de desenvolvimento de software da Microsoft possui uma série de facilidades para 'importar'  este desenho do banco para a aplicação.

Marque a opção que NÃO corresponde a uma VANTAGEM ao utilizar este tipo de abordagem para se iniciar o desenho de um software.

- Possibilita fácil utilização de todas as possibilidades da programação orientada a objetos :heavy_check_mark: 
- Velocidade de produção 
- Facilidade de persistência e recuperação dos dados 
