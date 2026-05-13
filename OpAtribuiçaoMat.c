#include <stdio.h>

    int main() {
        /*
        atribuição simples(=)
        atribuição com adição (+=)
        atribuição com subtração (-=)
        atribuição com multiplicação (*=)
        atribuição com divisão (/=)
        atribuição com módulo (%=)
        */

        int numero1 = 10, numero2, resultado;

        resultado = 10; // atribuição simples
        printf("resultado: %d\n", resultado);

        resultado += 20; // atribuição com adição
        printf("resultado: %d\n", resultado);

        resultado -= numero1; // atribuição com subtração
        printf("resultado: %d\n", resultado);

       resultado *= 5; // atribuição com multiplicação
        printf("resultado: %d\n", resultado);

        resultado /= 2; // atribuição com divisão
        printf("resultado: %d\n", resultado);

        resultado %= 3; // atribuição com módulo
        printf("resultado: %d\n", resultado);

        return 0;
        
    }