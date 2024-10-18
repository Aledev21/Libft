/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aassis-p <aassis-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 16:15:23 by aassis-p          #+#    #+#             */
/*   Updated: 2024/10/18 13:25:50 by aassis-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (c -= 32);
	}
	return (c);
}

/*#include <stdio.h>
#include <assert.h>

void test_ft_toupper() {
    // Teste 1: Letras minúsculas
    assert(ft_toupper('a') == 'A');
    assert(ft_toupper('b') == 'B');
    assert(ft_toupper('z') == 'Z');
    printf("Teste 1 passou: Letras minúsculas convertidas.\n");

    // Teste 2: Letras maiúsculas
    assert(ft_toupper('A') == 'A');
    assert(ft_toupper('B') == 'B');
    assert(ft_toupper('Z') == 'Z');
    printf("Teste 2 passou: Letras maiúsculas não alteradas.\n");

    // Teste 3: Caracteres não alfabéticos
    assert(ft_toupper('1') == '1');
    assert(ft_toupper('@') == '@');
    assert(ft_toupper(' ') == ' ');
    printf("Teste 3 passou: Caracteres não alfabéticos não alterados.\n");

    // Teste 4: Caso de caracteres fora do intervalo
    assert(ft_toupper(0) == 0); // Caractere nulo
    assert(ft_toupper(255) == 255); // Caractere fora do intervalo
    printf("Teste 4 passou: Casos de caracteres fora do intervalo.\n");

    printf("Todos os testes passaram!\n");
}

int main() {
    test_ft_toupper();
    return 0;
}*/