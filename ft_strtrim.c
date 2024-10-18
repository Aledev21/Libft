/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aassis-p <aassis-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 02:07:12 by aassis-p          #+#    #+#             */
/*   Updated: 2024/10/18 13:39:06 by aassis-p         ###   ########.fr       */
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
	trimstr = (char *)ft_calloc(trimlen +1, sizeof(char));
	if (!trimstr)
	{
		return (NULL);
	}
	ft_memcpy(trimstr, s1 + start, trimlen);
	return (trimstr);
}

/*#include <stdio.h>
#include <assert.h>
#include <string.h>

void test_ft_strtrim() {
    // Teste 1: Trim em uma string com espaços
    char *result1 = ft_strtrim("   Hello, World!   ", " ");
    assert(strcmp(result1, "Hello, World!") == 0);
    free(result1);
    printf("Teste 1 passou: Trim em uma string com espaços.\n");

    // Teste 2: Trim com caracteres especificados
    char *result2 = ft_strtrim("---Hello, World!---", "-");
    assert(strcmp(result2, "Hello, World!") == 0);
    free(result2);
    printf("Teste 2 passou: Trim com caracteres especificados.\n");

    // Teste 3: Trim em uma string já limpa
    char *result3 = ft_strtrim("Hello, World!", " ");
    assert(strcmp(result3, "Hello, World!") == 0);
    free(result3);
    printf("Teste 3 passou: Trim em uma string já limpa.\n");

    // Teste 4: Trim em uma string vazia
    char *result4 = ft_strtrim("", " ");
    assert(strcmp(result4, "") == 0);
    free(result4);
    printf("Teste 4 passou: Trim em uma string vazia.\n");

    // Teste 5: Trim em uma string que contém apenas caracteres a serem removidos
    char *result5 = ft_strtrim("!!!", "!");
    assert(strcmp(result5, "") == 0);
    free(result5);
    printf("Teste 5 passou: Trim em uma string de 1 ctr.\n");

    printf("Todos os testes passaram!\n");
}

int main() {
    test_ft_strtrim();
    return 0;
}*/