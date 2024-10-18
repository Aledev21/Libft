/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aassis-p <aassis-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 02:01:41 by aassis-p          #+#    #+#             */
/*   Updated: 2024/10/18 13:38:36 by aassis-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (little[0] == '\0')
		return ((char *)big);
	while (i < len && big[i])
	{
		j = 0;
		while (big[i + j] == little[j] && (i + j < len) && little[j])
		{
			j++;
		}
		if (little[j] == '\0')
		{
			return ((char *)big + i);
		}
		i++;
	}
	return (NULL);
}

/*#include <stdio.h>
#include <assert.h>
#include <string.h>

void test_ft_strnstr() {
    // Teste 1: Substring encontrada dentro do limite
    char *result1 = ft_strnstr("Hello, World!", "World", 13);
    assert(result1 == &"Hello, World!"[7]);
	// Espera-se que retorne o ponteiro para 'W'
    printf("Teste 1 passou: Substring encontrada dentro do limite.\n");

    // Teste 2: Substring não encontrada
    char *result2 = ft_strnstr("Hello, World!", "Universe", 13);
    assert(result2 == NULL); // Espera-se que retorne NULL
    printf("Teste 2 passou: Substring não encontrada.\n");

    // Teste 3: Substring encontrada em string menor que o limite
    char *result3 = ft_strnstr("Hello", "lo", 5);
    assert(result3 == &"Hello"[3]); 
	
	// Espera-se que retorne o ponteiro para 'l'
    printf("Teste 3 passou: Substring encontrada \n");

    // Teste 4: Substring vazia
    char *result4 = ft_strnstr("Hello, World!", "", 13);
    assert(strcmp(result4, "Hello, World!") == 0); 
	// Espera-se que retorne o ponteiro para o início
    printf("Teste 4 passou: Substring vazia.\n");

    // Teste 5: Limite menor que o tamanho da string
    char *result5 = ft_strnstr("Hello, World!", "World", 5);
    assert(result5 == NULL); 
	// Espera-se que retorne NULL (dentro do limite de 5)
    printf("Teste 5 passou: Limite menor que o tamanho da string.\n");

    // Teste 6: Substring que ocupa todo o limite
    char *result6 = ft_strnstr("abcde", "abcde", 5);
    assert(strcmp(result6, "abcde") == 0); 
	// Espera-se que retorne o ponteiro para o início
    printf("Teste 6 passou: Substring que ocupa todo o limite.\n");

    printf("Todos os testes passaram!\n");
}

int main() {
    test_ft_strnstr();
    return 0;
}*/