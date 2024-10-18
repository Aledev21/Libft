/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aassis-p <aassis-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 22:05:02 by aassis-p          #+#    #+#             */
/*   Updated: 2024/10/18 13:44:25 by aassis-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while ((s1[i] || s2[i]) && i < n)
	{
		if ((unsigned char) s1[i] != (unsigned char) s2[i])
			return ((unsigned char) s1[i] - (unsigned char) s2[i]);
		i++;
	}
	return (0);
}

/*#include <stdio.h>
#include <assert.h>
#include <string.h>

void test_ft_strncmp() {
    // Teste 1: Comparando duas strings iguais
    int result1 = ft_strncmp("Hello", "Hello", 5);
    assert(result1 == 0); // Espera-se que retorne 0
    printf("Teste 1 passou: Strings iguais.\n");

    // Teste 2: Comparando strings diferentes
    int result2 = ft_strncmp("Hello", "World", 5);
    assert(result2 < 0); // Espera-se que retorne um valor negativo
    printf("Teste 2 passou: Strings diferentes.\n");

    // Teste 3: Comparando strings com um limite menor
    int result3 = ft_strncmp("Hello", "Hello, World", 5);
    assert(result3 == 0); // Espera-se que retorne 0
    printf("Teste 3 passou: Comparação com limite menor.\n");

    // Teste 4: Comparando strings com caracteres diferentes
    int result4 = ft_strncmp("abc", "abd", 3);
    assert(result4 < 0); // Espera-se que retorne um valor negativo
    printf("Teste 4 passou: Comparando caracteres diferentes.\n");

    // Teste 5: Comparando até o limite
    int result5 = ft_strncmp("abcdef", "abcXYZ", 4);
    assert(result5  > 0); // Espera-se que retorne 0
    printf("Teste 5 passou: Comparando até o limite.\n");

    // Teste 6: Comparando com limite zero
    int result6 = ft_strncmp("Hello", "World", 0);
    assert(result6 == 0); // Espera-se que retorne 0
    printf("Teste 6 passou: Comparação com limite zero.\n");

    printf("Todos os testes passaram!\n");
}

int main() {
    test_ft_strncmp();
    return 0;
}*/