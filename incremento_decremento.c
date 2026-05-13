#include <stdio.h>

    int main() {
        /*
        operadores de incremento e decremento
        incremento (++)
        decremento (--)
        pré-incremento (++variavel)
        pós-incremento (variavel++)
        */

        int numero1 = 1, resultado;
        

        printf("Antes incremento: %d\n", numero1);
        //numero1 = numero1 +1;
        //numero1 += 1;
        //pos-incremento:
        //resultado = numero 1;
        //numero++;
    
        resultado = numero1++; // pós-incremento
        //printf("Após pós-incremento - numero 1: %d, resultado: %d\n", numero1, resultado);
        printf("Após pós-incremento - numero 1: %d, resultado: %d\n", numero1, resultado);
       
        resultado = ++numero1;
        printf("Após pré-incremento - numero 1: %d, resultado: %d\n", numero1, resultado);

        ///numero1 = numero1 - 1;
        //numero1 -= 1;
        // numero1--;
        ///printf("Após decremento: %d\n", numero1);
         resultado = numero1--;
        printf("Após pós-decremento - numero 1: %d, resultado: %d\n", numero1, resultado);
        resultado = --numero1;
        printf("Após pré-decremento - numero 1: %d, resultado: %d\n", numero1, resultado);
        
        
    }