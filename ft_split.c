/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aassis-p <aassis-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 01:33:32 by aassis-p          #+#    #+#             */
/*   Updated: 2024/10/09 02:06:51 by aassis-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int count_words(const char *s, char c)
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
		}else if (*s == c)
		{
			in_word = 0;
		}
		s++;
		
	}
	return (count);
}

static char *count_lett(char *s, char c)
{
	int	count;
	
	count = 0;

	while (*s)
	{
		if ()
		{
			
		}
		
	}
	
}

static char *next_words(const char **s, char c)
{
	const char	*start;
	size_t		len;

	start = *s;
	len = 0;
	while (**s && **s != c)
	{
		(*s)++;
	}
	start = *s;
	while (**s && **s !=c)
	{
		len++;
		(*s)++;
	}
	if(len > 0)
	{
		return (ft_substr(start, 0, len));
	}
	return (NULL);
}

char **ft_split(char const *s, char c)
{
	char	**array;
	int		word_count;
	int		i;
	int     j;

	i = 0;
	j = 0;

	if (!s)
	{
		return (NULL);
	}
	word_count = count_words(s,c);
	array = (char **)malloc((word_count +1) * sizeof(char *));
	if (array == NULL)
	{
		return (NULL);
	}
	while (j < word_count)
	{
		*array[j] = malloc()
	}
	
	while (i < word_count)
	{
		array[i] = next_words(&s,c);
		if (!array[i])
		{
			while (i > 0)
			{
				free(array[--i]);
			}
			free(array);
			return (NULL);
		}
		i++;
	}
	array[i] = NULL;
	return (array);
}

void print_split_result(char **result) {
	if (!result) {
		printf("NULL\n");
		return;
	}
	for (int i = 0; result[i] != NULL; i++) {
		printf("\"%s\"\n", result[i]);
	}
}

int main() {
	char **result;

	// Teste 1: String normal
	printf("Teste 1:\n");
	result = ft_split("Hello world this is C", ' ');
	print_split_result(result);
	// Esperado: "Hello", "world", "this", "is", "C"
	
	// Libera a memória alocada
	for (int i = 0; result[i] != NULL; i++) {
		free(result[i]);
	}
	free(result);

	// Teste 2: String com múltiplos delimitadores
	printf("\nTeste 2:\n");
	result = ft_split("Hello,,world,,this,,is,,C", ',');
	print_split_result(result);
	// Esperado: "Hello", "", "world", "", "this", "", "is", "", "C"

	// Libera a memória alocada
	for (int i = 0; result[i] != NULL; i++) {
		free(result[i]);
	}
	free(result);

	// Teste 3: String vazia
	printf("\nTeste 3:\n");
	result = ft_split("", ' ');
	print_split_result(result);
	// Esperado: NULL

	// Libera a memória alocada
	free(result);

	// Teste 4: String com delimitadores no início e no fim
	printf("\nTeste 4:\n");
	result = ft_split(",Hello,world,,", ',');
	print_split_result(result);
	// Esperado: "", "Hello", "world", "", ""

	// Libera a memória alocada
	for (int i = 0; result[i] != NULL; i++) {
		free(result[i]);
	}
	free(result);

	// Teste 5: Delimitador inexistente
	printf("\nTeste 5:\n");
	result = ft_split("HelloWorld", ' ');
	print_split_result(result);
	// Esperado: "HelloWorld"

	// Libera a memória alocada
	for (int i = 0; result[i] != NULL; i++) {
		free(result[i]);
	}
	free(result);

	// Teste 6: String com caracteres especiais
	printf("\nTeste 6:\n");
	result = ft_split("!@#$%^&*()_+", '#');
	print_split_result(result);
	// Esperado: "!@$", "%^&*()_+", ""

	// Libera a memória alocada
	for (int i = 0; result[i] != NULL; i++) {
		free(result[i]);
	}
	free(result);

	return 0;
}