/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aassis-p <aassis-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 01:33:32 by aassis-p          #+#    #+#             */
/*   Updated: 2024/10/16 11:00:43 by aassis-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	count_words(const char *s, char c)
{
	int	count;
	int	in_word;

	count = 0;
	in_word = 0;
	while (*s)
	{
		if (*s != c && !in_word)
		{
			in_word = 1;
			count++;
		}
		else if (*s == c)
		{
			in_word = 0;
		}
		s++;
	}
	return (count);
}

static	char	*next_words(const char **s, char c)
{
	const char	*start;
	size_t		len;

	start = *s;
	len = 0;
	while (**s && **s == c)
	{
		(*s)++;
	}
	start = *s;
	while (**s && **s != c)
	{
		len++;
		(*s)++;
	}
	if (len > 0)
	{
		return (ft_substr(start, 0, len));
	}
	return (NULL);
}

static void	free_array(void **array, size_t size)
{
	size_t	i;

	i = 0;
	if (!array)
	{
		return ;
	}
	while (i < size)
	{
		free(array[i]);
		i++;
	}
	free(array);
}

char	**ft_split(char const *s, char c)
{
	char				**array;
	unsigned int		word_count;
	size_t				i;

	i = 0;
	if (!s)
		return (NULL);
	word_count = count_words(s, c);
	array = (char **)malloc((word_count +1) * sizeof(char *));
	if (array == NULL)
		return (NULL);
	while (i < word_count)
	{
		array[i] = next_words(&s, c);
		if (!array[i])
		{
			free_array((void **)array, i);
		}
		i++;
	}
	array[i] = NULL;
	return (array);
}
