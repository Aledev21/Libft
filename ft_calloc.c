/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aassis-p <aassis-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 21:48:13 by aassis-p          #+#    #+#             */
/*   Updated: 2024/10/18 12:58:26 by aassis-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	*temp;
	size_t			total_size;

	if (nmemb != 0 && size != 0 && (nmemb * size) / size != nmemb)
	{
		return (NULL);
	}
	total_size = nmemb * size;
	temp = malloc(total_size);
	if (!temp)
	{
		return (NULL);
	}
	ft_bzero(temp, total_size);
	return (temp);
}

/*#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

void test_ft_calloc() {
    // Teste 1: Alocação normal
    int *arr1 = (int *)ft_calloc(5, sizeof(int));
    assert(arr1 != NULL); // Verifica se a alocação foi bem-sucedida
    for (size_t i = 0; i < 5; i++) {
        assert(arr1[i] == 0); // Todos os valores devem ser 0
    }
    free(arr1); // Libera a memória

    // Teste 2: Alocação de zero elementos
    int *arr2 = (int *)ft_calloc(0, sizeof(int));
    assert(arr2 != NULL); // ft_calloc deve retornar um ponteiro não nulo
    free(arr2); // Libera a memória

    // Teste 3: Alocação que causa overflow
    size_t nmemb = __SIZE_MAX__;
    size_t size = 2; // tamanho pequeno para provocar overflow
    void *arr3 = ft_calloc(nmemb, size);
    assert(arr3 == NULL); // Deve retornar NULL devido ao overflow

    // Teste 4: Alocação de um único elemento
    char *arr4 = (char *)ft_calloc(1, sizeof(char));
    assert(arr4 != NULL); // Verifica se a alocação foi bem-sucedida
    assert(arr4[0] == 0); // Deve ser zero
    free(arr4); // Libera a memória

    // Teste 5: Alocação de múltiplos elementos
    double *arr5 = (double *)ft_calloc(10, sizeof(double));
    assert(arr5 != NULL); // Verifica se a alocação foi bem-sucedida
    for (size_t i = 0; i < 10; i++) {
        assert(arr5[i] == 0.0); // Todos os valores devem ser 0.0
    }
    free(arr5); // Libera a memória

    printf("Todos os testes passaram!\n");
}

int main() {
    test_ft_calloc();
    return 0;
}*/