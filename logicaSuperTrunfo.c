#include <stdio.h>

int main() {
    // Carta 1: Brasília
    char estado1[] = "A";
    char codigo1[] = "A01";
    char nomeCidade1[] = "Brasília";
    unsigned long int populacao1 = 3094325;
    float area1 = 5802.00;
    float pib1 = 2179000000000.0;
    int pontosTuristicos1 = 25;

    float densidadePopulacional1 = populacao1 / area1;
    float pibPerCapita1 = pib1 / populacao1;
    float SuperPoder1 = (float) populacao1 + (float) area1 + (pib1 / 1000000000) + pontosTuristicos1 + pibPerCapita1 - densidadePopulacional1;

    // Carta 2: Curitiba
    char estado2[] = "B";
    char codigo2[] = "B02";
    char nomeCidade2[] = "Curitiba";
    unsigned long int populacao2 = 1963726;
    float area2 = 434.89;
    float pib2 = 103700000000.0;
    int pontosTuristicos2 = 40;

    float densidadePopulacional2 = populacao2 / area2;
    float pibPerCapita2 = pib2 / populacao2;
    float SuperPoder2 = (float) populacao2 + (float) area2 + (pib2 / 1000000000) + pontosTuristicos2 + pibPerCapita2 - densidadePopulacional2;

    int opcao;

    // Exibição das cartas
    printf("\n==== Carta 1 ====\n");
    printf("Estado: %s\nCódigo: %s\nCidade: %s\n", estado1, codigo1, nomeCidade1);
    printf("População: %lu habitantes\nÁrea: %.2f km²\nPIB: R$ %.2f bilhões\n", populacao1, area1, pib1 / 1000000000);
    printf("Pontos turísticos: %d\nDensidade populacional: %.2f hab/km²\nPIB per capita: R$ %.2f\nSuper Poder: %.2f\n",
           pontosTuristicos1, densidadePopulacional1, pibPerCapita1, SuperPoder1);

    printf("\n==== Carta 2 ====\n");
    printf("Estado: %s\nCódigo: %s\nCidade: %s\n", estado2, codigo2, nomeCidade2);
    printf("População: %lu habitantes\nÁrea: %.2f km²\nPIB: R$ %.2f bilhões\n", populacao2, area2, pib2 / 1000000000);
    printf("Pontos turísticos: %d\nDensidade populacional: %.2f hab/km²\nPIB per capita: R$ %.2f\nSuper Poder: %.2f\n",
           pontosTuristicos2, densidadePopulacional2, pibPerCapita2, SuperPoder2);

    // Menu interativo
    printf("\n==== Escolha o atributo para comparação ====\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - PIB per Capita\n");
    printf("5 - Densidade Demográfica\n");
    printf("6 - Super Poder\n");
    printf("Digite sua opção: ");
    scanf("%d", &opcao);

    printf("\n==== Resultado da Comparação ====\n");

    switch (opcao) {
        case 1:
            printf("Atributo: População\n");
            printf("%s: %lu habitantes\n", nomeCidade1, populacao1);
            printf("%s: %lu habitantes\n", nomeCidade2, populacao2);
            if (populacao1 > populacao2)
                printf("Vencedor: %s!\n", nomeCidade1);
            else if (populacao2 > populacao1)
                printf("Vencedor: %s!\n", nomeCidade2);
            else
                printf("Empate!\n");
            break;

        case 2:
            printf("Atributo: Área\n");
            printf("%s: %.2f km²\n", nomeCidade1, area1);
            printf("%s: %.2f km²\n", nomeCidade2, area2);
            if (area1 > area2)
                printf("Vencedor: %s!\n", nomeCidade1);
            else if (area2 > area1)
                printf("Vencedor: %s!\n", nomeCidade2);
            else
                printf("Empate!\n");
            break;

        case 3:
            printf("Atributo: PIB\n");
            printf("%s: R$ %.2f bilhões\n", nomeCidade1, pib1 / 1000000000);
            printf("%s: R$ %.2f bilhões\n", nomeCidade2, pib2 / 1000000000);
            if (pib1 > pib2)
                printf("Vencedor: %s!\n", nomeCidade1);
            else if (pib2 > pib1)
                printf("Vencedor: %s!\n", nomeCidade2);
            else
                printf("Empate!\n");
            break;

        case 4:
            printf("Atributo: PIB per Capita\n");
            printf("%s: R$ %.2f\n", nomeCidade1, pibPerCapita1);
            printf("%s: R$ %.2f\n", nomeCidade2, pibPerCapita2);
            if (pibPerCapita1 > pibPerCapita2)
                printf("Vencedor: %s!\n", nomeCidade1);
            else if (pibPerCapita2 > pibPerCapita1)
                printf("Vencedor: %s!\n", nomeCidade2);
            else
                printf("Empate!\n");
            break;

        case 5:
            printf("Atributo: Densidade Demográfica (vence o MENOR)\n");
            printf("%s: %.2f hab/km²\n", nomeCidade1, densidadePopulacional1);
            printf("%s: %.2f hab/km²\n", nomeCidade2, densidadePopulacional2);
            if (densidadePopulacional1 < densidadePopulacional2)
                printf("Vencedor: %s!\n", nomeCidade1);
            else if (densidadePopulacional2 < densidadePopulacional1)
                printf("Vencedor: %s!\n", nomeCidade2);
            else
                printf("Empate!\n");
            break;

        case 6:
            printf("Atributo: Super Poder\n");
            printf("%s: %.2f\n", nomeCidade1, SuperPoder1);
            printf("%s: %.2f\n", nomeCidade2, SuperPoder2);
            if (SuperPoder1 > SuperPoder2)
                printf("Vencedor: %s!\n", nomeCidade1);
            else if (SuperPoder2 > SuperPoder1)
                printf("Vencedor: %s!\n", nomeCidade2);
            else
                printf("Empate!\n");
            break;

        default:
            printf("Opção inválida! Tente novamente.\n");
    }

    return 0;
}
