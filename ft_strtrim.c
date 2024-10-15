/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aassis-p <aassis-p@student.42.rio>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 02:07:12 by aassis-p          #+#    #+#             */
/*   Updated: 2024/10/11 06:14:14 by aassis-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int	in_set(char c, char const *set)
{
	while (*set)
	{
		if (c == *set)
		{
			return (1);
		}
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	int		trimlen;
	char	*trimstr;

	end = ft_strlen(s1);
	start = 0;
	while (in_set(s1[start], set))
	{
		start++;
	}
	while (end > start && in_set(s1[end -1], set))
	{
		end--;
	}
	trimlen = end - start;
	printf("%d\n", end);
	trimstr = (char *)ft_calloc(trimlen +1, sizeof(char));
	if (!trimstr)
	{
		return (NULL);
	}
	ft_memcpy(trimstr, s1 + start, trimlen);
	return (trimstr);
}


int  main(void)
{
	char src[] = "acsdadbbabaJamal Biberabababa";
	char set[] = "abc";
	char *result = ft_strtrim(set, src);

	printf("%s\n", result);
	
}