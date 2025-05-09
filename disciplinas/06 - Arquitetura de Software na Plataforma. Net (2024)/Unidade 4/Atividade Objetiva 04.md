# Pergunta 1
Um dos projetos de nosso exemplo prático foi chamado de Repositório, é função fundamental deste projeto trabalhar como um tradutor dos objetos buscados no Banco através do Entity Framework para os Objetos desenhados no projeto TO (que representa de forma mais próxima o contexto de negócio).

Qual o principal objetivo deste processo de tradução e da camada de Repositório?

- Aumentar o isolamento entre a camada de negócio e a camada de dados, promovendo o baixo acoplamento :heavy_check_mark: 
- Aumentar o isolamento da camada de Negócios e da camada de Interface Web
- Melhoria de performance nos objetos de negócio
- Aumentar o acoplamento entre os projetos Web e Negócio

# Pergunta 2
Os testes unitários são excelentes ferramentas para se automatizar a complexa tarefa de se testar cada detalhe do software a cada publicação necessária. Em nosso projeto prático utilizamos um projeto de testes da plataforma .NET.

Qual dos recursos abaixo NÃO é possível testar com os testes unitários?

- Regras de Negócio específicas
- Quebra de layout na interface Web :heavy_check_mark: 
- Funcionamento de ações pontuais como Inclusão, Exclusão e Atualização de Registros
- Teste de métodos mais complexos, como métodos matemáticos ou fórmulas
- Funcionamento e interação entre as camadas de Negócio e de Dados


# Pergunta 3
A camada de serviços construída no nosso exemplo prático expõe alguns métodos com o protocolo SOAP através do arquivo de extensão ASMX. Que tem como característica a facilidade e velocidade de implementação da camada de serviços.

Como estes serviços, disponíveis no arquivo ASMX, podem ser publicados para serem consumidos posteriormente?

- Como um serviço no IIS, sendo a URL gerada a ser definida no Web.Config 
- Como um serviço do Windows
- Como um serviço no IIS, sendo o caminho do arquivo físico a URL a ser gerada :heavy_check_mark: 
- Podem ser publicados de várias maneiras e usando diferentes protocolos, dependendo da configuração

# Pergunta 4
A camada de dados, que tem como responsabilidade principal a lida com o banco de dados, no nosso caso SQL Server, usou o Entity Framework para espelhar nosso repositório de dados. Com a criação do Entity são geradas diversos recursos para recuperação e persistência dos dados.

Com a utilização do Entity Framework na plataforma .NET Framework ou .NET Core, qual a forma mais simples de se recuperar um conjunto específico de dados?

Grupo de escolhas da pergunta

- Escrevendo consultas SQL manualmente e carregando os dados em DataTables
- Escrevendo consultas SQL diretamente e executando através de objetos SQLCommand
- Usando expressões lambda com Linq, sem necessidade de escrever consultas SQL  :heavy_check_mark: 
- Não é possível recuperar dados específicos com o Entity, somente todo o conjunto de uma tabela


# Pergunta 5
A camada Web do nosso projeto prático, utiliza o MVC como padrão e acessa os dados e ações que foram disponibilizados na nossa camada de serviço.

Desta forma quais  referências a projetos foram necessárias no projeto Web?

Grupo de escolhas da pergunta

- Referência ao projeto de Serviço e ao TO 
- Nenhuma referência a projetos, apenas a referência à exposição da camada de serviços como serviço SOAP  :heavy_check_mark: 
- Referência apenas ao projeto de Serviço
- Referência aos projetos de Serviços, TO e Negócios 