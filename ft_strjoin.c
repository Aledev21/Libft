/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aassis-p <aassis-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 01:16:03 by aassis-p          #+#    #+#             */
/*   Updated: 2024/10/18 14:41:45 by aassis-p         ###   ########.fr       */
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

/*#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void test_ft_strjoin(void)
{
    char *result;

    // Teste 1: Juntar duas strings não nulas
    result = ft_strjoin("Hello, ", "World!");
    if (result && strcmp(result, "Hello, World!") == 0)
        printf("Teste 1 passou: %s\n", result);
    else
        printf("Teste 1 falhou\n");
    free(result);

    // Teste 2: Juntar uma string vazia com uma não vazia
    result = ft_strjoin("", "Test");
    if (result && strcmp(result, "Test") == 0)
        printf("Teste 2 passou: %s\n", result);
    else
        printf("Teste 2 falhou\n");
    free(result);

    // Teste 3: Juntar uma não vazia com uma string vazia
    result = ft_strjoin("Test", "");
    if (result && strcmp(result, "Test") == 0)
        printf("Teste 3 passou: %s\n", result);
    else
        printf("Teste 3 falhou\n");
    free(result);

    // Teste 4: Juntar duas strings vazias
    result = ft_strjoin("", "");
    if (result && strcmp(result, "") == 0)
        printf("Teste 4 passou: %s (string vazia)\n", result);
    else
        printf("Teste 4 falhou\n");
    free(result);

    // Teste 5: Juntar uma string nula com uma não nula
    result = ft_strjoin(NULL, "Only this");
    if (result && strcmp(result, "Only this") == 0)
        printf("Teste 5 passou: %s\n", result);
    else
        printf("Teste 5 falhou\n");
    free(result);

    // Teste 6: Juntar uma string não nula com uma nula
    result = ft_strjoin("Only this", NULL);
    if (result && strcmp(result, "Only this") == 0)
        printf("Teste 6 passou: %s\n", result);
    else
        printf("Teste 6 falhou\n");
    free(result);
}

int main(void)
{
    test_ft_strjoin();
    return 0;
}*/