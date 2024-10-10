/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aassis-p <aassis-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 02:01:41 by aassis-p          #+#    #+#             */
/*   Updated: 2024/10/08 23:34:23 by aassis-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	
	if(big == NULL)
	{
		
	}
	if (little == NULL)
	{
		return ((char *)big);
	}
	while (i < len && big[i])
	{
		while (big[i +j] == little[j] && big[i +j] && i + j < len)
		{
			j++;
		}
		if (little[j] == '\0')
		{
			return ((char *)big + i);
		}
		i++;
		j = 0;
	}
	return (NULL);
}
