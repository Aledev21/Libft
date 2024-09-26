/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aassis-p <aassis-p@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-09-26 21:28:26 by aassis-p          #+#    #+#             */
/*   Updated: 2024-09-26 21:28:26 by aassis-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char		*destcpy;
	const unsigned char	*srccpy;

	if (dst == NULL || src == NULL)
	{
		return (dst);
	}
	srccpy = (unsigned char *)src;
	destcpy = (unsigned char *)dst;

	if (n == 0)
	{
		return (dst);
	}

	while (n > 0)
	{
		*(destcpy++) = *(srccpy++);
		n--;
	}
	return (dst);
}

#include <stdio.h>
#include <string.h>

void test_ft_memcpy() {
    char src1[] = "Hello, World!";
    char dst1[20];
    ft_memcpy(dst1, src1, strlen(src1) + 1);
    printf("Teste 1: %s\n", strcmp(dst1, src1) == 0 ? "Passou" : "Falhou");

    char src2[] = "Lorem Ipsum";
    char dst2[20];
    ft_memcpy(dst2, src2, 11);
    dst2[11] = '\0'; // Adiciona o terminador nulo
    printf("Teste 2: %s\n", strcmp(dst2, "Lorem Ipsum") == 0 ? "Passou" : "Falhou");

    // Teste com ponteiros nulos
    char *null_src = NULL;
    char null_dst[20];
    void *result = ft_memcpy(null_dst, null_src, 5);
    printf("Teste 3: %s\n", result == null_dst ? "Passou" : "Falhou");

    // Teste com n = 0
    char empty_src[] = "No copy";
    char empty_dst[20];
    strcpy(empty_dst, "Initial");
    ft_memcpy(empty_dst, empty_src, 0);
    printf("Teste 4: %s\n", strcmp(empty_dst, "Initial") == 0 ? "Passou" : "Falhou");

    // Teste se src e dst são o mesmo endereço
    char same_src_dst[] = "Same!";
    ft_memcpy(same_src_dst, same_src_dst, 5);void test_ft_memcpy() {
    char src1[] = "Hello, World!";
    char dst1[20];
    ft_memcpy(dst1, src1, strlen(src1) + 1);
    printf("Teste 1: %s\n", strcmp(dst1, src1) == 0 ? "Passou" : "Falhou");

    char src2[] = "Lorem Ipsum";
    char dst2[20];
    ft_memcpy(dst2, src2, 11);
    dst2[11] = '\0'; // Adiciona o terminador nulo
    printf("Teste 2: %s\n", strcmp(dst2, "Lorem Ipsum") == 0 ? "Passou" : "Falhou");

    // Teste com ponteiros nulos
    char *null_src = NULL;
    char null_dst[20];
    void *result = ft_memcpy(null_dst, null_src, 5);
    printf("Teste 3: %s\n", result == null_dst ? "Passou" : "Falhou"); // src é NULL

    // Teste com n = 0
    char empty_src[] = "No copy";
    char empty_dst[20];
    ft_memcpy(empty_dst, empty_src, 0);
    printf("Teste 4: %s\n", strcmp(empty_dst, "") == 0 ? "Passou" : "Falhou"); // dst deve permanecer inalterado

    // Teste se src e dst são o mesmo endereço
    char same_src_dst[] = "Same!";
    ft_memcpy(same_src_dst, same_src_dst, 5); // Deve não causar problemas
    printf("Teste 5: %s\n", strcmp(same_src_dst, "Same!") == 0 ? "Passou" : "Falhou");
}



int main() {
    test_ft_memcpy();
    return 0;
}
    printf("Teste 5: %s\n", strcmp(same_src_dst, "Same!") == 0 ? "Passou" : "Falhou");
}

int main() {
    test_ft_memcpy();
    return 0;
}


