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


    printf("Jogo de trunfos\n");


    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontos1, pontos2;

        printf("jogo de supertrunfo - cadastro de cartas\n");
        printf("voce ira cadastrar duas cartas\n");

        //cadastro da carta 01

        printf("carta 01:\n");

        printf("população:");
        scanf(" %d\n", &populacao1);

        printf("area:");
        scanf(" %f\n", &area1);

        printf("pib:");
        scanf(" %f\n", &pib1);

        printf("pontos turisticos:");
        scanf(" %d\n", &pontos1);

        printf("carta 01 cadastrada com sucesso!!\n");
        printf("carta01:\n");
        printf("populacao: %d\n", populacao1);
        printf("area: %f\n", area1);
        printf("pib:%f\n", pib1);
        printf("pontos turisticos: %d\n", pontos1);


        //cadastro da segunda carta

        printf("carta 02:\n");

        printf("população:");
        scanf(" %d\n", &populacao2);

        printf("area:");
        scanf(" %f\n", &area2);

        printf("pib:");
        scanf(" %f\n", &pib2);

        printf("pontos turisticos:");
        scanf(" %d\n", &pontos2);

        printf("carta 02 cadastrada com sucesso!!\n");
        printf("carta02:\n");
        printf("populacao: %d\n", populacao2);
        printf("area: %f\n", area2);
        printf("pib:%f\n", pib2);
        printf("pontos turisticos: %d\n", pontos2);












    return 0;
}
