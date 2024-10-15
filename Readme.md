# Libft

![Logo da Libft](https://www.biblio.campusananindeua.ufpa.br/index.php/ultimas-noticias/573-conheca-a-biblioteca-de-alexandria)

## Introdução
Libft é uma biblioteca em C que implementa uma coleção de funções úteis, baseando-se em funções da biblioteca padrão libc e incluindo funcionalidades adicionais. Este projeto é essencial para fornecer ferramentas que podem ser utilizadas em projetos futuros no curso.

## Estrutura do Projeto

### Funções Implementadas

#### Parte 1 - Funções da Libc
As seguintes funções são cópias das funções da biblioteca padrão libc, com a mesma assinatura e comportamento:

- **`ft_isalpha`**: Verifica se um caractere é alfabético.
- **`ft_isdigit`**: Verifica se um caractere é um dígito.
- **`ft_isalnum`**: Verifica se um caractere é alfanumérico.
- **`ft_isascii`**: Verifica se um caractere é um caractere ASCII.
- **`ft_isprint`**: Verifica se um caractere é imprimível.
- **`ft_strlen`**: Retorna o comprimento de uma string.
- **`ft_memset`**: Preenche um bloco de memória com um valor específico.
- **`ft_bzero`**: Zera um bloco de memória.
- **`ft_memcpy`**: Copia um bloco de memória de uma localização para outra.
- **`ft_memmove`**: Move um bloco de memória, lidando com sobreposições.
- **`ft_strlcpy`**: Copia uma string com limite de comprimento.
- **`ft_strlcat`**: Concatena duas strings com limite de comprimento.
- **`ft_toupper`**: Converte um caractere para maiúscula.
- **`ft_tolower`**: Converte um caractere para minúscula.
- **`ft_strchr`**: Localiza a primeira ocorrência de um caractere em uma string.
- **`ft_strrchr`**: Localiza a última ocorrência de um caractere em uma string.
- **`ft_strncmp`**: Compara duas strings até um limite de comprimento.
- **`ft_memchr`**: Localiza um caractere em um bloco de memória.
- **`ft_memcmp`**: Compara dois blocos de memória.
- **`ft_strnstr`**: Localiza uma substring em uma string.
- **`ft_atoi`**: Converte uma string em um inteiro.

Além disso, as seguintes funções, que requerem alocação dinâmica, também foram implementadas:

- **`ft_calloc`**: Aloca e zera um bloco de memória.
- **`ft_strdup`**: Duplica uma string.

#### Parte 2 - Funções Adicionais
As seguintes funções são implementações que não estão na libc ou possuem formas diferentes:

- **`ft_substr`**: Aloca e retorna uma substring a partir de uma string dada.
- **`ft_strjoin`**: Aloca e retorna uma nova string que é a concatenação de duas strings.
- **`ft_strtrim`**: Aloca e retorna uma cópia de uma string, removendo caracteres de um conjunto do início e do fim.
- **`ft_split`**: Aloca e retorna um array de strings resultante da divisão de uma string usando um delimitador.
- **`ft_itoa`**: Aloca e retorna uma string representando um inteiro.
- **`ft_strmapi`**: Aplica uma função a cada caractere de uma string, retornando uma nova string com os resultados.
- **`ft_striteri`**: Aplica uma função a cada caractere de uma string, permitindo modificações.
- **`ft_putchar_fd`**: Envia um caractere para um descritor de arquivo.
- **`ft_putstr_fd`**: Envia uma string para um descritor de arquivo.
- **`ft_putendl_fd`**: Envia uma string para um descritor de arquivo, seguida de uma nova linha.
- **`ft_putnbr_fd`**: Envia um inteiro para um descritor de arquivo.

## Como Usar

### Clonar o Repositório
Clone o repositório da Libft utilizando o seguinte comando:

```bash
git clone https://github.com/Aledev21/Libft.git

cd Libft

make

# Limpar os Arquivos Compilados
make clean

# Remover Todos os Arquivos Gerados
make fclean

# Recompilar a Biblioteca
make re
