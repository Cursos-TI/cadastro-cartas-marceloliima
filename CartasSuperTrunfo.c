#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
    // Área para definição das variáveis para armazenar as propriedades das cidades
    // Carta 1
    char estado1[50];
    char codigo1[10];
    char cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontos1;

    // Carta 2
    char estado2[50];
    char codigo2[10];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontos2;

    // Área para entrada de dados
    // Carta 1
    printf("Digite os dados da Carta 1:\n");
    printf("Estado (A-H): ");
    scanf(" %s", estado1);
    printf("Codigo da Carta (Ex: A01): ");
    scanf("%s", codigo1);
    printf("Nome da Cidade: ");
    scanf(" %s", cidade1);
    printf("Populacao: ");
    scanf("%d", &populacao1);
    printf("Area (km²): ");
    scanf("%f", &area1);
    printf("PIB (bilhoes): ");
    scanf("%f", &pib1);
    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontos1);

    // Carta 2
    printf("\nDigite os dados da Carta 2:\n");
    printf("Estado (A-H): ");
    scanf(" %s", estado2);
    printf("Codigo da Carta (Ex: B02): ");
    scanf("%s", codigo2);
    printf("Nome da Cidade: ");
    scanf(" %s", cidade2);
    printf("Populacao: ");
    scanf("%d", &populacao2);
    printf("Area (km²): ");
    scanf("%f", &area2);
    printf("PIB (bilhoes): ");
    scanf("%f", &pib2);
    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontos2);

    // Área para exibição dos dados da cidade
    // Carta 1
    printf("\n--- Carta 1 -----\n");
    printf("Estado: %s\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhoes\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontos1);

    // Carta 2
    printf("\n--- Carta 2 ------\n");
    printf("Estado: %s\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontos2);

    return 0;
}
