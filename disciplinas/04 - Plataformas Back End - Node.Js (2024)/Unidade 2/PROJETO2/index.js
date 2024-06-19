const express = require('express');
const app = express();

app.use(express.json());


app.use((req, res, next) => {
  console.log("data", new Date().toLocaleDateString(), req.method, req.path);

  next()
})

// app.get('/', (req, res) => {
//   res.send('Hello World!');
// })

// app.use( (req, res) => {
//   res.status(404).send('Not Found');
// })

app.use('/site', express.static('public'));

app.post('/users', (req, res) => {
  dados = req.body;
  console.log(dados);
  res.send(`Informação recebida com sucesso. Seja bem-vindo ${ dados.nome } (${ dados.email })!`);
})


// app.get('/users/:nome', (req, res) => {
//   res.send(`Olá ${ req.params.nome } - cidade: ${req.query.cidade}!`);
// });

app.get('/users/site', (req, res) => {
  res.redirect('/site')
});

app.get('/dados', (req, res) => {
  // res.format({
  //   'text/html': () => {
  //     res.send("<h1>Olá</h1>");
  //   },
  //   'application/json': () => {	
  //     res.send({ name: 'Olá' });
  //   }
  // })

  console.log(req.get('accept'));
  if (req.accepts('application/json')) {
    res.send({ name: 'Olá' });
  } else {
    res.send("<h1>Olá</h1>");
  }
});

app.listen(3000, () => {
  console.log('Listening on port 3000');
})