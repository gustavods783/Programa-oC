#include <stdio.h>

int main() {
   
    unsigned long int populacao1, populacao2;
    float area1, area2, pib1, pib2;
    int pontos1, pontos2;
    char estado1[3], estado2[3];
    char codigo1[4], codigo2[4];
    char nome1[50], nome2[50];

    /* Variaveis */
    float densidade1, densidade2;
    float pibPerCapita1, pibPerCapita2;
    float superPoder1, superPoder2;

    /*Cadastro da Carta 1*/
    printf("--- Cadastro da Carta 1 ---\n");
    printf("Estado: "); scanf("%s", estado1);
    printf("Código: "); scanf("%s", codigo1);
    printf("Nome da Cidade: "); scanf(" %[^\n]", nome1);
    printf("População: "); scanf("%lu", &populacao1);
    printf("Área (km²): "); scanf("%f", &area1);
    printf("PIB: "); scanf("%f", &pib1);
    printf("Pontos Turísticos: "); scanf("%d", &pontos1);

    /*Cadastro da Carta 2*/
    printf("\n--- Cadastro da Carta 2 ---\n");
    printf("Estado: "); scanf("%s", estado2);
    printf("Código: "); scanf("%s", codigo2);
    printf("Nome da Cidade: "); scanf(" %[^\n]", nome2);
    printf("População: "); scanf("%lu", &populacao2);
    printf("Área (km²): "); scanf("%f", &area2);
    printf("PIB: "); scanf("%f", &pib2);
    printf("Pontos Turísticos: "); scanf("%d", &pontos2);

    /*Calculo da densidade e PIB per capita*/
    densidade1 = (float)populacao1 / area1;       // População / Área
    pibPerCapita1 = (float)pib1 / (float)populacao1;    // PIB / População

    densidade2 = (float)populacao2 / area2;
    pibPerCapita2 = (float)pib2 / (float)populacao2;

    /*Super Poder: Soma de todos os atributos*/
    
    superPoder1 = (float)populacao1 + area1 + pib1 + (float)pontos1 + pibPerCapita1 + (1.0 / densidade1);
    superPoder2 = (float)populacao2 + area2 + pib2 + (float)pontos2 + pibPerCapita2 + (1.0 / densidade2);

    

    // SAÍDA CARTA 1
     
 pibPerCapita1 = (pib1 * 1000000000.0) / populacao1;

    printf("\n=== DADOS DA CARTA 1 ===\n");
    printf("Estado: %s\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da cidade: %s\n", nome1);
    printf("Populacao: %lu\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f reais\n", pib1);
    printf("Pontos turisticos: %d\n", pontos1);
    printf("Densidade populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per capita: %.2f reais\n", pibPerCapita1);

    
    // SAÍDA CARTA 2
    
	pibPerCapita2 = (pib2 * 1000000000.0) / populacao2;
    printf("\n=== DADOS DA CARTA 2 ===\n");
    printf("Estado: %s\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da cidade: %s\n", nome2);
    printf("Populacao: %lu\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f reais\n", pib2);
    printf("Pontos turisticos: %d\n", pontos2);
    printf("Densidade populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per capita: %.2f reais\n", pibPerCapita2);



    // Resultados
    printf("\n--- Comparação de Cartas ---\n");
    printf("População: Carta 1 venceu (%d)\n", populacao1 > populacao2);
    printf("Área: Carta 1 venceu (%d)\n", area1 > area2);
    printf("PIB: Carta 1 venceu (%d)\n", pib1 > pib2);
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", pontos1 > pontos2);
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", densidade1 < densidade2);
    printf("PIB per Capita: Carta 1 venceu (%d)\n", pibPerCapita1 > pibPerCapita2);
    printf("Super Poder: Carta 1 venceu (%d)\n", superPoder1 > superPoder2);

    return 0;
}