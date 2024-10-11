/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aassis-p <aassis-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 01:16:03 by aassis-p          #+#    #+#             */
/*   Updated: 2024/10/11 00:25:03 by aassis-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	get_len(const char *s)
{
	if (s == NULL)
	{
		return (0);
	}
	return (ft_strlen(s));
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*result;
	size_t	len1;
	size_t	len2;

	len1 = get_len(s1);
	len2 = get_len(s2);
	result = (char *)malloc(len1 + len2 +1);
	if (result == NULL)
		return (NULL);
	if (s1 != NULL)
	{
		while (s1)
		{
			result = s1++;
		}
	}
	if (s2 != NULL)
	{
		while (result)
		{
			result = s2++;
		}
	}
	result = '\0';
	return (result);
}
