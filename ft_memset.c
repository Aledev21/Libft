/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aassis-p <aassis-p@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-09-26 19:28:58 by aassis-p          #+#    #+#             */
/*   Updated: 2024-09-26 19:28:58 by aassis-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*temp;
	int				i;

	temp = (unsigned char *)b;
	i = 0;

	while (len > 0)
	{
		temp[i] = (unsigned char) c;
		i++;
		len--;
	}

	return (b);
}
