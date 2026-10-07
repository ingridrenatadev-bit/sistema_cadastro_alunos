# Sistema de Gestão de Turma (C)

Programa de terminal em C para gerenciar uma turma de até 30 alunos: cadastro, listagem com média, busca por nome e estatísticas de aprovação.

Foi meu primeiro projeto completo e me ajudou a praticar arrays, `struct`, funções, validação de entrada e fluxo de trabalho com Git.

## Funcionalidades

1. **Cadastro:** registra alunos em uma `struct`, com limite de 30 (memória estática).
2. **Listagem:** mostra os dados de cada aluno e calcula a média.
3. **Busca por nome:** localiza um aluno pelo nome.
4. **Estatísticas da turma:** conta quantos alunos estão aprovados, em recuperação e reprovados. Trata o caso de turma vazia.
5. **Sair:** encerra o programa.

<!-- Se quiser, informe a regra: "Aprovado: média >= X; recuperação: entre X e Y; reprovado: abaixo de Y". -->

## Como executar

É preciso ter o compilador GCC instalado.

```bash
git clone https://github.com/ingridrenatadev-bit/sistema_cadastro_alunos.git
cd sistema_cadastro_alunos
gcc main.c -o sistema_cadastro_alunos
./sistema_cadastro_alunos
```

No Windows, o executável gerado é `sistema_cadastro_alunos.exe`.

## O que aprendi

- **Entrada de dados em C:** o `scanf` deixa lixo no buffer quando o usuário digita algo inesperado, e isso pode causar loop infinito. Resolvi limpando o buffer antes de ler de novo.
- **Separar busca de exibição:** a função de busca só devolve o índice do aluno (ou `-1` se não encontrar). Quem mostra o resultado na tela é outra parte do programa, o que deixa o código mais fácil de testar e reaproveitar.
- **Tratar casos limite:** o que acontece com a turma vazia, ou ao tentar cadastrar o 31º aluno.
- **Git na prática:** trabalhei com branches (`feat/`, `refactor/`), resolvi conflitos de merge e usei Pull Requests.

## Limitações conhecidas

- Os dados ficam só na memória: ao fechar o programa, tudo se perde.
- O limite de 30 alunos é fixo.
- Não há testes automatizados.

## Próximos passos

- [ ] Salvar e carregar os alunos de um arquivo
- [ ] Permitir editar e remover alunos
- [ ] Reescrever o mesmo sistema em Python para comparar as duas abordagens


Ingrid Renata Rodrigues
[LinkedIn](https://www.linkedin.com/in/ingrid-renatarodrigues-264286342) · [GitHub](https://github.com/ingridrenatadev-bit)
