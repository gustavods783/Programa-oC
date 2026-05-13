#include <stdio.h>

    int main() {
        char ProdutoA[30];
        char ProdutoB[30];

        unsigned estoqueA = 1000;
        unsigned estoqueB = 2000;

        float valorA = 10.50;
        float valorB = 20.40;

        unsigned int estoqueMinimoA = 500;
        unsigned int estoqueMinimoB = 2500;

        double valorTotalA;
        double valorTotalB;

        int resultadoA, resultadoB;


        printf("Produto %s tem estoque %u e valor unitario %.2f\n", ProdutoA, estoqueA, valorA);
        printf("Produto %s tem estoque %u e valor unitario %.2f\n", ProdutoB, estoqueB, valorB);

        resultadoA = estoqueA > estoqueMinimoA;
        resultadoB = estoqueB > estoqueMinimoB;

        printf("O produto %s tem estoque minimo %d\n", ProdutoA, resultadoA);
        printf("O produto %s tem estoque minimo %d\n", ProdutoB, resultadoB);

        printf("o valor total de A (R$ %.2f) é maior que o valor total de B: %.2f\n", estoqueA * valorA, estoqueB * valorB, (estoqueA * valorA) > (estoqueB * valorB));

        return 0;
        



















    }