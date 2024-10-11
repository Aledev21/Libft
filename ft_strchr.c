/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aassis-p <aassis-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 18:49:36 by aassis-p          #+#    #+#             */
/*   Updated: 2024/10/10 17:52:00 by aassis-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t			i;
	unsigned char	copyc;

	i = 0;
	copyc = (unsigned char)c;
	while (s[i] != '\0' )
	{
		if (s[i] == copyc)
		{
			return ((char *)&s[i]);
		}
		i++;
	}
	if (copyc == '\0')
	{
		return ((char *)&s[i]);
	}
	return (NULL);
}
