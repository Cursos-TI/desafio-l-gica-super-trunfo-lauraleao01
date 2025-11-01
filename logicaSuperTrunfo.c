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

    int opcao1, opcao2;
    float valor1Carta1, valor1Carta2, valor2Carta1, valor2Carta2;

    // Exibição das cartas
    printf("\n==== Carta 1 ====\n");
    printf("Estado: %s\n Código: %s\n Cidade: %s\n", estado1, codigo1, nomeCidade1);
    printf("População: %lu habitantes\n Área: %.2f km²\n PIB: R$ %.2f bilhões\n", populacao1, area1, pib1 / 1000000000);
    printf("Pontos turísticos: %d\n Densidade populacional: %.2f hab/km²\n PIB per capita: R$ %.2f\n Super Poder: %.2f\n",
           pontosTuristicos1, densidadePopulacional1, pibPerCapita1, SuperPoder1);

    printf("\n==== Carta 2 ====\n");
    printf("Estado: %s\n Código: %s\n Cidade: %s\n", estado2, codigo2, nomeCidade2);
    printf("População: %lu habitantes\n Área: %.2f km²\n PIB: R$ %.2f bilhões\n", populacao2, area2, pib2 / 1000000000);
    printf("Pontos turísticos: %d\n Densidade populacional: %.2f hab/km²\n PIB per capita: R$ %.2f\n Super Poder: %.2f\n",
           pontosTuristicos2, densidadePopulacional2, pibPerCapita2, SuperPoder2);

    // Menu de atributos - 1ª escolha
    printf("\n==== Escolha o PRIMEIRO atributo para comparação ====\n");
    printf("1 - População\n 2 - Área\n 3 - PIB\n 4 - PIB per Capita\n 5 - Densidade Demográfica\n 6 - Super Poder\n");
    printf("Digite sua opção: ");
    scanf("%d", &opcao1);

    if (opcao1 < 1 || opcao1 > 6) {
        printf("Opção inválida! Será usado o valor padrão 1 (População).\n");
        opcao1 = 1;
    }

    // Menu de atributos - 2ª escolha
    printf("\n==== Escolha o SEGUNDO atributo para comparação ====\n");
    printf("1 - População\n 2 - Área\n 3 - PIB\n 4 - PIB per Capita\n 5 - Densidade Demográfica\n 6 - Super Poder\n");
    printf("Digite sua opção: ");
    scanf("%d", &opcao2);

    if (opcao2 < 1 || opcao2 > 6) {
        printf("Opção inválida! Será usado o valor padrão 2 (Área).\n");
        opcao2 = 2;
    }

    if (opcao2 == opcao1) {
        printf("O segundo atributo não pode ser igual ao primeiro.\n");
        printf("Digite novamente: ");
        scanf("%d", &opcao2);

        if (opcao2 == opcao1 || opcao2 < 1 || opcao2 > 6) {
            printf("Escolha inválida novamente! Será usado outro valor automaticamente.\n");
            opcao2 = (opcao1 % 6) + 1; // Garante valor diferente
        }
    }

    // Seleção de valores para cada carta
    switch (opcao1) {
        case 1: valor1Carta1 = populacao1; valor1Carta2 = populacao2; break;
        case 2: valor1Carta1 = area1; valor1Carta2 = area2; break;
        case 3: valor1Carta1 = pib1; valor1Carta2 = pib2; break;
        case 4: valor1Carta1 = pibPerCapita1; valor1Carta2 = pibPerCapita2; break;
        case 5: valor1Carta1 = densidadePopulacional1; valor1Carta2 = densidadePopulacional2; break;
        case 6: valor1Carta1 = SuperPoder1; valor1Carta2 = SuperPoder2; break;
    }

    switch (opcao2) {
        case 1: valor2Carta1 = populacao1; valor2Carta2 = populacao2; break;
        case 2: valor2Carta1 = area1; valor2Carta2 = area2; break;
        case 3: valor2Carta1 = pib1; valor2Carta2 = pib2; break;
        case 4: valor2Carta1 = pibPerCapita1; valor2Carta2 = pibPerCapita2; break;
        case 5: valor2Carta1 = densidadePopulacional1; valor2Carta2 = densidadePopulacional2; break;
        case 6: valor2Carta1 = SuperPoder1; valor2Carta2 = SuperPoder2; break;
    }

    // Soma dos dois atributos
    float soma1 = valor1Carta1 + valor2Carta1;
    float soma2 = valor1Carta2 + valor2Carta2;

    printf("\n==== RESULTADO DA COMPARAÇÃO ====\n");
    printf("%s - Soma: %.2f + %.2f = %.2f\n", nomeCidade1, valor1Carta1, valor2Carta1, soma1);
    printf("%s - Soma: %.2f + %.2f = %.2f\n", nomeCidade2, valor1Carta2, valor2Carta2, soma2);

    // Resultado final
    if (soma1 > soma2)
        printf("\n%s venceu a rodada!\n", nomeCidade1);
    else if (soma2 > soma1)
        printf("\n%s venceu a rodada!\n", nomeCidade2);
    else
        printf("\nEmpate!\n");

    return 0;
}
