# Important commands

```bash
cat > fileName
```

- Cria um arquivo e abre espaço para incluir informações
  - crtl + c para de escrever dentro do arquivo

```bash
echo "algum texto" > fileName
```

- Apaga as informações de um arquivo e escreve o texto

```bash
echo "algum texto" >> fileName
```

- Adiciona ao final do arquivo o texto selecionado

```bash
wc fileName
```

- Faz uma contagem de linhas; palavras; bytes

```bash
grep --color -E "expressão regular" fileName
```

- Realiza uma busca utilizando uma expressão regular em um arquivo
  - [-E] expressões regulares mais complexas
  - [--color] destaca as as respostas em vermelho

