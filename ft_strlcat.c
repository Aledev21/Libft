/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aassis-p <aassis-p@student.42.rio>          +#+  +:+       +#+       */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 01:27:49 by aassis-p          #+#    #+#             */
/*   Updated: 2024/10/13 01:53:35 by aassis-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>


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

int main() {
    char dst[10] = "123"; // Buffer donde almacenar el resultado
    const char *src = "456";

    printf("%zu\n", ft_strlcat(dst, src, sizeof(dst)));
    printf("Resultado: %s\n", dst); // Muestra el resultado concatenado
    return 0;
}