- 
# Pergunta 1
As Application Programming Interface (API) permitem a integração entre dois sistemas distintos. Existem diversas abordagens tecnológicas para a criação de APIs de sistemas distribuídos.

As alternativas abaixo representam pelo menos uma destas abordagens de comunicação para construção de APIs, EXCETO:

- Distributed Denial of Service (DDOS)  :heavy_check_mark: 
- Simple Object Access Protocol (SOAP)
- Remote Procedure Call (RPC)
- Common Object Request Broker Architecture (CORBA)
- Representational State Transfer (REST)

# Pergunta 2
Um dos princípios que norteiam a implementação de Web Services no padrão REST é o HATEOS ou Hypermedia As The Engine Of Application State.

A que se refere este princípio de HATEOS?

- Uma maneira de manter o estado da sessão do cliente no HTML
- Indica a utilização do HTML como formato para troca de dados da aplicação
- A utilização do HTML como uma maneira de processar dados da aplicação
- Uso do retorno do Web Service como forma de indicar os próximos passos na aplicação :heavy_check_mark: 
- Forma de tratar especificidades de um Sistema Operacional (OS)


# Pergunta 3

Existem recomendações e boas práticas para construção de Web Services no estilo arquitetural REST para a implementação do padrão CRUD para manipulação de um cadastro comum que sugerem a utilização da semântica dos métodos HTTP para as operações básicas de visualização, inclusão, atualização e exclusão. Isto permite a estruturação das operações do CRUD de maneira consistente. 

Diante disso, identifique, dentre as alternativas que se seguem, o significado para a requisição que é apresentada no trecho abaixo:

```
PUT /livro/5 HTTP/1.1
User-Agent: Mozilla/4.0 (compatible; MSIE5.01)
Host: www.servidor.com.br

{
  "titulo": "Aprendendo a desenvolver aplicações Web", 
  "autor": "Semmy Purewal", 
  "editora": "Novatec Editora",
  "isbn": "978-8575223475"
} 
```

- Inclusão de um novo livro a partir dos dados do JSON apresentado
- Inclusão de uma tabela de livros na base de dados e do livro descrito no JSON apresentado
- Alteração do livro de identificador 5 com os dados do JSON apresentado :heavy_check_mark: 
- Obter os dados de livros que possuam os dados do JSON apresentado

# Pergunta 4
Levando em consideração os diferentes tipos de bancos de dados hoje em dia, é possível aplicar diversas abordagens no acesso a dados em aplicações construídas na plataforma Node.js: Drivers nativos, Query Builders, Object Relation Mapping (ORM) e Object Data Modeling (ODM). Uma das alternativas que tratamos nessa disciplina é a biblioteca Knex.js.

Analise a biblioteca Knex.js diante das diversas abordagens de acesso a dados e assinale a afirmativa correta:

- O Knex.js oferece um ORM completo, proporcionando uma abstração do modelo físico dos dados.
- O Knex.js não permite operações CRUD, ao contrário dos drivers nativos e frameworks ORM.
- O Knex.js não permite a construção de consultas SQL de forma programática, ao contrário de frameworks ODM.
- O Knex.js permite a construção de consultas SQL e oferece compatibilidade com diversos bancos de dados do mercado. :heavy_check_mark: 
- O Knex.js é um driver nativo para bancos de dados SQL.

# Pergunta 5
Ao utilizar a biblioteca Knex.js para inserção de registros em tabelas com chaves primárias com o recurso de autoincremento, como devemos fazer para obter o ID gerado automaticamente em uma tabela chamada 'users'?

- knex('users').insert({ name: 'John' }).id()
- knex('users').insert({ name: 'John' }).then(result => result.id)
- knex('users').insert({ name: 'John', return: 'id'})  :heavy_check_mark: 
- knex('users').insert({ name: 'John' }).returning('id')
