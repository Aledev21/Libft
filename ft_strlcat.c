/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aassis-p <aassis-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 01:27:49 by aassis-p          #+#    #+#             */
/*   Updated: 2024/10/18 14:18:07 by aassis-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	srclen;
	size_t	dstlen;
	size_t	i;

	i = 0;
	srclen = ft_strlen(src);
	dstlen = ft_strlen(dst);
	if (dstsize == 0)
	{
		return (srclen);
	}
	if (dstlen >= dstsize)
	{
		return (dstsize + srclen);
	}
	while (i < (dstsize - dstlen -1) && src[i] != '\0')
	{
		dst[dstlen + i] = src[i];
		i++;
	}
	dst[dstlen + i] = '\0';
	return (dstlen + srclen);
}

/*#include <stdio.h>
#include <assert.h>

void test_ft_strlcat() {
    // Teste 1: Concatenar strings normais
    char dest1[20] = "Hello";
    char *src1 = " World!";
    size_t result1 = ft_strlcat(dest1, src1, sizeof(dest1));
    assert(result1 == 12); // "Hello World!" tem 12 caracteres
    assert(dest1[12] == '\0'); // Deve terminar com nulo
    printf("Teste 1 passou: '%s'\n", dest1);

    // Teste 2: Destino menor que a fonte
    char dest2[10] = "Hello";
    char *src2 = " World!";
    size_t result2 = ft_strlcat(dest2, src2, sizeof(dest2));
    assert(result2 == 12); // Retorno deve ser 12
    assert(dest2[9] == '\0'); // Destino deve ter o nulo no final
    printf("Teste 2 passou: '%s'\n", dest2);

    // Teste 3: Destino vazio
    char dest3[20] = "";
    char *src3 = "Hello";
    size_t result3 = ft_strlcat(dest3, src3, sizeof(dest3));
    assert(result3 == 5); // "Hello" tem 5 caracteres
    assert(dest3[5] == '\0'); // Deve terminar com nulo
    printf("Teste 3 passou: '%s'\n", dest3);

    // Teste 4: Destino cheio
    char dest4[6] = "12345";
    char *src4 = "67890";
    size_t result4 = ft_strlcat(dest4, src4, sizeof(dest4));
    assert(result4 == 10); // "1234567890" teria 10 caracteres
    assert(dest4[5] == '\0'); // Deve terminar com nulo
    printf("Teste 4 passou: '%s'\n", dest4);

    // Teste 5: Verificando comportamento com dstsize 0
    char dest5[20] = "Hello";
    size_t result5 = ft_strlcat(dest5, "World", 0);
    assert(result5 == 5); // "World" tem 5 caracteres
    printf("Teste 5 passou com dstsize 0.\n");
}

int main() {
    test_ft_strlcat();
    return 0;
}*/