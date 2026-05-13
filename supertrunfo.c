#include <stdio.h>

int main() {

    printf("Super Trunfo - Cidades\n");

    char Estado = 'A';
    char Codigo [10];
    char Nome_da_cidade [20];
    int Populacao;
    float Area;
    float pib;
    int Numero_de_pontos_turisticos;


    char Estado2 = 'B';
    char Codigo2 [10];
    char Nome_da_cidade2 [20];
    int Populacao2;
    float Area2;
    float pib2;
    int Numero_de_pontos_turisticos2;

    printf("digite o estado: ");
    scanf("%c", &Estado);
    printf("digite o codigo: ");
    scanf("%s", Codigo);
    printf("digite o nome da cidade: ");
    scanf(" %[^\n]", Nome_da_cidade);
    printf("digite a populacao: ");
    scanf("%d", &Populacao);
    printf("digite a area: ");
    scanf("%f", &Area);
    printf("digite o pib: ");
    scanf("%f", &pib);
    printf("digite o numero de pontos turisticos: ");
    scanf("%d", &Numero_de_pontos_turisticos);

    
    printf("digite o estado: \n");
    scanf(" %c", &Estado2);
    printf("digite o codigo: \n");
    scanf("%s", Codigo2);
    printf("digite o nome da cidade: \n");
    scanf(" %[^\n]", Nome_da_cidade2);
    printf("digite a populacao: \n");
    scanf("%d", &Populacao2);
    printf("digite a area: \n");
    scanf("%f", &Area2);
    printf("digite o pib: \n");
    scanf("%f", &pib2);
    printf("digite o numero de pontos turisticos: \n");
    scanf("%d", &Numero_de_pontos_turisticos2);

    printf("Estado: %c\n", Estado);
    printf("Codigo: %s\n", Codigo);
    printf("Nome da cidade: %s\n", Nome_da_cidade);
    printf("Populacao: %d\n", Populacao);
    printf("Area: %.2f\n", Area);
    printf("PIB: %.2f\n", pib);
    printf("Numero de pontos turisticos: %d\n", Numero_de_pontos_turisticos);




    printf("Estado: %c\n", Estado2);
    printf("Codigo: %s\n", Codigo2);
    printf("Nome da cidade: %s\n", Nome_da_cidade2);
    printf("Populacao: %d\n", Populacao2);
    printf("Area: %.2f\n", Area2);
    printf("PIB: %.2f\n", pib2);
    printf("Numero de pontosturisticos: %d\n", Numero_de_pontos_turisticos2);   

    

}
