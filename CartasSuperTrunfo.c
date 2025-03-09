#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
     char Estado[20] = "Bahia", Estado1[20] = "São Paulo", Codigo[20] = "A01", Codigo1[20] = "A02", cidade[30] = "Parateca",cidade1[30] = "São Bernardo";
     int Populacao = 1809, Populacao1 = 20000;
     float Area = 41780, Area1 = 4000000, PIB = 4000000, PIB1 = 2000000;
     int pontosturisticos = 5, pontosturisticos1 = 50;
     float densidadepopulacional = Populacao / Area, densidadepopulacional1 = Populacao1 / Area1;
     float pibpercapita = PIB / Populacao, pibpercapita1 = PIB1 / Populacao1;



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
     
//Super trunfo carta 2

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



    
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
