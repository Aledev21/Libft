/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aassis-p <aassis-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 01:16:03 by aassis-p          #+#    #+#             */
/*   Updated: 2024/10/13 01:53:30 by aassis-p         ###   ########.fr       */
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

static char	*v_str(const char *s1, const char *s2, char *result)
{
	char	*start;

	start = result;
	if (s1 != NULL)
	{
		while (*s1)
		{
			*result++ = *s1++;
		}
	}
	if (s2 != NULL)
	{
		while (*s2)
		{
			*result++ = *s2++;
		}
	}
	*result = '\0';
	return (start);
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
	{
		return (NULL);
	}
	return (result = v_str(s1, s2, result));
}

/*void test_strjoin(const char *s1, const char *s2, const char *expected) {
    char *result = ft_strjoin(s1, s2);
    if (result == NULL) {
        printf("Result: NULL, Expected: %s\n", expected);
    } else {
        if (strcmp(result, expected) == 0) {
            printf("Test passed: '%s' + '%s' = '%s'\n", s1, s2, result);
        } else {
            printf("Test failed: '%s' + '%s' = '%s', 
			expected '%s'\n", s1, s2, result, expected);
        }
        free(result);  // Não se esqueça de liberar a memória alocada
    }
}

int main() {
    // Testes
    test_strjoin("Hello, ", "world!", "Hello, world!");
    test_strjoin("foo", "bar", "foobar");
    test_strjoin("", "empty", "empty");
    test_strjoin("non-empty", "", "non-empty");
    test_strjoin(NULL, "test", "test");
    test_strjoin("test", NULL, "test");
    test_strjoin(NULL, NULL, "");
    
    return 0;
}*/