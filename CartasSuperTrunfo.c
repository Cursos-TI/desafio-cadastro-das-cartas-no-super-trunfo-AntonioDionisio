#include <stdio.h>

int main() {
    // Carta 1
    char estado1;
    char codigo1[4];
    char cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontos1;

    // Carta 2
    char estado2;
    char codigo2[4];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontos2;

    // Cadastro Carta 1
    printf("Cadastro Carta 1\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado1);
    printf("Código (ex: %c01): ", estado1);
    scanf("%3s", codigo1);
    printf("Cidade: ");
    scanf(" %49[^\n]", cidade1);
    printf("População: ");
    scanf("%d", &populacao1);
    printf("Área (km²): ");
    scanf("%f", &area1);
    printf("PIB (bi): ");
    scanf("%f", &pib1);
    printf("Pontos turísticos: ");
    scanf("%d", &pontos1);

    // Cadastro Carta 2
    printf("\nCadastro Carta 2\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado2);
    printf("Código (ex: %c01): ", estado2);
    scanf("%3s", codigo2);
    printf("Cidade: ");
    scanf(" %49[^\n]", cidade2);
    printf("População: ");
    scanf("%d", &populacao2);
    printf("Área (km²): ");
    scanf("%f", &area2);
    printf("PIB (bi): ");
    scanf("%f", &pib2);
    printf("Pontos turísticos: ");
    scanf("%d", &pontos2);

    // Exibição
    printf("\n=== Cartas Cadastradas ===\n");

    printf("\nCarta 1 - %s\n", codigo1);
    printf("Estado: %c\n", estado1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bi\n", pib1);
    printf("Pontos: %d\n", pontos1);

    printf("\nCarta 2 - %s\n", codigo2);
    printf("Estado: %c\n", estado2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bi\n", pib2);
    printf("Pontos: %d\n", pontos2);

    return 0;
}