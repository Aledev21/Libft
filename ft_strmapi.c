/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aassis-p <aassis-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 15:39:18 by aassis-p          #+#    #+#             */
/*   Updated: 2024/10/18 14:07:00 by aassis-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	len;
	size_t	i;
	char	*str;

	i = 0;
	if (!s || !f)
	{
		return (NULL);
	}
	len = ft_strlen(s);
	str = (char *)malloc(sizeof(char) * (len +1));
	if (!str)
	{
		return (NULL);
	}
	while (i < len)
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[len] = '\0';
	return (str);
}

/*#include <stdio.h>
#include <assert.h>
#include <string.h>


char example_func(unsigned int index, char c) {
    return c + index; // Exemplo: adiciona o índice ao caractere
}

// Teste da função ft_strmapi
void test_ft_strmapi() {
    // Teste 1: Aplicando a função em uma string normal
    char *result1 = ft_strmapi("abc", example_func);
    assert(strcmp(result1, "abc") != 0); 
	// Espera-se que seja diferente
    printf("Teste 1 passou: 'abc' transformado.\n");
    free(result1); 

    // Teste 2: String vazia
    char *result2 = ft_strmapi("", example_func);
    assert(strcmp(result2, "") == 0); 
	// Espera-se que retorne uma string vazia
    printf("Teste 2 passou: String vazia retornou string vazia.\n");
    free(result2); 

    // Teste 3: NULL como string
    char *result3 = ft_strmapi(NULL, example_func);
    assert(result3 == NULL); // Espera-se que retorne NULL
    printf("Teste 3 passou: NULL retornou NULL.\n");

    // Teste 4: NULL como função
    char *result4 = ft_strmapi("abc", NULL);
    assert(result4 == NULL); // Espera-se que retorne NULL
    printf("Teste 4 passou: Função NULL retornou NULL.\n");

    // Teste 5: Função que transforma caracteres
    char *result5 = ft_strmapi("hello", example_func);
    assert(strcmp(result5, "hfnos") == 0); 
	// 'h' + 0, 'e' + 1, 'l' + 2, 'l' + 3, 'o' + 4
    printf("Teste 5 passou: 'hello' transformado corretamente.\n");
    free(result5); 

    printf("Todos os testes passaram!\n");
}

int main() {
    test_ft_strmapi();
    return 0;
}*/