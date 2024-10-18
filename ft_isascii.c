/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aassis-p <aassis-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 18:49:49 by aassis-p          #+#    #+#             */
/*   Updated: 2024/10/18 13:02:59 by aassis-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
	{
		return (1);
	}
	return (0);
}

/*#include <stdio.h>
#include <assert.h>

void test_ft_isascii() {
    // Testes de caracteres ASCII
    for (int i = 0; i <= 127; i++) {
        assert(ft_isascii(i) == 1); 
		// Todos os valores de 0 a 127 devem retornar 1
    }

    // Testes de caracteres fora do ASCII
    assert(ft_isascii(128) == 0); // Deve retornar 0
    assert(ft_isascii(255) == 0); // Deve retornar 0
    assert(ft_isascii(-1) == 0);  // Deve retornar 0

    // Testes de alguns caracteres de controle
    assert(ft_isascii(0) == 1);   // Nulo deve retornar 1
    assert(ft_isascii(127) == 1); // DEL deve retornar 1

    printf("Todos os testes passaram!\n");
}

int main() {
    test_ft_isascii();
    return 0;
}*/