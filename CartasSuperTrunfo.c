#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.


    // Início do código do desafio (Danilo)

    // Declaração das Variáveis

    int codigo, populacao, atracoes;
    float area, PIB;
    char nome;

    // Cadastro da Cidade 1

    printf("Digite o código da cidade 1: \n");
    scanf("%d", &codigo);

    printf("Digite o nome da cidade 1: \n");
    scanf("%s", &nome);

    printf("Digite a quantidade de habitantes da cidade 1: \n");
    scanf("%d", &populacao);

    printf("Digite a área da cidade 1 (km²): \n");
    scanf("%f", &area);

    printf("Digite o PIB da cidade 1 (R$): \n");
    scanf("%f", &PIB);

    printf("Digite a quantidade de pontos turísticos da cidade 1: \n");
    scanf("%d", &atracoes);

    // Imprimir Carta 1

    printf("Carta 1\n");
    printf("Código: %d\n", codigo);
    printf("Cidade: %s\n", nome);


    return 0;
}
