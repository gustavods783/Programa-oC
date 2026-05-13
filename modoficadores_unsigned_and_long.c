#include <stdio.h>

    int main() {

        unsigned long int numeroGrandePositivo = 4000000000; // Usando unsigned long int para números grandes positivos
        unsigned int numeroPositivo = 400000000;
        long long int numeroGrande = 4000000000;
        int numero = 4000000000;

        short int numeroPequeno = 32767; // Valor máximo para short int
        printf("Número pequeno (short int): %d\n", numeroPequeno);

        numeroPequeno = 32768; // valor maior que o maximo de short int,
        printf("Número pequeno atualizado (short int): %d\n", numeroPequeno);

        printf("Número grande positivo (unsigned long int): %lu\n", numeroGrandePositivo);
        printf("Número positivo (unsigned int): %u\n", numeroPositivo);
        printf("Número grande (long long int): %lld\n", numeroGrande);
        printf("Numero: %d\n", numero); 

            printf("\n *** Tamanho das variaveis ***\n");
            printf("short int: %lu B - int: %lu B - Long long int: %llu B\n", sizeof(short int), sizeof(int), sizeof(long long int));
            printf("Float: %lu B - Double: %lu B - Long double: %lu B\n", sizeof(float), sizeof(double), sizeof(long double));

        return 0;

    }

