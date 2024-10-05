/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aassis-p <aassis-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 21:48:13 by aassis-p          #+#    #+#             */
/*   Updated: 2024/10/04 22:44:03 by aassis-p         ###   ########.fr       */
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

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	*temp;
	size_t			sizetotal;

	sizetotal = nmemb * size;
	temp = malloc(sizetotal);
	if (temp == NULL)
	{
		return (NULL);
	}
	ft_bzero(temp, sizetotal);
	return (temp);
}
