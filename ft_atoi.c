/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aassis-p <aassis-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 18:49:09 by aassis-p          #+#    #+#             */
/*   Updated: 2024/10/18 12:59:19 by aassis-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isspace(int c)
{
	if (c == 9 || c == 10 || c == 11 || c == 12 || c == 13 || c == 32)
	{
		return (1);
	}
	return (0);
}

int	ft_atoi(const char *str)
{
	int	result;
	int	sign;
	int	i;

	result = 0;
	sign = 1;
	i = 0;
	while (ft_isspace(str[i]))
		i++;
	if (str[i] == '+' && str[i + 1] != '-')
		i++;
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	while (str[i] && str[i] >= 48 && str[i] <= 57)
	{
		result *= 10;
		result += str[i] - 48;
		i++;
	}
	result *= sign;
	return (result);
}

/*#include <stdio.h>
#include <assert.h>

void test_ft_atoi() {
    // Testes básicos
    assert(ft_atoi("123") == 123);
    assert(ft_atoi("-123") == -123);
    assert(ft_atoi("+123") == 123);
    
    // Testes com espaços em branco
    assert(ft_atoi("   456") == 456);
    assert(ft_atoi("\t\n\v\f\r 789") == 789);
    assert(ft_atoi("   -42") == -42);
    assert(ft_atoi(" +42   ") == 42);
    
    // Testes com caracteres não numéricos
    assert(ft_atoi("42abc") == 42);
    assert(ft_atoi("abc42") == 0);
    assert(ft_atoi("   -abc42") == 0);
    
    // Testes com strings vazias
    assert(ft_atoi("") == 0);
    
    // Testes com apenas espaços
    assert(ft_atoi("   ") == 0);
    
    // Testes com sinais
    assert(ft_atoi("-+5") == 0); // sinal inválido
    assert(ft_atoi("+-5") == 0); // sinal inválido

    printf("Todos os testes passaram!\n");
}

int main() {
    test_ft_atoi();
    return 0;
}*/