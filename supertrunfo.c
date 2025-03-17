#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
// Teste larissa

int main()
{
     char Estado[20] = "Bahia", Estado1[20] = "São Paulo", Codigo[20] = "A01", Codigo1[20] = "A02", cidade[30] = "Parateca", cidade1[30] = "São Bernardo";
     int Populacao = 1809, Populacao1 = 20000;
     float Area = 41780, Area1 = 4000000, PIB = 4000000, PIB1 = 2000000;
     int pontosturisticos = 50, pontosturisticos1 = 1;
     float densidadepopulacional = Populacao / Area, densidadepopulacional1 = Populacao1 / Area1;
     float pibpercapita = PIB / Populacao, pibpercapita1 = PIB1 / Populacao1;
     float superpoder = Populacao + Area + PIB + pibpercapita + pontosturisticos + (1 / densidadepopulacional);
     float superpoder1 = Populacao1 + Area1 + PIB1 + pontosturisticos1 + (1 / densidadepopulacional1);
     int resultadopopulacao = Populacao > Populacao1, resultadoarea = Area > Area1, resultadopib = PIB > PIB1, resultadonumeropontostur = pontosturisticos > pontosturisticos1, 
     resultadodensidade = densidadepopulacional < densidadepopulacional1, resultadopibpercapita = pibpercapita > pibpercapita1, resultadosuperpoder = superpoder > superpoder1;
     int cartapopulacao = resultadopopulacao == 1, cartaarea = resultadoarea == 1, cartapib = resultadopib == 1, cartanumerodepontostur = resultadonumeropontostur == 1,
     cartadensidade = resultadodensidade == 1, cartapibpercapita = resultadopibpercapita == 1, cartasuperpoder = resultadosuperpoder == 1;
     char carta2[30] = "Carta 2 venceu", carta1[30] = "Carta 1 venceu";

     printf("Carta 1 \n");
     printf("Estado: %s\n", Estado);
     printf("Código: %s\n", Codigo);
     printf("Nome da Cidade: %s\n", cidade);
     printf("População: %d\n", Populacao);
     printf("Área: %.0f km²\n", Area);
     printf("PIB: %.0f\n", PIB);
     printf("Número de Pontos Turísticos: %d\n", pontosturisticos);
     printf("Densidade Populacional: %f\n", densidadepopulacional);
     printf("PIB per capita: %f\n", pibpercapita);
     printf("Super Poder : %d\n", superpoder);

     // Super trunfo carta 2

     printf("\n"); // Para pular uma Linha

     printf("Carta 2 \n");
     printf("Estado: %s\n", Estado1);
     printf("Codigo: %s\n", Codigo1);
     printf("Nome da Cidade: %s\n", cidade1);
     printf("População :%d\n", Populacao1);
     printf("Área: %0.f km²\n", Area1);
     printf("PIB: %.0f\n", PIB1);
     printf("Números de Pontos Turisticos %d\n", pontosturisticos1);
     printf("Densidade Populacional: %f\n", densidadepopulacional1);
     printf("PIB per capita: %f\n", pibpercapita1);
     printf("Suuper Poder : %d\n", superpoder1);

     printf("\n"); // Para pular uma Linha

     printf("**** Comparação de Cartas **** \n");
     printf("**** Verdadeiro = 1 * Falso = 0 **** \n");

     printf("\n"); // Para pular uma Linha

     printf("População Carta 1 > População Carta 2: %d\n", resultadopopulacao);
     printf("Área Carta 1 > Área Carta 2: %d\n", resultadoarea);
     printf("PIB Carta 1 > PIB 2: %d\n", resultadopib);
     printf("Pontos Turísticos Carta 1 > Pontos Turístico Carta 2 : %d\n", resultadonumeropontostur);
     printf("Densidade Populacional Carta 1 < Densidade Populacional Carta 2 : %d\n", resultadodensidade);
     printf("PIB per Capita Carta 1 > PIB per Capita Carta 2: %d\n", resultadopibpercapita);
     printf("Super Poder Carta 1 > Super Poder Carta 2: %d\n", resultadosuperpoder);

     printf("\n"); // Para pular uma Linha

     printf("**** Resultado da Comparação das Cartas **** \n");

     printf("\n"); // Para pular uma Linha
     
     printf("População: %s (%d)\n", carta2, cartapopulacao);
     printf("Area: %s (%d)\n", carta2, cartaarea);
     printf("PIB: %s (%d)\n", carta1, cartapib);
     printf("Pontos Turísticos: %s (%d)\n", carta1, cartanumerodepontostur);
     printf("Densidade Populacional: %s (%d)\n", carta2, cartadensidade);
     printf("PIB Percapita: %s (%d)\n", carta1, cartapibpercapita);
     printf("Super Poder: %s (%d)\n", carta2, cartasuperpoder);
     
}