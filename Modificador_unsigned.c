#include <stdio.h>

int main() {

    printf("Super Trunfo - Cidades\n\n");

    // CARTA 1
    char Estado;
    char Codigo[10];
    char Nome_da_cidade[50];
    unsigned long int Populacao;
    double Area;
    double pib;
    int Numero_de_pontos_turisticos;
    double densidade_populacional; // Declaradas apenas uma vez
    double pib_per_capita;

    // CARTA 2
    char Estado2;
    char Codigo2[10];
    char Nome_da_cidade2[50];
    unsigned long int Populacao2;
    double Area2;
    double pib2;
    int Numero_de_pontos_turisticos2;
    double densidade_populacional2;
    double pib_per_capita2;

    // =========================
    // ENTRADA CARTA 1
    // =========================

    printf("=== CARTA 1 ===\n");
    printf("Digite o estado:\n ");
    scanf(" %c", &Estado);
    printf("Digite o codigo:\n ");
    scanf("%s", Codigo);
    printf("Digite o nome da cidade:\n ");
    scanf(" %[^\n]", Nome_da_cidade);
    printf("Digite a populacao:\n ");
    scanf("%lu", &Populacao);
    printf("Digite a area:\n ");
    scanf("%lf", &Area);
    printf("Digite o PIB:\n ");
    scanf("%lf", &pib);
    printf("Digite o numero de pontos turisticos:\n ");
    scanf("%d", &Numero_de_pontos_turisticos);

    // Cálculos carta 1 (Atribuição sem redeclarar)
    // Force a conversão de pelo menos um dos lados para double
    densidade_populacional = (double)Populacao / (double)Area;
    pib_per_capita = (double)pib / (double)Populacao;
    // =========================
    // ENTRADA CARTA 2
    // =========================

    printf("\n=== CARTA 2 ===\n");
    printf("Digite o estado:\n ");
    scanf(" %c", &Estado2);
    printf("Digite o codigo:\n ");
    scanf("%s", Codigo2);
    printf("Digite o nome da cidade:\n ");
    scanf(" %[^\n]", Nome_da_cidade2);
    printf("Digite a populacao:\n ");
    scanf("%lu", &Populacao2);
    printf("Digite a area:\n ");
    scanf("%lf", &Area2);
    printf("Digite o PIB:\n ");
    scanf("%lf", &pib2);
    printf("Digite o numero de pontos turisticos:\n ");
    scanf("%d", &Numero_de_pontos_turisticos2);

    // Cálculos carta 2
    densidade_populacional2 = (double)Populacao2 / (double)Area2;
    pib_per_capita2 = (double)pib2 / (double)Populacao2;

    // =========================
    // SAÍDA CARTA 1
    // =========================

    printf("\n=== DADOS DA CARTA 1 ===\n");
    printf("Estado: %c\n", Estado);
    printf("Codigo: %s\n", Codigo);
    printf("Nome da cidade: %s\n", Nome_da_cidade);
    printf("Populacao: %lu\n", Populacao);
    printf("Area: %.2f km²\n", Area);
    printf("PIB: %.2f reais\n", pib);
    printf("Pontos turisticos: %d\n", Numero_de_pontos_turisticos);
    printf("Densidade populacional: %.2f hab/km²\n", densidade_populacional);
    printf("PIB per capita: %.2f reais\n", pib_per_capita);

    // =========================
    // SAÍDA CARTA 2
    // =========================

    printf("\n=== DADOS DA CARTA 2 ===\n");
    printf("Estado: %c\n", Estado2);
    printf("Codigo: %s\n", Codigo2);
    printf("Nome da cidade: %s\n", Nome_da_cidade2);
    printf("Populacao: %lu\n", Populacao2);
    printf("Area: %.2f km²\n", Area2);
    printf("PIB: %.2f reais\n", pib2);
    printf("Pontos turisticos: %d\n", Numero_de_pontos_turisticos2);
    printf("Densidade populacional: %.2f hab/km²\n", densidade_populacional2);
    printf("PIB per capita: %.2f reais\n", pib_per_capita2);

    return 0;
}
