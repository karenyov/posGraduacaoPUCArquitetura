- 
# Pergunta 1
Analise o seguinte comando de terminal. O que este comando faz?

```
npm install express
```

- Instala o pacote express globalmente
- Instala o pacote express localmente :heavy_check_mark: 
- Realiza o download do pacote express para o cache do NPM
- Atualiza o pacote express
- Cria um novo pacote chamado express

# Pergunta 2
O Node.js é uma plataforma leve para a criação de aplicações intensivas em troca de dados, muito utilizada para criar microserviços para a Web. O Node.js traz um conjunto bastante reduzido de pacotes necessários para criar aplicações distribuídas. 

Dentre as alternativas abaixo, todas trazem módulos internos (core) instalados automaticamente com o Node.js, EXCETO:  

- events
- path
- process
- express :heavy_check_mark: 
- stream

# Pergunta 3
O Node.js permite a utilização de dois sistemas para programação modular: (1) CommonJS e (2) ES Modules. 


Com o CommonJS, os módulos são importados por meio de chamadas à função "require" e a exposição de recursos de um módulo é feita por meio de atributos do objeto "module.exports". Na abordagem do ES Modules, a importação de módulos é feita por meio da declaração "import" e a exposição de recursos de um módulo é feita por meio da declaração "export".

 

Os blocos de código a seguir ilustram o uso do CommonJS e ES Modules. 

```
// CommonJS
const fs = require( 'fs')

const msg = 'Hello'
module.exports = { msg }
```

```
// ES Modules
import fs from 'fs'

export const msg = 'Hello’
```
Com base nessa introdução, analise as afirmativas e marque a CORRETA:

- Os módulos CommonJS e ES Modules são compatíveis e não requerem de configurações adicionais 
- Se nada for especificado em um projeto, o Node.js utiliza ES Modules como sistema de módulos 
- Tanto o CommonJS quanto o ES Modules podem ser utilizados nos browsers modernos 
- O CommonJS é a implementação de módulos recomendada para a Linguagem JavaScript :heavy_check_mark:
- Enquanto a carga de módulos CommonJS é síncrona, nos módulos ES Modules, é assíncrona 

# Pergunta 4
O Express Framework é baseado no Connect Middleware, um mecanismo que administra um conjunto de funções para o tratamento de requisições Web.

Todas as alternativas a seguir apresentam opções de middlewares que podem ser utilizados em uma aplicação:

- static
- json
- error :heavy_check_mark:
- urlencoded
- cookie-parser

# Pergunta 5
O Express Framework é baseado no Connect Middleware, um mecanismo que administra um conjunto de funções para o tratamento de requisições Web. As funções de middleware recebem a requisição (req) e resposta (res) de uma interação via protocolo HTTP além de um apontador para a próxima função no pipeline do ciclo de requisição e resposta do aplicativo. 

Com relação ao Middleware Manager do Express Framework, analise as afirmativas abaixo e marque a afirmativa INCORRETA:

- a cada rota de uma aplicação podem ser associados uma ou mais função de middleware
- é possível associar um middleware a todos os métodos HTTP de uma única vez
- Se um middleware não utiliza o apontador para o próximo middleware, o processamento é encerrado prontamente
- existem middlewares nativos do framework e middlewares criados por terceiros
- Na cadeia de processamento, um middleware não pode alterar a requisição por questões de segurança da informação :heavy_check_mark: