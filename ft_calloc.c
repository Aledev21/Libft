/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aassis-p <aassis-p@student.42.rio>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 21:48:13 by aassis-p          #+#    #+#             */
/*   Updated: 2024/10/10 17:46:01 by aassis-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	*temp;
	size_t			total_size;

	/*if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}*/
	if (nmemb > __SIZE_MAX__ / size)
	{
		return (NULL);
	}
	total_size = nmemb * size;
	temp = malloc(total_size);
	if (!temp)
	{
		return (NULL);
	}
	ft_bzero(temp, total_size);
	return (temp);
}
