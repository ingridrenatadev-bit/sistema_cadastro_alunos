# 🏫 Sistema de Gestão de Turma em C

Um sistema de gerenciamento estudantil robusto desenvolvido em linguagem C pura, focado em boas práticas de arquitetura, modularização e resiliência de software. O projeto simula o comportamento de um banco de dados em memória RAM e blinda a interface contra entradas inválidas do usuário.

----

##  📌 Contexto Técnico & Desafios de Engenharia 

Este projeto foi desenvolvido sob mentoria de Engenharia de Software, aplicando conceitos de **Clean Architecture** e **Princípio de Responsabilidade Única (SRP)**. 

----
### Principais desafios superados:
*   **Gerenciamento de Buffer em C:** Tratamento de falhas do `scanf` usando loops de limpeza de buffer para evitar comportamento indefinido (*infinite loops*).
*   **Desacoplamento de Lógica (Arquitetura Limpa):** A função de busca por nome foi desenhada de forma independente, retornando ponteiros/índices (`-1` para falhas) em vez de acoplar exibições de tela dentro do algoritmo de busca.
*   **Controle de Versão Profissional (Git Flow):** Gerenciamento de múltiplas branches (`feat/`, `refactor/`), resolução manual de conflitos complexos de *merge* e esteira de entrega via *Pull Requests*.

---

## 🚀 Funcionalidades

1. **Cadastro Estruturado:** Registro de alunos utilizando `struct` com limitação estática de memória (máximo de 30 alunos).
2. **Listagem Consolidada:** Exibição completa de dados com cálculo dinâmico de médias individuais.
3. **Busca Avançada com Validação Booleana:** Barra de pesquisa por nome com controle de fluxo interno via tipo `bool` (`<stdbool.h>`).
4. **Dashboard de Estatísticas (BI):** Módulo focado no cálculo consolidado da turma (Aprovados, Recuperação e Reprovados) com tratamento de segurança para *Edge Case* (Turma Vazia).
5. **Encerramento Seguro:** Rotina de desligamento do software devolvendo os estados corretamente ao Sistema Operacional através de controle de fluxo limpo (`break`).

---
## 🛠️ Como Executar o Projeto

Certifique-se de ter um compilador GCC instalado em sua máquina.

```bash
# 1. Clonar o repositório
git clone https://github.com/ingridrenatadev-bit/sistema_cadastro_alunos.git

# 2. Entrar na pasta
cd sistema_cadastro_alunos

# 3. Compilar o código
gcc main.c -o sistema_cadastro_alunos

# 4. Executar o sistema
./sistema_cadastro_alunos
```

---

