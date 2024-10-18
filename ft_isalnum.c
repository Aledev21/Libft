/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aassis-p <aassis-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 18:33:26 by aassis-p          #+#    #+#             */
/*   Updated: 2024/10/18 12:58:23 by aassis-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122) || (c >= 48 && c <= 57))
	{
		return (c);
	}
	return (0);
}

/*#include <stdio.h>
#include <assert.h>

int ft_isalnum(int c); // Prototipo da sua função

void test_ft_isalnum() {
    // Testes de caracteres alfanuméricos
    assert(ft_isalnum('A') != 0); // Letra maiúscula
    assert(ft_isalnum('z') != 0); // Letra minúscula
    assert(ft_isalnum('0') != 0); // Dígito
    assert(ft_isalnum('Z') != 0); // Outra letra maiúscula
    assert(ft_isalnum('a') != 0); // Outra letra minúscula
    assert(ft_isalnum('9') != 0); // Outro dígito

    // Testes de caracteres não alfanuméricos
    assert(ft_isalnum('!') == 0); // Caractere especial
    assert(ft_isalnum('@') == 0); // Caractere especial
    assert(ft_isalnum(' ') == 0); // Espaço
    assert(ft_isalnum('#') == 0); // Caractere especial
    assert(ft_isalnum('-') == 0); // Outro caractere especial
    assert(ft_isalnum(128) == 0); // Caractere fora do ASCII

    // Testes de caracteres de controle
    assert(ft_isalnum(0) == 0); // Nulo
    assert(ft_isalnum(255) == 0); // Caractere fora do ASCII

    printf("Todos os testes passaram!\n");
}

int main() {
    test_ft_isalnum();
    return 0;
}*/