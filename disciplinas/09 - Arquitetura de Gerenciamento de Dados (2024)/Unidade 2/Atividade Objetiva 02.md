# Pergunta 1
Como repositório de dados, podemos dizer que existem hoje 2 principais abordagens: Data Warehoure (DW) e Data Lake (DL).  Informe qual das seguintes afirmações melhor descreve a diferença entre as 2:

- DW é constituída por datamart, segue um modelo estrela ou snowflake e é destinada a analistas de negócio e Business Intelligence. DL é constituído por camadas, não precisa ter uma modelagem específica e se destina inicialmente a cientistas de dados. :heavy_check_mark: 
- DW pode ter dados estruturados e não estruturados e se destina a todos os públicos de dados, mesmo os que consomem dados no seu estado mais primário. DL é constituído por camadas, mas os dados devem ser estruturados em estrela ou snowflake.
- DW deve ser estruturado por camadas e se destina a alimentar sistemas transacionais. O DL não é uma estrutura de repositório de dados, serve para enviar dados para a nuvem.

# Pergunta 2
Os bancos de dados relacionais têm algumas características que os representam. Informe qual das opções NÃO é uma característica associada a bancos de dados relacionais.

- Dados são representados por tabelas
- Cada linha da tabela representa um registro
- Cada coluna da tabela representa um atributo do registro
- Vídeos e áudios podem ser transformados em tabelas automaticamente :heavy_check_mark: 


# Pergunta 3
Existem 2 principais formas de realizar a ingestão de dados para dentro de uma plataforma de dados, por ETL ou por ELT. Informa qual das opções indica corretamente o significado de cada sigla.

- ETL: Extract, Transform and Load; ELT: Extract, Load and Transform :heavy_check_mark: 
- ETL: Elevate, Transfer and Load; ELT: Elevate, Load and Transfer.
- ETL: Enter, Translate, Lead; ELT: Enter, Lead, Translat

# Pergunta 4
Existem bancos de dados estruturados e NoSQL. Os bancos NoSQL podem ser divididos em categorias. Indique qual das opções descreve CORRETAMENTE as categorias de bancos de dados NoSQL.

- Hierárquicos, orientados a objeto, relacionais
- Colunar, Verticais, Horizontais, rede
- Base de dados de documentos, Grafos, Chave-valor, Colunar :heavy_check_mark: 
- Empilhados, distribuídos, de arquivo, por API


# Pergunta 5
Considerando uma arquitetura de integração de dados, tanto entre sistemas transacionais quanto para plataforma de dados, existem algumas abordagens mais recomendadas que outras. Informe qual das seguintes opções NÃO É uma boa prática na construção de uma arquitetura de integração de dados.

- Devem ser consideradas soluções de pub/sub como por exemplo o Kafka sempre que precisarmos integrar dados baseados em evento
- Utilização de API ou GraphQL são boas opções quando for necessário integrar dados sobre demanda
- A consulta de grande volume de dados históricos deve ser feita consultando a plataforma de dados analítica.
- Deve ser utilizada integração de dados direta por banco de dados tipo DB-Link sempre que for possível e em todas as situações :heavy_check_mark: 