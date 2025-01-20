
#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio. 

// funcao generica para entrada de dados
/*
void entradaDados() {
    // recebendo a entrada dos valores das variaveis
    printf("Digite o nome do estado: \n");
    scanf("%s", estado); // recebe o valor do estado

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
}
*/

// funcao generica para calcula densidade populacional
/*
float calcularDensidadePopulacional() {
    // calcula densidade populacional
    densidade_populacional = populacao / area;
}
*/

// funcao generica para calcula densidade populacional
/*
float calcularPibPerCapita() {
    // calcula pib per capita
    pib_per_capita = pib / populacao;
}
*/

/*
void exibirDados() {
    // mostrando os valores das variaveis
    printf("Estado: %s\n", estado);
    printf("Código da Cidade: %s\n", codigo_da_cidade);
    printf("Nome: %s\n", nome);
    printf("População: %d\n", populacao);
    printf("Área: %.2f\n", area);
    printf("Densidade Populacional: %.2f\n", densidade_populacional);
    printf("PIB: R$ %.2f\n", pib);
    printf("PIB per Capita: %.2f\n", pib_per_capita);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos);
}
*/

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    char estado[10];
    char codigo_da_cidade[10];
    char nome[50];
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;
    float densidade_populacional;
    float pib_per_capita;

    // Titulo
    printf("*** Desafio Super Trunfo - Países! ***\n");

    // Subtitulo
    printf("*** Tema 1 - Cadastro das Cartas! ***\n");

    // chamada da funcao entradaDados
    // entradaDados();
    // recebendo a entrada dos valores das variaveis
    printf("Digite o nome do estado: \n");
    scanf("%s", estado); // recebe o valor do estado

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


    // chamada da funcao calcularDensidadePopulacional
    // calcularDensidadePopulacional();
    // calcula densidade populacional
    densidade_populacional =  (float) populacao / area;

    // chamada da funcao calcularPibPerCapita
    // calcularPibPerCapita(); 
    // calcula o pib per capita
    pib_per_capita = pib / populacao;



    // chamada da funcao exibirDados
    // exibirDados();
    // mostrando os valores das variaveis
    printf("Estado: %s\n", estado);
    printf("Código da Cidade: %s\n", codigo_da_cidade);
    printf("Nome: %s\n", nome);
    printf("População: %d\n", populacao);
    printf("Área: %.2f\n", area);
    printf("Densidade Populacional: %.2f\n", densidade_populacional);
    printf("PIB: R$ %.2f\n", pib);
    printf("PIB per Capita: %.2f\n", pib_per_capita);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos);

    return 0;
}
