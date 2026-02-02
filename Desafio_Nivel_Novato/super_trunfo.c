/*
 * Programa: Super Trunfo de Países
 * Descrição: Cria e exibe duas cartas de um jogo de Super Trunfo com informações sobre países
 * Autor: Heloisa Duarte
 * Data: 02/02/2026
 */

#include <stdio.h>

int main()
{
    // Declaração de variáveis para armazenar dados de duas cartas
    // Variáveis de texto (strings) para estado, código e nome da cidade
    char estado[50], estado_2[50], codigo[10], codigo_2[10], nomeCidade[50], nomeCidade_2[50];
    // Variáveis inteiras para população e número de pontos turísticos
    int populacao, populacao_2, pontoTuristico, pontoTuristico_2;
    // Variáveis de ponto flutuante para área e PIB
    float area, area_2, pib, pib_2;

    // ============== ENTRADA DE DADOS - PRIMEIRA CARTA ==============

    printf("Cartas do Super Trunfo de Países:\n\n");

    printf("Forneça as seguintes informações para a PRIMEIRA CARTA:\n");

    // Lê o estado da primeira carta
    printf("Estado: \n");
    scanf(" %49[^\n]", estado);

    // Lê o código da primeira carta
    printf("Código: \n");
    scanf(" %9s", codigo);

    // Lê o nome da cidade da primeira carta (permite espaços)
    printf("Nome da Cidade: \n");
    /* manter estrutura simples: usar scanf com scanset para permitir espaços */
    scanf(" %49[^\n]", nomeCidade);

    // Lê a população da primeira carta
    printf("População: \n");
    scanf(" %d", &populacao);

    // Lê a área em km² da primeira carta
    printf("Area (em km²): \n");
    scanf(" %f", &area);

    // Lê o PIB em bilhões da primeira carta
    printf("PIB (em bilhões): \n");
    scanf(" %f", &pib);

    // Lê o número de pontos turísticos da primeira carta
    printf("Ponto Turístico: \n");
    scanf(" %d", &pontoTuristico);

    printf("\nCarta Criada:\n");

    // ============== ENTRADA DE DADOS - SEGUNDA CARTA ==============

    printf("Forneça as seguintes informações para a SEGUNDA CARTA:\n");

    // Lê o estado da segunda carta
    printf("Estado: \n");
    scanf(" %49[^\n]", estado_2);

    // Lê o código da segunda carta
    printf("Código: \n");
    scanf(" %9s", codigo_2);

    // Lê o nome da cidade da segunda carta (permite espaços)
    printf("Nome da Cidade: \n");
    /* manter estrutura simples: usar scanf com scanset para permitir espaços */
    scanf(" %49[^\n]", nomeCidade_2);

    // Lê a população da segunda carta
    printf("População: \n");
    scanf(" %d", &populacao_2);

    // Lê a área em km² da segunda carta
    printf("Area (em km²): \n");
    scanf(" %f", &area_2);

    // Lê o PIB em bilhões da segunda carta
    printf("PIB (em bilhões): \n");
    scanf(" %f", &pib_2);

    // Lê o número de pontos turísticos da segunda carta
    printf("Ponto Turístico: \n");
    scanf(" %d", &pontoTuristico_2);

    printf("\nCarta Criada:\n");

    // ============== EXIBIÇÃO DOS DADOS - PRIMEIRA CARTA ==============

    printf("Carta 1:\n");

    // Exibe todas as informações da primeira carta formatadas
    printf("Estado :%s\n", estado);
    printf("Código :%s\n", codigo);
    printf("Nome da Cidade :%s\n", nomeCidade);
    printf("População :%d\n", populacao);
    printf("Área :%.2f km²\n", area);
    printf("PIB :%.2f bilhões de reais\n", pib);
    printf("Número de Ponto Turístico :%d\n", pontoTuristico);

    // ============== EXIBIÇÃO DOS DADOS - SEGUNDA CARTA ==============

    printf("Carta 2:\n");

    // Exibe todas as informações da segunda carta formatadas
    printf("Estado :%s\n", estado_2);
    printf("Código :%s\n", codigo_2);
    printf("Nome da Cidade :%s\n", nomeCidade_2);
    printf("População :%d\n", populacao_2);
    printf("Área :%.2f km²\n", area_2);
    printf("PIB :%.2f bilhões de reais\n", pib_2);
    printf("Número de Ponto Turístico :%d\n", pontoTuristico_2);
    
    // Encerra o programa com sucesso
    return 0;
}