/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aassis-p <aassis-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 19:50:50 by aassis-p          #+#    #+#             */
/*   Updated: 2024/10/18 13:39:39 by aassis-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char			*res;
	char			cc;

	cc = (char)c;
	res = NULL;
	while (*s)
	{
		if (*s == cc)
		{
			res = (char *)s;
		}
		s++;
	}
	if (*s == c)
	{
		res = (char *)s;
	}
	return (res);
}

/*#include <stdio.h>
#include <assert.h>
#include <string.h>

void test_ft_strrchr() {
    // Teste 1: Última ocorrência de um caractere
    char *result1 = ft_strrchr("Hello, World!", 'o');
    assert(result1 == &"Hello, World!"[8]); 
	// Espera-se que retorne o ponteiro para 'o'
    printf("Teste 1 passou: Última ocorrência de um caractere.\n");

    // Teste 2: Caractere não encontrado
    char *result2 = ft_strrchr("Hello, World!", 'x');
    assert(result2 == NULL); // Espera-se que retorne NULL
    printf("Teste 2 passou: Caractere não encontrado.\n");

    // Teste 3: Última ocorrência é o primeiro caractere
    char *result3 = ft_strrchr("aaaaaa", 'a');
    assert(result3 == &"aaaaaa"[5]); 
	// Espera-se que retorne o ponteiro para o último 'a'
    printf("Teste 3 passou: Última ocorrência é o primeiro caractere.\n");

    // Teste 4: Última ocorrência em string vazia
    char *result4 = ft_strrchr("", 'a');
    assert(result4 == NULL); // Espera-se que retorne NULL
    printf("Teste 4 passou: Última ocorrência em string vazia.\n");

    // Teste 5: Caractere nulo
    char *result5 = ft_strrchr("Hello, World!", '\0');
    assert(result5 == &"Hello, World!"[13]); 
	// Espera-se que retorne o ponteiro para o final da string
    printf("Teste 5 passou: Caractere nulo.\n");

    // Teste 6: Caractere em uma string que contém apenas o caractere procurado
    char *result6 = ft_strrchr("bbbbbb", 'b');
    assert(result6 == &"bbbbbb"[5]); 
	// Espera-se que retorne o ponteiro para o último 'b'
    printf("Teste 6 passou: Caractere em uma string \n");

    printf("Todos os testes passaram!\n");
}

int main() {
    test_ft_strrchr();
    return 0;
}*/