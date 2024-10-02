/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_functions.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aassis-p <aassis-p@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-09-27 00:28:27 by aassis-p          #+#    #+#             */
/*   Updated: 2024-09-27 00:28:27 by aassis-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include "libft.h" 

void test_ft_isalnum() {
    printf("Teste ft_isalnum:\n");
    printf("'a': %s\n", ft_isalnum('a') ? "Passou" : "Falhou");
    printf("'Z': %s\n", ft_isalnum('Z') ? "Passou" : "Falhou");
    printf("'1': %s\n", ft_isalnum('1') ? "Passou" : "Falhou");
    printf("'!': %s\n", ft_isalnum('!') ? "Passou" : "Falhou");
    printf("0: %s\n", ft_isalnum(0) ? "Passou" : "Falhou");
    printf("255: %s\n", ft_isalnum(255) ? "Passou" : "Falhou"); // Fora do intervalo
    printf("~: %s\n", ft_isalnum('~') ? "Passou" : "Falhou"); // Fora do intervalo
}

void test_ft_isascii() {
    printf("\nTeste ft_isascii:\n");
    for (int i = -10; i <= 130; i++) {
        printf("%d: %s\n", i, ft_isascii(i) ? "Passou" : "Falhou");
    }
}

void test_ft_isprint() {
    printf("\nTeste ft_isprint:\n");
    for (int i = 0; i < 128; i++) {
        printf("%d: %s\n", i, ft_isprint(i) ? "Passou" : "Falhou");
    }
}

void test_ft_memset() {
    printf("\nTeste ft_memset:\n");
    char str1[20] = "Hello";
    ft_memset(str1, '*', 5);
    printf("Resultado: %s (Esperado: *****)\n", str1); // Esperado: "*****"

    char str2[20] = "World";
    ft_memset(str2, '!', 3);
    printf("Resultado: %s (Esperado: !!!ld)\n", str2); // Esperado: "!!!ld"

    char str3[20] = "Test";
    ft_memset(str3, 'A', 0); // n = 0
    printf("Resultado: %s (Esperado: Test)\n", str3); // Esperado: "Test"

    char str4[20];
    ft_memset(str4, '\0', 5); // Testa com '\0'
    printf("Resultado: '%s' (Esperado: '')\n", str4); // Esperado: ""
}

void test_ft_bzero() {
    printf("\nTeste ft_bzero:\n");
    char str[20] = "Hello, World!";
    ft_bzero(str + 7, 6); // Zera "World"
    printf("Resultado: %s (Esperado: Hello, !)\n", str); // Esperado: "Hello, !"

    char str2[20] = "Test String";
    ft_bzero(str2, 4); // Zera "Test"
    printf("Resultado: %s (Esperado: \0\0\0\0 String)\n", str2); // Esperado: "\0\0\0\0 String"
}

void test_ft_isalpha() {
    printf("\nTeste ft_isalpha:\n");
    for (int i = -10; i <= 130; i++) {
        printf("%d: %s\n", i, ft_isalpha(i) ? "Passou" : "Falhou");
    }
}

void test_ft_isdigit() {
    printf("\nTeste ft_isdigit:\n");
    for (int i = -10; i <= 130; i++) {
        printf("%d: %s\n", i, ft_isdigit(i) ? "Passou" : "Falhou");
    }
}

void test_ft_memcpy() {
    printf("\nTeste ft_memcpy:\n");
    char src[] = "Hello, World!";
    char dst[20];
    ft_memcpy(dst, src, strlen(src) + 1);
    printf("Resultado: %s (Esperado: %s)\n", dst, src); // Esperado: "Hello, World!"

    char overlap_src[] = "Overlap";
    ft_memcpy(overlap_src + 3, overlap_src, 5); // Testa sobreposição
    printf("Resultado: %s (Esperado: OveOv)\n", overlap_src); // Esperado: "OveOv"

    char empty_src[] = "";
    char empty_dst[10];
    ft_memcpy(empty_dst, empty_src, 1);
    printf("Resultado: '%s' (Esperado: '')\n", empty_dst); // Esperado: ""
}

void test_ft_strlen() {
    printf("\nTeste ft_strlen:\n");
    printf("Comprimento de 'Hello': %zu (Esperado: 5)\n", ft_strlen("Hello"));
    printf("Comprimento de '': %zu (Esperado: 0)\n", ft_strlen(""));
    printf("Comprimento de 'Lorem Ipsum': %zu (Esperado: 11)\n", ft_strlen("Lorem Ipsum"));

    char long_str[100];
    memset(long_str, 'A', 99);
    long_str[99] = '\0'; // Garantindo a terminação
    printf("Comprimento de um string longa: %zu (Esperado: 99)\n", ft_strlen(long_str));
}

void test_functions() {
    test_ft_isalnum();
    test_ft_isascii();
    test_ft_isprint();
    test_ft_memset();
    test_ft_bzero();
    test_ft_isalpha();
    test_ft_isdigit();
    test_ft_memcpy();
    test_ft_strlen();
}

int main() {
    test_functions();
    return 0;
}
