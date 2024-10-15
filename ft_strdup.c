/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aassis-p <aassis-p@student.42.rio>          +#+  +:+       +#+       */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 22:46:39 by aassis-p          #+#    #+#             */
/*   Updated: 2024/10/10 17:31:59 by aassis-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*copy;
	size_t	size;
	size_t	i;

	i = 0;
	size = ft_strlen(s) + 1;
	copy = malloc(size);
	if (copy == NULL)
	{
		return (NULL);
	}
	while (i < size)
	{
		copy[i] = s[i];
		i++;
	}
	return (copy);
}
