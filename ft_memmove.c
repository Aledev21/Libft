/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aassis-p <aassis-p@student.42.rio>          +#+  +:+       +#+       */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 16:16:01 by aassis-p          #+#    #+#             */
/*   Updated: 2024/10/01 00:27:26 by aassis-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*destcpy;
	char	*srccpy;
	size_t	i;

	destcpy = (char *) dst;
	srccpy = (char *)src;
	if (!destcpy && !srccpy)
		return (NULL);
	i = 0;
	if (destcpy > srccpy)
		while (len--)
			destcpy[len] = srccpy[len];
	else
	{
		while (i < len)
		{
			destcpy[i] = srccpy[i];
			i++;
		}
	}
	return (dst);
}
