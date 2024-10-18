/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aassis-p <aassis-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 20:02:27 by aassis-p          #+#    #+#             */
/*   Updated: 2024/10/18 12:49:51 by aassis-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*temp;

	temp = (unsigned char *)s;
	while (n > 0)
	{
		*(temp++) = 0;
		n--;
	}
}

/*#include <stdio.h>
#include <string.h>
#include <assert.h>

void test_ft_bzero() {
    // Teste 1: Zerar um bloco de memória pequeno
    char str1[10] = "abcdefghij";
    ft_bzero(str1, 5);
    assert(memcmp(str1, "\0\0\0\0\0fghij", 10) == 0);

    // Teste 3: Zerar exatamente 0 bytes
    char str3[10] = "abcdefghij";
    ft_bzero(str3, 0);
    assert(memcmp(str3, "abcdefghij", 10) == 0); // Não deve mudar nada

    // Teste 4: Zerar o máximo possível
    char str4[10] = "1234567890";
    ft_bzero(str4, sizeof(str4));
    assert(memcmp(str4, "\0\0\0\0\0\0\0\0\0\0", 10) == 0);

    // Teste 5: Zerar um bloco de memória com 1 byte
    char str5[5] = "abcd";
    ft_bzero(str5, 1);
    assert(memcmp(str5, "\0bcd", 5) == 0);

    printf("Todos os testes passaram!\n");
}

int main() {
    test_ft_bzero();
    return 0;
}*/
