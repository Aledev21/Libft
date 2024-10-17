/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aassis-p <aassis-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 21:28:26 by aassis-p          #+#    #+#             */
/*   Updated: 2024/10/16 10:51:21 by aassis-p         ###   ########.fr       */
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
