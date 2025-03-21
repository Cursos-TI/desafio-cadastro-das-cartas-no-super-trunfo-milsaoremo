

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas E Comparação
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
#include <stdio.h>

int main()
{
    // declaração das variáveis
    char estado1;
    char codigo1[3];
    char cidade1[80];
    int populacao1;
    float Area1;
    float PIB1;
    int PontosTuristicos1;

    char estado2;
    char codigo2[3];
    char cidade2[80];
    int populacao2;
    float Area2;
    float PIB2;
    int PontosTuristicos2;

    printf("\n*************Primeiro estado do Super Trunfo*************\n");

    printf("Digite o Estado de A - H:\n");
    scanf(" %c", &estado1);

    printf("Digite o código da carta sendo as possibilidades 01 / 02 / 03 / 04:\n");
    scanf(" %3s", &codigo1);

    printf("Digite o nome da cidade:\n");
    // Utilizei %[^\n] pois estava encontrando erro quando inseria uma cidade com espaço
    scanf(" %[^\n]", &cidade1);

    printf("Digite número da população desta cidade:\n");
    scanf(" %d", &populacao1);

    printf("Digite a área em Km² da cidade:\n");
    scanf(" %f", &Area1);

    printf("Qual o PIB da cidade?\n");
    scanf(" %f", &PIB1);

    printf("Quantos pontos turísticos tem na cidade?\n");
    scanf(" %d", &PontosTuristicos1);

    float densidade1 = populacao1 / Area1;
    float PIBpercapita1 = PIB1 / populacao1;
    double superpoder1 = populacao1 + Area1 + PIB1 + PIBpercapita1 + (1.0 / densidade1) + PontosTuristicos1;
  
    printf("\n*************Segundo estado do Super Trunfo*************\n");

    printf("Digite o Estado de A - H:\n");
    scanf(" %c", &estado2);

    printf("Digite o código da carta sendo as possibilidades 01 / 02 / 03 / 04:\n");
    scanf(" %3s", &codigo2);

    printf("Digite o nome da cidade:\n");
    // Utilizei %[^\n] pois estava encontrando erro quando inseria uma cidade com espaço
    scanf(" %[^\n]", &cidade2);

    printf("Digite número da população desta cidade:\n");
    scanf(" %d", &populacao2);

    printf("Digite a área em Km² da cidade:\n");
    scanf(" %f", &Area2);

    printf("Qual o PIB da cidade?\n");
    scanf(" %f", &PIB2);

    printf("Quantos pontos turísticos tem na cidade?\n");
    scanf(" %d", &PontosTuristicos2);

    float densidade2 = populacao2 / Area2;
    float PIBpercapita2 = PIB2 / populacao2;
    double superpoder2 = populacao2 + Area2 + PIB2 + PIBpercapita2 + (1.0 / densidade2) + PontosTuristicos2;


    printf("\n******* Carta 01 *******\n");
    printf("Estado: %c\n", estado1);
    printf("Código da Carta: %c%s\n", estado1, codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f Km²\n", Area1);
    printf("Densidade populacional: %.2f\n", densidade1);
    printf("PIB: %.2f bilhões de reais\n", PIB1);
    printf("PIB per capita: %.2f\n", PIBpercapita1);
    printf("Número de Pontos Turísticos: %d\n", PontosTuristicos1);
    printf("Super Poder: %.2f\n", superpoder1);

    printf("\n******* Carta 02 *******\n");
    printf("Estado: %c\n", estado2);
    printf("Código da Carta: %c%s\n", estado2, codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f Km²\n", Area2);
    printf("Densidade populacional: %.2f\n", densidade2);
    printf("PIB: %.2f bilhões de reais\n", PIB2);
    printf("PIB per capita: %.2f\n", PIBpercapita2);
    printf("Número de Pontos Turísticos: %d\n", PontosTuristicos2);
    printf("Super Poder: %.2f\n", superpoder2);

    // Comparativo das duas cartas
    printf("\n******* Comparando as cartas (1 para Verdadeiro e 0 para falso *******\n");

printf("\n"); // Para pular uma Linha

    printf("População Carta 1 > População Carta 2: %d\n",(populacao1 > populacao2));
    printf("Área Carta 1 > Área Carta 2: %d\n",(Area1 > Area2));
    printf("PIB carta 1 > PIB carta 2: %d\n",(PIB1 > PIB2));
    printf("PIB per capita Carta 1: > PIB per capita Carta 2: %d\n",(PIBpercapita1 > PIBpercapita2));
    printf("Densidade populacional carta 1 < Densidade populacional carta 2: %d\n",(densidade1 < densidade2));
    printf("Número de Pontos Turísticos Carta 1 > Número de Pontos Turísticos carta 2: %d\n", (PontosTuristicos1 > PontosTuristicos2));
    printf("Super Poder carta 1 > Super Poder Carta 2: %d\n", (superpoder1 > superpoder2));

        return 0;
}
