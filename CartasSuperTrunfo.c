#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
// Teste Antonio Dionisio

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

    char codigo_cidade[3];
    char pais[20];
    char estado[20];
    char nome_cidade[20];
    double populacao;
    double area_km;
    double pib;
    int ponto_turistico;

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    printf("\n Cadastro das cartas \n");
    printf("Digite o código da cidade: ");
    scanf("%s", codigo_cidade);
    printf("Digite o nome do país: ");
    scanf("%s", pais);
    printf("Digite o nome do estado: ");
    scanf("%s", estado);
    printf("Digite o nome da cidade: ");
    scanf("%s", nome_cidade);
    printf("Digite a população: ");
    scanf(" %lf", &populacao);
    printf("Digite a área em km²: ");
    scanf("%lf", &area_km);
    printf("Digite o PIB: ");
    scanf("%lf", &pib);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &ponto_turistico);
        
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    printf("\n Dados das cartas \n");
    printf("Código da cidade: %s \n", codigo_cidade);
    printf("País: %s \n", pais);
    printf("Estado: %s \n", estado);
    printf("Nome da cidade: %s \n", nome_cidade);
    printf("População: %lf \n", populacao);
    printf("Área em km²: %.2lf \n", area_km);
    printf("PIB: %.2lf \n", pib);
    printf("Número de pontos turísticos: %d \n", ponto_turistico);

    return 0;
}