 #include <stdio.h>

int main() {
    // Carta 1
    char estado1;
    char codigoCarta1[10];
    char nomeCidade1[50];
    int populacao1;
    float areakm1, pib1;
    int pontosTuristicos1;
    float densidade1, pibPerCapita1;

    // Carta 2
    char estado2;
    char codigoCarta2[10];
    char nomeCidade2[50];
    int populacao2;
    float areakm2, pib2;
    int pontosTuristicos2;
    float densidade2, pibPerCapita2;

    // ===== Leitura Carta 1 =====
    printf("== Carta 1 ==\n");

    printf("Digite o Estado:(EX: A-Z): \n");
    scanf(" %c", &estado1);

    printf("Digite o Código da Carta (ex: A01):\n ");
    scanf(" %s", codigoCarta1);

    printf("Digite o Nome da Cidade: \n");
    scanf(" %s", nomeCidade1);

    printf("Digite a População:\n ");
    scanf("%d", &populacao1);

    printf("Digite a Área em Km²:\n ");
    scanf("%f", &areakm1);

    printf("Digite o PIB: \n");
    scanf("%f", &pib1);

    printf("Digite o Número de Pontos Turísticos:\n ");
    scanf("%d", &pontosTuristicos1);

    // ===== Leitura Carta 2 =====
    printf("\n== Carta 2 ==\n");

    printf("Digite o Estado:(EX: A-Z):\n ");
    scanf(" %c", &estado2);

    printf("Digite o Código da Carta (ex: B02):\n ");
    scanf(" %s", codigoCarta2);

    printf("Digite o Nome da Cidade:\n ");
    scanf(" %s", nomeCidade2);

    printf("Digite a População:\n ");
    scanf("%d", &populacao2);

    printf("Digite a Área em Km²: \n");
    scanf("%f", &areakm2);

    printf("Digite o PIB:\n ");
    scanf("%f", &pib2);

    printf("Digite o Número de Pontos Turísticos:\n ");
    scanf("%d", &pontosTuristicos2);

    // ===== Cálculos =====
    densidade1 = (float) populacao1 / areakm1;
    pibPerCapita1 = pib1 / populacao1;

    densidade2 = (float) populacao2 / areakm2;
    pibPerCapita2 = pib2 / populacao2;

    // ===== Exibição =====
    printf("\n--- Resultado ---\n");

    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigoCarta1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", areakm1);
    printf("PIB: %.2f bilhões\n", pib1);
    printf("Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigoCarta2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", areakm2);
    printf("PIB: %.2f bilhões\n", pib2);
    printf("Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);

    return 0;
}
