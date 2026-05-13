#include <stdio.h>

    int main(){
        /*
        soma (+)
        subtração (-)
        multiplicação (*)
        divisão (/)
        módulo (%)
        */

        int numero1, numero2;
        int soma, subtracao, multiplicacao, divisao, modulo;
        
        printf("Digite o primeiro numero: \n");
        scanf("%d", &numero1);
        printf("Digite o segundo numero: \n");
        scanf("%d", &numero2);
        soma = numero1 + numero2;

        subtracao = numero1 - numero2;

        multiplicacao = numero1 * numero2;

        divisao = numero1 / numero2;

        modulo = numero1 % numero2;

        printf("A soma dos numeros é: %d\n", soma);
        printf("A subtração dos numeros é: %d\n", subtracao);
        printf("A multiplicação dos numeros é: %d\n", multiplicacao);
        printf("A divisão dos numeros é: %d\n", divisao);
        printf("O módulo dos numeros é: %d\n", modulo);



    }