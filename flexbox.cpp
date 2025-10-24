<!DOCTYPE html>
<html lang="pt-br">
  <head>
    <meta charset="UTF-8" />
    <meta name="viewport" content="width=device-width, initial-scale=1.0" />
    <title>Flexbox - Hub</title>
    <link rel="stylesheet" href="style.css" />
  </head>

  <body>
    <header>
      <h1>Conceitos de Flexbox</h1>
      <nav>
        <a href="index.html">Início</a>
        <a href="grid.html">Grid</a>
      </nav>
    </header>

    <main>
      <section>
        <h2>O que é Flexbox?</h2>
        <p>
          O Flexbox (Flexible Box Layout) é um modo de layout do CSS que permite
          organizar os elementos de forma mais fácil, flexível e responsiva. Ele
          é ótimo para alinhar itens em linhas ou colunas.
        </p>
      </section>

      <section>
        <h2>Propriedades principais</h2>
        <ul>
          <li>
            <b>display: flex;</b> → ativa o comportamento flexível no container.
          </li>
          <li><b>justify-content:</b> → alinha os itens horizontalmente.</li>
          <li><b>align-items:</b> → alinha os itens verticalmente.</li>
          <li>
            <b>flex-direction:</b> → define a direção dos itens (linha ou
            coluna).
          </li>
        </ul>
      </section>

      <section>
        <h2>Exemplo prático</h2>
        <div class="flex-container">
          <div class="item">1</div>
          <div class="item">2</div>
          <div class="item">3</div>
        </div>
      </section>
    </main>

    <footer>
      <p>Feito por Gabryele Camargo - Trabalho</p>
    </footer>
  </body>
</html>
