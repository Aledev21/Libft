/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aassis-p <aassis-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 18:55:59 by aassis-p          #+#    #+#             */
/*   Updated: 2024/10/18 13:17:22 by aassis-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
	{
		return (1);
	}
	return (0);
}

/*#include <stdio.h>
#include <assert.h>

void test_ft_isprint() {
    // Testes de caracteres imprimíveis
    for (int i = 32; i <= 126; i++) {
        assert(ft_isprint(i) == 1); 
		// Todos os caracteres imprimíveis devem retornar 1
    }

    // Testes de caracteres não imprimíveis
    assert(ft_isprint(0) == 0);    // Nulo deve retornar 0
    assert(ft_isprint(31) == 0);   // Caractere de controle deve retornar 0
    assert(ft_isprint(127) == 0);  // DEL deve retornar 0
    assert(ft_isprint(-1) == 0);   // Caractere negativo deve retornar 0
    assert(ft_isprint(128) == 0);  // Fora do ASCII deve retornar 0

    printf("Todos os testes passaram!\n");
}

int main() {
    test_ft_isprint();
    return 0;
}*/