/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aassis-p <aassis-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 01:33:32 by aassis-p          #+#    #+#             */
/*   Updated: 2024/10/18 14:27:27 by aassis-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	count_words(const char *s, char c)
{
	int	count;
	int	in_word;

	count = 0;
	in_word = 0;
	while (*s)
	{
		if (*s != c && !in_word)
		{
			in_word = 1;
			count++;
		}
		else if (*s == c)
		{
			in_word = 0;
		}
		s++;
	}
	return (count);
}

static	char	*next_words(const char **s, char c)
{
	const char	*start;
	size_t		len;

	start = *s;
	len = 0;
	while (**s && **s == c)
	{
		(*s)++;
	}
	start = *s;
	while (**s && **s != c)
	{
		len++;
		(*s)++;
	}
	if (len > 0)
	{
		return (ft_substr(start, 0, len));
	}
	return (NULL);
}

static void	free_array(void **array, size_t size)
{
	size_t	i;

	i = 0;
	if (!array)
	{
		return ;
	}
	while (i < size)
	{
		free(array[i]);
		i++;
	}
	free(array);
}

char	**ft_split(char const *s, char c)
{
	char				**array;
	unsigned int		word_count;
	size_t				i;

	i = 0;
	if (!s)
		return (NULL);
	word_count = count_words(s, c);
	array = (char **)malloc((word_count +1) * sizeof(char *));
	if (array == NULL)
		return (NULL);
	while (i < word_count)
	{
		array[i] = next_words(&s, c);
		if (!array[i])
		{
			free_array((void **)array, i);
		}
		i++;
	}
	array[i] = NULL;
	return (array);
}

/*#include <stdio.h>
#include <string.h>
#include <assert.h>
#include "libft.h"

void free_split_array(char **array) {
    for (int i = 0; array[i] != NULL; i++) {
        free(array[i]);
    }
    free(array);
}

void test_ft_split() {
    char **result;

    // Teste 1: Dividir uma frase simples
    result = ft_split("Hello World", ' ');
    assert(result != NULL);
    assert(strcmp(result[0], "Hello") == 0);
    assert(strcmp(result[1], "World") == 0);
    assert(result[2] == NULL); // Termina com NULL
    free_split_array(result);
    printf("Teste 1 passou.\n");

    // Teste 2: Dividir com vírgulas
    result = ft_split("apple,banana,cherry", ',');
    assert(result != NULL);
    assert(strcmp(result[0], "apple") == 0);
    assert(strcmp(result[1], "banana") == 0);
    assert(strcmp(result[2], "cherry") == 0);
    assert(result[3] == NULL); // Termina com NULL
    free_split_array(result);
    printf("Teste 2 passou.\n");

    // Teste 3: Dividir com múltiplos espaços
    result = ft_split("   foo   bar   baz   ", ' ');
    assert(result != NULL);
    assert(strcmp(result[0], "foo") == 0);
    assert(strcmp(result[1], "bar") == 0);
    assert(strcmp(result[2], "baz") == 0);
    assert(result[3] == NULL); // Termina com NULL
    free_split_array(result);
    printf("Teste 3 passou.\n");

    // Teste 4: Sem delimitadores
    result = ft_split("singleword", ' ');
    assert(result != NULL);
    assert(strcmp(result[0], "singleword") == 0);
    assert(result[1] == NULL); // Apenas uma palavra
    free_split_array(result);
    printf("Teste 4 passou.\n");
}

int main() {
    test_ft_split();
    return 0;
}*/