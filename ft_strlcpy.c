/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aassis-p <aassis-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 00:37:57 by aassis-p          #+#    #+#             */
/*   Updated: 2024/10/18 14:08:33 by aassis-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	len;

	len = 0;
	while (src[len] != '\0')
	{
		len++;
	}
	if (dstsize > 0)
	{
		i = 0;
		while (i < dstsize -1 && src[i] != '\0')
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (len);
}

/*#include "libft.h"
#include <stdio.h>
#include <string.h>

int main() {
    char dst[100];
    const char *src;
    size_t dstsize;

    // Test case 1: Empty source string
    src = "";
    dstsize = 10;
    ft_strlcpy(dst, src, dstsize);
    printf("Test 1 (empty source): dst = \"%s\", expected length = 0\n", dst);
    if (dst[0] == '\0' && ft_strlcpy(dst, src, dstsize) == 0) {
        printf("Test 1 passed\n");
    } else {
        printf("Test 1 failed\n");
    }

    // Test case 2: Source string shorter than destination size
    src = "Hello";
    dstsize = 10;
    ft_strlcpy(dst, src, dstsize);
    printf("Test 2 (source shorter): dst = \"%s\", expected length = 5\n", dst);
    if (strcmp(dst, src) == 0 && ft_strlcpy(dst, src, dstsize) == 5) {
        printf("Test 2 passed\n");
    } else {
        printf("Test 2 failed\n");
    }

    // Test case 4: Destination size is 0 (should not modify destination)
    src = "Any string";
    dstsize = 0;
    char original_dst[100];
    strcpy(original_dst, dst); // Save original content
    ft_strlcpy(dst, src, dstsize);
    printf("Test 4 (dstsize 0): dst = \"%s\" (should remain unchanged)\n", dst);
    if (strcmp(dst, original_dst) == 0) {
        printf("Test 4 passed\n");
    } else {
        printf("Test 4 failed\n");
    }

    return 0;
}*/