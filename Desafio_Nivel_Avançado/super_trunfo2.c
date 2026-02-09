/*
 * Programa: Super Trunfo de Países
 * Descrição: Cria e exibe duas cartas de um jogo de Super Trunfo com informações sobre países
 * Autor: Heloisa Duarte
 * Data: 02/02/2026
 */

#include <stdio.h>

int main() {
    // Carta 1
    char estado[50], codigo[10], nomeCidade[50];
    unsigned long int populacao;
    int pontoTuristico;
    float area, pib;

    // Carta 2
    char estado_2[50], codigo_2[10], nomeCidade_2[50];
    unsigned long int populacao_2;
    int pontoTuristico_2;
    float area_2, pib_2;

    printf("Cartas do Super Trunfo de Países:\n\n");
    printf("Forneça as seguintes informações para a PRIMEIRA CARTA:\n\n");

    printf("Estado: \n");
    scanf(" %49[^\n]", estado);

    printf("Código: \n");
    scanf(" %9s", codigo);

    printf("Nome da Cidade: \n");
    scanf(" %49[^\n]", nomeCidade);

    printf("População: \n");
    scanf(" %lu", &populacao);

    printf("Area (em km²): \n");
    scanf(" %f", &area);

    printf("PIB (em bilhões): \n");
    scanf(" %f", &pib);

    printf("Ponto Turístico: \n");
    scanf(" %d", &pontoTuristico);

    printf("\nForneça as seguintes informações para a SEGUNDA CARTA:\n\n");

    printf("Estado: \n");
    scanf(" %49[^\n]", estado_2);

    printf("Código: \n");
    scanf(" %9s", codigo_2);

    printf("Nome da Cidade: \n");
    scanf(" %49[^\n]", nomeCidade_2);

    printf("População: \n");
    scanf(" %lu", &populacao_2);

    printf("Area (em km²): \n");
    scanf(" %f", &area_2);

    printf("PIB (em bilhões): \n");
    scanf(" %f", &pib_2);

    printf("Ponto Turístico: \n");
    scanf(" %d", &pontoTuristico_2);

    // Exibição das cartas
    printf("\n\nCarta 1:\n");
    printf("Estado: %s\n", estado);
    printf("Código: %s\n", codigo);
    printf("Nome da Cidade: %s\n", nomeCidade);
    printf("População: %lu\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões de reais\n", pib);
    printf("Número de Ponto Turístico: %d\n", pontoTuristico);

    printf("\nCarta 2:\n");
    printf("Estado: %s\n", estado_2);
    printf("Código: %s\n", codigo_2);
    printf("Nome da Cidade: %s\n", nomeCidade_2);
    printf("População: %lu\n", populacao_2);
    printf("Área: %.2f km²\n", area_2);
    printf("PIB: %.2f bilhões de reais\n", pib_2);
    printf("Número de Ponto Turístico: %d\n", pontoTuristico_2);

    // Cálculos
    float densidade1 = (float)populacao / area;
    float densidade2 = (float)populacao_2 / area_2;

    float pib_pc1 = pib / (float)populacao;
    float pib_pc2 = pib_2 / (float)populacao_2;

    float super1 = (float)populacao + area + pib + (float)pontoTuristico + pib_pc1 + (1.0f / densidade1);
    float super2 = (float)populacao_2 + area_2 + pib_2 + (float)pontoTuristico_2 + pib_pc2 + (1.0f / densidade2);

    printf("\n\nValores Calculados:\n\n");

    printf("Carta 1 - Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("Carta 1 - PIB per Capita: %.6f reais\n", pib_pc1);
    printf("Carta 1 - Super Poder: %.2f\n\n", super1);

    printf("Carta 2 - Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("Carta 2 - PIB per Capita: %.6f reais\n", pib_pc2);
    printf("Carta 2 - Super Poder: %.2f\n", super2);

    // Comparações (com mensagem de vencedora, sem if/while)
    printf("\n\nComparação de Cartas:\n\n");

    int winPop = (populacao > populacao_2);
    printf("População: %s venceu (%d)\n", winPop ? "Carta 1" : "Carta 2", winPop);

    int winArea = (area > area_2);
    printf("Área: %s venceu (%d)\n", winArea ? "Carta 1" : "Carta 2", winArea);

    int winPIB = (pib > pib_2);
    printf("PIB: %s venceu (%d)\n", winPIB ? "Carta 1" : "Carta 2", winPIB);

    int winPontos = (pontoTuristico > pontoTuristico_2);
    printf("Pontos Turísticos: %s venceu (%d)\n", winPontos ? "Carta 1" : "Carta 2", winPontos);

    // Densidade: menor vence
    int winDens = (densidade1 < densidade2);
    printf("Densidade Populacional: %s venceu (%d)\n", winDens ? "Carta 1" : "Carta 2", winDens);

    int winPibPc = (pib_pc1 > pib_pc2);
    printf("PIB per Capita: %s venceu (%d)\n", winPibPc ? "Carta 1" : "Carta 2", winPibPc);

    int winSuper = (super1 > super2);
    printf("Super Poder: %s venceu (%d)\n", winSuper ? "Carta 1" : "Carta 2", winSuper);

    return 0;
}
