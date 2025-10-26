#include <stdio.h>

int main() {
    // Carta 1: Brasília
    char estado1[] = "A";//Letra para criar sequência
    char codigo1[] = "A01";// código para criar sequência
    char nomeCidade1[] = "Brasília";// cidade escolhida por ter apenas 1 nome
    unsigned long int populacao1 = 3094325; 
    float area1 = 5802.00;// em km²
    float pib1 = 2179000000000.0; // PIB em reais
    int pontosTuristicos1 = 25; 

    float densidadePopulacional1 = populacao1 / area1;
    float pibPerCapita1 = pib1 / populacao1;

    float SuperPoder1;//soma de todos os requisitos numéricos carta 1
    SuperPoder1 = (float) populacao1 + (float) area1 + (float) (pib1 / 1000000000) + (float) pontosTuristicos1 + (float) pibPerCapita1 - (float) densidadePopulacional1 ;

    // Carta 2: Paraná
    char estado2[] = "B"; 
    char codigo2[] = "B02"; 
    char nomeCidade2[] = "Curitiba"; 
    unsigned long int populacao2 = 1963726; 
    float area2 = 434.89;// em km²
    float pib2 = 103700000000.0; // PIB em reais
    int pontosTuristicos2 = 40; 

    float densidadePopulacional2 = populacao2 / area2;
    float pibPerCapita2 = pib2 / populacao2;

    float SuperPoder2;//soma de todos os requisítos numéricos carta2
    SuperPoder2 = (float) populacao2 + (float) area2 + (float) (pib2 / 1000000000) + (float) pontosTuristicos2 + (float) pibPerCapita2 - (float) densidadePopulacional2 ;

    // Exibição da Carta 1
    printf("\n==== Carta 1 ====\n");//exibição do título carta 1
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", nomeCidade1);
    printf("População: %lu habitantes\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: R$ %.2f bilhões\n", pib1 / 1000000000); // dividi para diminuir a quantide de números exibidos transformando em bilhões
    printf("Pontos turísticos: %d\n", pontosTuristicos1);
    printf("Densidade populacional: %.2f hab/km²\n", densidadePopulacional1);
    printf("PIB per capita: R$ %.2f\n", pibPerCapita1);
    printf("Super Poder da carta 1 é %.2f\n", SuperPoder1);


    // Exibição da Carta 2
    printf("\n==== Carta 2 ====\n");//exibição do título carta 2
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", nomeCidade2);
    printf("População: %lu habitantes\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: R$ %.2f bilhões\n", pib2 / 1000000000);// dividi para diminuir a quantide de números exibidos transformando em bilhões
    printf("Pontos turísticos: %d\n", pontosTuristicos2);
    printf("Densidade populacional: %.2f hab/km²\n", densidadePopulacional2);
    printf("PIB per capita: R$ %.2f\n", pibPerCapita2);
    printf("Super Poder da carta 2 é %.2f\n", SuperPoder2);

    //Batalha SuperTrunfo
    printf("\n==== Batalha: População ====\n");//exibiçaõ de título da batalha
    printf("Carta 1- Brasília (DF):%lu habitantes\n", populacao1);//exibição população carta1
    printf("Carta 2- Paraná (PR):%lu habitantes\n", populacao2);//exibição população carta 2

//requisito escolhido população
 if (populacao1 > populacao2){//if para "verdadeiro"- 1
    printf("Carta 1 (Brasília) venceu!!!\n");
 }else{//else para "falso"- 0
    printf("Carta 2 (Paraná) venceu!!!\n");
 }

    return 0;
}