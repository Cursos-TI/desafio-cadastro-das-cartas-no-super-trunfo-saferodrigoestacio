#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    // declarando variaveis
    char codigo_da_cidade[10];
    char nome[50];
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;

    // Titulo
    printf("Desafio Super Trunfo - Países! \n");
    // Subtitulo
    printf("Tema 1 - Cadastro das Cartas! \n");

    // recebendo a entrada dos valores das variaveis
    printf("Digite o código da cidade: \n");
    scanf("%s", codigo_da_cidade); // recebe o valor do codigo_da_cidade
    printf("Digite o nome do país: \n");
    scanf("%s", nome); // recebe o valor do nome
    printf("Digite o número total da população: \n");
    scanf("%d", &populacao); // recebe o valor da populacao
    printf("Digite a área: \n");
    scanf("%f", &area); // recebe o valor da area
    printf("Digite o PIB: \n");
    scanf("%f", &pib); // recebe o valor do pib
    printf("Digite a quantidade de pontos turísticos: \n");
    scanf("%d", &pontos_turisticos); // recebe o valor do pontos_turisticos

    // mostrando os valores das variaveis
    printf("Código da Cidade: %s\n", codigo_da_cidade);
    printf("Nome: %s\n", nome);
    printf("População: %d\n", populacao);
    printf("Área: %f\n", area);
    printf("PIB: R$ %f\n", pib);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos);

    return 0;
}
