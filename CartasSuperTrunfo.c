
#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio. 

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    char estado1[3], estado2[3];
    char codigo_da_cidade1[4], codigo_da_cidade2[4];
    char nome_da_cidade1[50], nome_da_cidade2[50];
    unsigned long int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontos_turisticos1, pontos_turisticos2;
    float densidade_populacional1, densidade_populacional2;
    float pib_per_capita1, pib_per_capita2;
    double superpoder1, superpoder2;


    // Titulo
    printf("*** Desafio Super Trunfo - Países! ***\n");

    // Subtitulo
    printf("*** Tema 1 - Cadastro das Cartas! ***\n\n");

    //--------------------------------------------------------------------------
    // recebendo a entrada dos valores das variaveis da primeira carta
    printf("*** Primeira Carta ***\n\n");
    printf("Digite o nome do estado da primeira carta (ex.: GO): \n");
    scanf("%2s", estado1); // recebe o valor do estado1

    printf("Digite o código da cidade da primeira carta (ex.: A01): \n");
    scanf("%3s", codigo_da_cidade1); // recebe o valor do codigo_da_cidade1

    printf("Digite o nome da cidade da primeira carta: \n");
    scanf("%s", nome_da_cidade1); // recebe o valor do nome_da_cidade1

    printf("Digite o número total da população da primeira carta: \n");
    scanf("%lu", &populacao1); // recebe o valor da populacao1

    printf("Digite a área(km²) da primeira carta: \n");
    scanf("%f", &area1); // recebe o valor da area1

    printf("Digite o PIB da primeira carta: \n");
    scanf("%f", &pib1); // recebe o valor do pib1

    printf("Digite a quantidade de pontos turísticos da primeira carta: \n");
    scanf("%d", &pontos_turisticos1); // recebe o valor do pontos_turisticos1
    printf("\n\n");


    //--------------------------------------------------------------------------
    // recebendo a entrada dos valores das variaveis da segunda carta
    printf("*** Segunda Carta ***\n\n");
    printf("Digite o nome do estado da segunda carta (ex.: GO): \n");
    scanf("%2s", estado2); // recebe o valor do estado2

    printf("Digite o código da cidade da segunda carta (ex.: A01): \n");
    scanf("%3s", codigo_da_cidade2); // recebe o valor do codigo_da_cidade2

    printf("Digite o nome da cidade da segunda carta: \n");
    scanf("%s", nome_da_cidade2); // recebe o valor do nome_da_cidade2

    printf("Digite o número total da população da segunda carta: \n");
    scanf("%lu", &populacao2); // recebe o valor da populacao2

    printf("Digite a área(km²) da segunda carta: \n");
    scanf("%f", &area2); // recebe o valor da area2

    printf("Digite o PIB da segunda carta: \n");
    scanf("%f", &pib2); // recebe o valor do pib2

    printf("Digite a quantidade de pontos turísticos da segunda carta: \n");
    scanf("%d", &pontos_turisticos2); // recebe o valor do pontos_turisticos2
    printf("\n\n");


    //--------------------------------------------------------------------------
    // calcula densidade populacional da primeira carta
    densidade_populacional1 =  (float) populacao1 / area1;
    // calcula o pib per capita da primeira carta
    pib_per_capita1 = pib1 / populacao1;
    // calcula o super poder
    superpoder1 = (double) populacao1 + area1 + pib1 + pontos_turisticos1 + densidade_populacional1 + pib_per_capita1;

    // calcula densidade populacional da segunda carta
    densidade_populacional2 =  (float) populacao2 / area2;
    // calcula o pib per capita da segunda carta
    pib_per_capita2 = pib2 / populacao2;
    // calcula o super poder
    superpoder2 = (double) populacao2 + area2 + pib2 + pontos_turisticos2 + densidade_populacional2 + pib_per_capita2;

    //--------------------------------------------------------------------------
    // mostrando os valores das variaveis da primeira carta
    printf("*** PRIMEIRA CARTA ***\n");
    printf("Estado: %s\n", estado1);
    printf("Código da Cidade: %s\n", codigo_da_cidade1);
    printf("Nome da Cidade: %s\n", nome_da_cidade1);
    printf("População: %lu\n", populacao1);
    printf("Área (km²): %.2f\n", area1);
    printf("Densidade Populacional: %f hab/km²\n", densidade_populacional1);
    printf("PIB: R$ %.2f\n", pib1);
    printf("PIB per Capita: R$ %.2f\n", pib_per_capita1);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos1);
    printf("Super Poder: %.2f\n", superpoder1);
    printf("\n\n");

    //--------------------------------------------------------------------------
    // mostrando os valores das variaveis da segunda carta
    printf("*** SEGUNDA CARTA ***\n");
    printf("Estado: %s\n", estado2);
    printf("Código da Cidade: %s\n", codigo_da_cidade2);
    printf("Nome da Cidade: %s\n", nome_da_cidade2);
    printf("População: %lu hab\n", populacao2);
    printf("Área (m²): %.2f\n", area2);
    printf("Densidade Populacional: %f hab/km²\n", densidade_populacional2);
    printf("PIB: R$ %.2f\n", pib2);
    printf("PIB per Capita: R$ %.2f\n", pib_per_capita2);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos2);
    printf("Super Poder: %.2f\n", superpoder2);
    printf("\n\n");

    //--------------------------------------------------------------------------
    // mostrando os resultados
    //char nome_completo_da_cidade1[100], nome_completo_da_cidade2[100];
    //nome_completo_da_cidade1 = codigo_da_cidade1 + " - " nome_da_cidade1 + " - " estado1;
    //nome_completo_da_cidade2 = codigo_da_cidade2 + " - " nome_da_cidade2 + " - " estado2;

    printf("*** RESULTADOS ***\n");

    // resultado da populacao
    printf("%s - Estado: %s, Código: %s, População: %lu hab\n", nome_da_cidade1, estado1, codigo_da_cidade1, populacao1);
    printf("%s - Estado: %s, Código: %s, População: %lu hab\n", nome_da_cidade2, estado2, codigo_da_cidade2, populacao2);

    if (populacao1 > populacao2) {
        printf("Resultado: %s é a vencedora!\n", nome_da_cidade1);
    } else if (populacao1 < populacao2) {
        printf("Resultado: %s é a vencedora!\n", nome_da_cidade2);
    } else {
        printf("As cartas empataram!\n");
    }

    // resultado da area
    printf("------------------------------------------------------------------\n\n");
    printf("%s - Estado: %s, Código: %s, Área: %.2f km²\n", nome_da_cidade1, estado1, codigo_da_cidade1, area1);
    printf("%s - Estado: %s, Código: %s, Área: %.2f km²\n", nome_da_cidade2, estado2, codigo_da_cidade2, area2);

    if (area1 > area2) {
        printf("Resultado: %s é a vencedora!\n", nome_da_cidade1);
    } else if (area1 < area2) {
        printf("Resultado: %s é a vencedora!\n", nome_da_cidade2);
    } else {
        printf("As cartas empataram!\n");
    }

    // resultado do pib
    printf("------------------------------------------------------------------\n\n");
    printf("%s - Estado: %s, Código: %s, PIB: R$ %.2f\n", nome_da_cidade1, estado1, codigo_da_cidade1, pib1);
    printf("%s - Estado: %s, Código: %s, PIB: R$ %.2f\n", nome_da_cidade2, estado2, codigo_da_cidade2, pib2);

    if (pib1 > pib2) {
        printf("Resultado: %s é a vencedora!\n", nome_da_cidade1);
    } else if (pib1 < pib2) {
        printf("Resultado: %s é a vencedora!\n", nome_da_cidade2);
    } else {
        printf("As cartas empataram!\n");
    }

    // resultado do nº de pontos turisticos
    printf("------------------------------------------------------------------\n\n");
    printf("%s - Estado: %s, Código: %s, Pontos Turísticos: %d\n", nome_da_cidade1, estado1, codigo_da_cidade1, pontos_turisticos1);
    printf("%s - Estado: %s, Código: %s, Pontos Turísticos: %d\n", nome_da_cidade2, estado2, codigo_da_cidade2, pontos_turisticos2);

    if (pontos_turisticos1 > pontos_turisticos2) {
        printf("Resultado: %s é a vencedora!\n", nome_da_cidade1);
    } else if (pontos_turisticos1 < pontos_turisticos2) {
        printf("Resultado: %s é a vencedora!\n", nome_da_cidade2);
    } else {
        printf("As cartas empataram!\n");
    }

    // resultado do densidade populacional
    printf("------------------------------------------------------------------\n\n");
    printf("%s - Estado: %s, Código: %s, Densidade Populacional: %f hab/km²\n", nome_da_cidade1, estado1, codigo_da_cidade1, densidade_populacional1);
    printf("%s - Estado: %s, Código: %s, Densidade Populacional: %f hab/km²\n", nome_da_cidade2, estado2, codigo_da_cidade2, densidade_populacional2);

    if (densidade_populacional1 < densidade_populacional2) {
        printf("Resultado: %s é a vencedora!\n", nome_da_cidade1);
    } else if (densidade_populacional1 > densidade_populacional2) {
        printf("Resultado: %s é a vencedora!\n", nome_da_cidade2);
    } else {
        printf("As cartas empataram!\n");
    }

    // resultado do pib per capita
    printf("------------------------------------------------------------------\n\n");
    printf("%s - Estado: %s, Código: %s, PIB per Capita: R$ %.2f\n", nome_da_cidade1, estado1, codigo_da_cidade1, pib_per_capita1);
    printf("%s - Estado: %s, Código: %s, PIB per Capita: R$ %.2f\n", nome_da_cidade2, estado2, codigo_da_cidade2, pib_per_capita2);

    if (pib_per_capita1 > pib_per_capita2) {
        printf("Resultado: %s é a vencedora!\n", nome_da_cidade1);
    } else if (pib_per_capita1 < pib_per_capita2) {
        printf("Resultado: %s é a vencedora!\n", nome_da_cidade2);
    } else {
        printf("As cartas empataram!\n");
    }

    // resultado do super poder
    printf("------------------------------------------------------------------\n\n");
    printf("%s - Estado: %s, Código: %s, Super Poder: %.2f\n", nome_da_cidade1, estado1, codigo_da_cidade1, superpoder1);
    printf("%s - Estado: %s, Código: %s, Super Poder: %.2f\n", nome_da_cidade2, estado2, codigo_da_cidade2, superpoder2);

    if (superpoder1 > superpoder2) {
        printf("Resultado: %s é a vencedora!\n", nome_da_cidade1);
    } else if (superpoder1 < superpoder2) {
        printf("Resultado: %s é a vencedora!\n", nome_da_cidade2);
    } else {
        printf("As cartas empataram!\n");
    }

    return 0;
}
