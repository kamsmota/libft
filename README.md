# Projeto Libft

![concluído](https://img.shields.io/badge/concluído-0a4518)

# <h4>📚 Linguagens utilizadas:</h4>

- `C`
- `Makefile`

# <h4>🎯 Objetivo: </h4>
<p> Criar minha própria biblioteca libc, utilizando-a em projetos futuros e por fins educacionais.</p>

# <h4>📖 Descrição</h4>

A **Libft** é o primeiro projeto do currículo da 42 e consiste em reescrever, em C, um conjunto de funções da biblioteca padrão (`libc`), além de funções utilitárias adicionais e de manipulação de linked lists. O resultado é uma biblioteca estática (`libft.a`) que será reutilizada em todos os projetos seguintes.

Visão geral do projeto:

- **Parte 1 - Funções da libc:** reimplementação de funções conhecidas, com o mesmo comportamento dos protótipos originais, mas com o prefixo `ft_`.
- **Parte 2 – Funções adicionais:** funções utilitárias que não existem na libc ou existem em outra forma (manipulação de strings, conversões, escrita em file descriptors).
- **Bônus – Listas encadeadas:** funções para criar e manipular listas usando a estrutura `t_list`.

O projeto reforça conceitos como gerenciamento de memória, ponteiros, manipulação de strings, tratamento de casos limite e organização de código com `Makefile`.

# <h4>⚙️ Instructions</h4>

### Requisitos

- Compilador `cc` (gcc ou clang)
- `make`

### Compilação

Na raiz do repositório:

```bash
make          # compila a biblioteca e gera libft.a
make bonus    # compila também as funções bônus (listas)
make clean    # remove os arquivos objeto (.o)
make fclean   # remove os objetos e a libft.a
make re       # recompila tudo do zero
```

Os arquivos são compilados com as flags `-Wall -Wextra -Werror`.

### Utilização

1. Copie a `libft.a` e o `libft.h` para o seu projeto (ou referencie-os pelo caminho).
2. Inclua o header no seu código:

```c
#include "libft.h"
```

3. Compile seu programa linkando a biblioteca:

```bash
cc -Wall -Wextra -Werror main.c -L. -lft -o programa
```

### Exemplo rápido

```c
#include "libft.h"

int	main(void)
{
	char	*str;

	str = ft_strjoin("Hello, ", "42!");
	ft_putendl_fd(str, 1);
	free(str);
	return (0);
}
```

# <h4>🧰 Biblioteca criada</h4>

A `libft.a` é uma biblioteca estática que reúne todas as funções abaixo. O arquivo `libft.h` contém os protótipos e a definição da estrutura `t_list`.

### Parte 1 – Funções da libc

| Categoria | Funções | Descrição |
|---|---|---|
| Verificação de caracteres | `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint` | Testam se um caractere pertence a determinada classe. |
| Conversão de caixa | `ft_toupper`, `ft_tolower` | Convertem um caractere para maiúsculo/minúsculo. |
| Strings | `ft_strlen`, `ft_strlcpy`, `ft_strlcat`, `ft_strchr`, `ft_strrchr`, `ft_strncmp`, `ft_strnstr`, `ft_strdup` | Cálculo de tamanho, cópia, concatenação, busca e comparação de strings. |
| Memória | `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`, `ft_memchr`, `ft_memcmp`, `ft_calloc` | Manipulação de blocos de memória e alocação dinâmica. |
| Conversão | `ft_atoi` | Converte uma string em inteiro. |

### Parte 2 – Funções adicionais

| Função | Descrição |
|---|---|
| `ft_substr` | Extrai uma substring de uma string. |
| `ft_strjoin` | Concatena duas strings em uma nova string alocada. |
| `ft_strtrim` | Remove de uma string os caracteres de um conjunto, no início e no fim. |
| `ft_split` | Divide uma string em um array de strings usando um delimitador. |
| `ft_itoa` | Converte um inteiro em string. |
| `ft_strmapi` | Aplica uma função a cada caractere, criando uma nova string. |
| `ft_striteri` | Aplica uma função a cada caractere, modificando a string original. |
| `ft_putchar_fd` | Escreve um caractere em um file descriptor. |
| `ft_putstr_fd` | Escreve uma string em um file descriptor. |
| `ft_putendl_fd` | Escreve uma string seguida de quebra de linha em um file descriptor. |
| `ft_putnbr_fd` | Escreve um inteiro em um file descriptor. |

### Bônus – Listas encadeadas

```c
typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;
```

| Função | Descrição |
|---|---|
| `ft_lstnew` | Cria um novo nó. |
| `ft_lstadd_front` | Adiciona um nó no início da lista. |
| `ft_lstsize` | Conta o número de nós da lista. |
| `ft_lstlast` | Retorna o último nó da lista. |
| `ft_lstadd_back` | Adiciona um nó no final da lista. |
| `ft_lstdelone` | Libera um único nó, usando uma função de remoção para o conteúdo. |
| `ft_lstclear` | Libera e remove todos os nós a partir de um nó informado. |
| `ft_lstiter` | Aplica uma função ao conteúdo de cada nó. |
| `ft_lstmap` | Cria uma nova lista aplicando uma função ao conteúdo de cada nó. |

# <h4>🔗 Resources</h4>

### Referências clássicas

- [Manual do Linux (man pages)](https://man7.org/linux/man-pages/) – documentação das funções da libc reimplementadas.
- [The C Programming Language – Kernighan & Ritchie](https://en.wikipedia.org/wiki/The_C_Programming_Language) – livro de referência da linguagem C.
- [GNU Make Manual](https://www.gnu.org/software/make/manual/) – documentação oficial do Make.
- [cppreference – C](https://en.cppreference.com/w/c) – referência da linguagem e da biblioteca padrão.
- [Beej's Guide to C Programming](https://beej.us/guide/bgc/) – guia de C com foco em ponteiros e memória.
- Norma da 42 (Norminette) – regras de estilo de código exigidas pelo currículo.

### Uso de IA

A IA foi utilizada de forma pontual e como apoio ao aprendizado, **não** para gerar o código das funções:

- **Documentação:** auxílio na elaboração e estruturação deste `README.md`.
- **Compreensão de conceitos:** explicações sobre o comportamento esperado de algumas funções da libc e sobre casos limite.
- **Revisão:** sugestões de casos de teste e de pontos de atenção (vazamentos de memória, tratamento de `NULL`).

Use cuidadosamente!
