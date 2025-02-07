#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações

int main() {
    // Área para difinição das variáveis para armazenar as propriedades das cidades

    int populacao;
    double area_km;
    double pib;
    int ponto_turistico;

    // Área para entrada de dados

    printf("Digite a população: ");
    scanf(" %d", &populacao);
    printf("Digite a área em km²: ");
    scanf("%lf", &area_km);
    printf("Digite o PIB: ");
    scanf("%lf", &pib);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &ponto_turistico);
        
    // Área para exibição dos dados da cidade

    printf("\n Dados das cartas \n");
    printf("População: %d \n", populacao);
    printf("Área em km²: %.2lf \n", area_km);
    printf("PIB: %.2lf \n", pib);
    printf("Número de pontos turísticos: %d \n", ponto_turistico);

    return 0;
}