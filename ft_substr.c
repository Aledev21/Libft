/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aassis-p <aassis-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 00:59:38 by aassis-p          #+#    #+#             */
/*   Updated: 2024/10/18 13:29:58 by aassis-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	s_len;

	if (!s)
	{
		return (NULL);
	}
	s_len = ft_strlen(s);
	if (start >= s_len)
	{
		return (ft_strdup(""));
	}
	if (len > s_len - start)
	{
		len = s_len - start;
	}
	substr = (char *)malloc(len + 1);
	if (!substr)
	{
		return (NULL);
	}
	ft_strlcpy(substr, s + start, len + 1);
	return (substr);
}

/*#include <stdio.h>
#include <assert.h>
#include <string.h>

void test_ft_substr() {
    // Teste 1: Substring normal
    char *result1 = ft_substr("Hello, World!", 7, 5);
    assert(strcmp(result1, "World") == 0);
    free(result1);
    printf("Teste 1 passou: Substring normal.\n");

    // Teste 2: Substring que começa em um índice maior que a string
    char *result2 = ft_substr("Hello, World!", 15, 5);
    assert(strcmp(result2, "") == 0);
    free(result2);
    printf("Teste 2 passou: Substring começa em índice maior que a string.\n");

    // Teste 3: Substring que ultrapassa o final da string
    char *result3 = ft_substr("Hello, World!", 7, 20);
    assert(strcmp(result3, "World!") == 0);
    free(result3);
    printf("Teste 3 passou: Substring que ultrapassa o final da string.\n");

    // Teste 4: Substring de comprimento zero
    char *result4 = ft_substr("Hello, World!", 0, 0);
    assert(strcmp(result4, "") == 0);
    free(result4);
    printf("Teste 4 passou: Substring de comprimento zero.\n");

    // Teste 5: String nula
    char *result5 = ft_substr(NULL, 0, 5);
    assert(result5 == NULL);
    printf("Teste 5 passou: String nula retorna NULL.\n");

    // Teste 6: Substring em uma string vazia
    char *result6 = ft_substr("", 0, 5);
    assert(strcmp(result6, "") == 0);
    free(result6);
    printf("Teste 6 passou: Substring em uma string vazia.\n");

    printf("Todos os testes passaram!\n");
}

int main() {
    test_ft_substr();
    return 0;
}*/