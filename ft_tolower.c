/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aassis-p <aassis-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 18:45:26 by aassis-p          #+#    #+#             */
/*   Updated: 2024/10/18 13:26:57 by aassis-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (c += 32);
	}
	return (c);
}

/*#include <stdio.h>
#include <assert.h>

void test_ft_tolower() {
    // Teste 1: Letras maiúsculas
    assert(ft_tolower('A') == 'a');
    assert(ft_tolower('B') == 'b');
    assert(ft_tolower('Z') == 'z');
    printf("Teste 1 passou: Letras maiúsculas convertidas.\n");

    // Teste 2: Letras minúsculas
    assert(ft_tolower('a') == 'a');
    assert(ft_tolower('b') == 'b');
    assert(ft_tolower('z') == 'z');
    printf("Teste 2 passou: Letras minúsculas não alteradas.\n");

    // Teste 3: Caracteres não alfabéticos
    assert(ft_tolower('1') == '1');
    assert(ft_tolower('@') == '@');
    assert(ft_tolower(' ') == ' ');
    printf("Teste 3 passou: Caracteres não alfabéticos não alterados.\n");

    // Teste 4: Caso de caracteres fora do intervalo
    assert(ft_tolower(0) == 0); // Caractere nulo
    assert(ft_tolower(255) == 255); // Caractere fora do intervalo
    printf("Teste 4 passou: Casos de caracteres fora do intervalo.\n");

    printf("Todos os testes passaram!\n");
}

int main() {
    test_ft_tolower();
    return 0;
}*/