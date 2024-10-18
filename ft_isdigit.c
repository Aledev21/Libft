/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aassis-p <aassis-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 18:20:40 by aassis-p          #+#    #+#             */
/*   Updated: 2024/10/18 13:02:52 by aassis-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
	{
		return (1);
	}
	return (0);
}

/*#include <stdio.h>
#include <assert.h>

void test_ft_isdigit() {
    // Testes de caracteres dígitos
    assert(ft_isdigit('0') == 1); // '0' deve retornar 1
    assert(ft_isdigit('1') == 1); // '1' deve retornar 1
    assert(ft_isdigit('2') == 1); // '2' deve retornar 1
    assert(ft_isdigit('3') == 1); // '3' deve retornar 1
    assert(ft_isdigit('4') == 1); // '4' deve retornar 1
    assert(ft_isdigit('5') == 1); // '5' deve retornar 1
    assert(ft_isdigit('6') == 1); // '6' deve retornar 1
    assert(ft_isdigit('7') == 1); // '7' deve retornar 1
    assert(ft_isdigit('8') == 1); // '8' deve retornar 1
    assert(ft_isdigit('9') == 1); // '9' deve retornar 1

    // Testes de caracteres não dígitos
    assert(ft_isdigit('A') == 0); // Letra maiúscula deve retornar 0
    assert(ft_isdigit('z') == 0); // Letra minúscula deve retornar 0
    assert(ft_isdigit('!') == 0); // Caractere especial deve retornar 0
    assert(ft_isdigit(' ') == 0); // Espaço deve retornar 0
    assert(ft_isdigit('@') == 0); // Caractere especial deve retornar 0

    // Testes de caracteres de controle e fora do ASCII
    assert(ft_isdigit(128) == 0); // Deve retornar 0
    assert(ft_isdigit(-1) == 0);  // Deve retornar 0

    printf("Todos os testes passaram!\n");
}

int main() {
    test_ft_isdigit();
    return 0;
}*/