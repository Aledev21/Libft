/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aassis-p <aassis-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 01:42:02 by aassis-p          #+#    #+#             */
/*   Updated: 2024/10/18 13:24:14 by aassis-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*ss1;
	unsigned char	*ss2;

	ss1 = (unsigned char *)s1;
	ss2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (ss1[i] != ss2[i])
		{
			return (ss1[i] - ss2[i]);
		}
		i++;
	}
	return (0);
}

/*#include <stdio.h>
#include <string.h>
#include <assert.h>

void test_ft_memcmp() {
    // Teste 1: Memórias idênticas
    const char *str1 = "Hello, World!";
    const char *str2 = "Hello, World!";
    assert(ft_memcmp(str1, str2, 13) == 0);
    printf("Teste 1 passou: Memórias idênticas.\n");

    // Teste 2: Memórias diferentes
    const char *str3 = "Hello, World!";
    const char *str4 = "Hello, Wxrld!";
    assert(ft_memcmp(str3, str4, 13) != 0);
    printf("Teste 2 passou: Memórias diferentes.\n");

    // Teste 3: Memória com comparação parcial
    const char *str5 = "abcdef";
    const char *str6 = "abcxyz";
    assert(ft_memcmp(str5, str6, 3) == 0); // Igual nos primeiros 3 caracteres
    assert(ft_memcmp(str5, str6, 6) != 0); // Diferente ao longo de toda a string
    printf("Teste 3 passou: Comparação parcial.\n");

    // Teste 4: Tamanho zero
    const char *str7 = "Hello";
    const char *str8 = "Hello";
    assert(ft_memcmp(str7, str8, 0) == 0); // Tamanho 0, deve ser igual
    printf("Teste 4 passou: Comparação com tamanho zero.\n");

    // Teste 5: Memórias com caracteres especiais
    const char *str9 = "abc\xFF"; // Com um caractere especial
    const char *str10 = "abc\xFE"; // Outro caractere especial
    assert(ft_memcmp(str9, str10, 4) != 0); // Diferente no último caractere
    printf("Teste 5 passou: Memórias com caracteres especiais.\n");

    // Teste 6: Comparando diferentes tamanhos
    const char *str11 = "abc";
    const char *str12 = "abcd";
    assert(ft_memcmp(str11, str12, 3) == 0); 
	// Igual nos 3 primeiros caracteres
    assert(ft_memcmp(str11, str12, 4) != 0); 
	// Diferente ao longo de toda a string
    printf("Teste 6 passou: Comparando diferentes tamanhos.\n");

    printf("Todos os testes passaram!\n");
}

int main() {
    test_ft_memcmp();
    return 0;
}*/
