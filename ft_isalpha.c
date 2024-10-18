/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aassis-p <aassis-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 16:32:44 by aassis-p          #+#    #+#             */
/*   Updated: 2024/10/18 12:59:51 by aassis-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}

/*#include <stdio.h>
#include <assert.h>

int ft_isalpha(int c); // Prototipo da sua função

void test_ft_isalpha() {
    // Testes de letras maiúsculas
    assert(ft_isalpha('A') == 1); // A deve retornar 1
    assert(ft_isalpha('Z') == 1); // Z deve retornar 1

    // Testes de letras minúsculas
    assert(ft_isalpha('a') == 1); // a deve retornar 1
    assert(ft_isalpha('z') == 1); // z deve retornar 1

    // Testes de caracteres não alfabéticos
    assert(ft_isalpha('0') == 0); // Dígito deve retornar 0
    assert(ft_isalpha('9') == 0); // Outro dígito deve retornar 0
    assert(ft_isalpha('!') == 0); // Caractere especial deve retornar 0
    assert(ft_isalpha(' ') == 0); // Espaço deve retornar 0
    assert(ft_isalpha('@') == 0); // Caractere especial deve retornar 0
    assert(ft_isalpha('#') == 0); // Outro caractere especial deve retornar 0

    // Testes de caracteres de controle e fora do ASCII
    assert(ft_isalpha(0) == 0); // Nulo deve retornar 0
    assert(ft_isalpha(128) == 0); // Caractere fora do ASCII deve retornar 0
    assert(ft_isalpha(-1) == 0); // Caractere negativo deve retornar 0

    printf("Todos os testes passaram!\n");
}

int main() {
    test_ft_isalpha();
    return 0;
}*/