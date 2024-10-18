/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aassis-p <aassis-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 21:28:26 by aassis-p          #+#    #+#             */
/*   Updated: 2024/10/18 14:23:42 by aassis-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char		*destcpy;
	const unsigned char	*srccpy;

	if (!dst && !src)
	{
		return (NULL);
	}
	srccpy = (const unsigned char *)src;
	destcpy = (unsigned char *)dst;
	while (n > 0)
	{
		*(destcpy++) = *(srccpy++);
		n--;
	}
	return (dst);
}

/*#include <stdio.h>
#include <string.h>
#include <assert.h>

void test_ft_memcpy() {
    char src[] = "Hello, World!";
    char dest[20];

    // Teste 1: Copiando uma string
    assert(ft_memcpy(dest, src, 13) == dest);
    assert(strcmp(dest, "Hello, World!") == 0);
    printf("Teste 1 passou: '%s'\n", dest);

    // Teste 2: Copiando com n zero
    assert(ft_memcpy(dest, src, 0) == dest);
    assert(strcmp(dest, "Hello, World!") == 0);
    printf("Teste 2 passou: Copia com n = 0, resultado: '%s'\n", dest);

    // Teste 3: Copiando para um ponteiro nulo
   // assert(ft_memcpy(NULL, src, 5) == NULL);
   // assert(ft_memcpy(dest, NULL, 5) == NULL);
    //printf("Teste 3 passou: Copia com ponteiro nulo.\n");

    // Teste 4: Copiando menos caracteres
    char partial[10];
    assert(ft_memcpy(partial, src, 5) == partial);
    partial[5] = '\0'; // Adicionando terminador nulo manualmente
    assert(strcmp(partial, "Hello") == 0);
    printf("Teste 4 passou: '%s'\n", partial);
}

int main() {
    test_ft_memcpy();
    return 0;
}*/