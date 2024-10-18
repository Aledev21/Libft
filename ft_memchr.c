/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aassis-p <aassis-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 01:25:38 by aassis-p          #+#    #+#             */
/*   Updated: 2024/10/18 13:20:13 by aassis-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*ss;
	unsigned char		cc;
	size_t				i;

	ss = (const unsigned char *)s;
	cc = (unsigned char )c;
	i = 0;
	while (i < n)
	{
		if (ss[i] == cc)
		{
			return ((void *)&ss[i]);
		}
		i++;
	}
	return (NULL);
}

/*#include <stdio.h>
#include <string.h>
#include <assert.h>

void test_ft_memchr() {
    // Teste 1: Encontrar um caractere no início da string
    const char *str1 = "Hello, World!";
    assert(ft_memchr(str1, 'H', 13) == &str1[0]); 
	// Deve retornar o endereço de 'H'

    // Teste 2: Encontrar um caractere no meio da string
    assert(ft_memchr(str1, 'o', 13) == &str1[4]); 
	// Deve retornar o endereço de 'o'

    // Teste 3: Encontrar um caractere no final da string
    assert(ft_memchr(str1, '!', 13) == &str1[12]); 
	 Deve retornar o endereço de '!'

    // Teste 4: Não encontrar o caractere na string
    assert(ft_memchr(str1, 'x', 13) == NULL); // Deve retornar NULL

    // Teste 5: Verificar o comportamento com n=0
    assert(ft_memchr(str1, 'H', 0) == NULL); // Deve retornar NULL, pois n é 0

    // Teste 6: Encontrar um caractere em um array de bytes
    const unsigned char arr[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    assert(ft_memchr(arr, 5, sizeof(arr)) == &arr[5]); 
	// Deve retornar o endereço de '5'

    // Teste 7: Não encontrar o caractere no array de bytes
    assert(ft_memchr(arr, 10, sizeof(arr)) == NULL); // Deve retornar NULL
    printf("Todos os testes passaram!\n");
}

int main() {
    test_ft_memchr();
    return 0;
}*/