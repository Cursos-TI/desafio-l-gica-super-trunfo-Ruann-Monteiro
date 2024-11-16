#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {

//primeira carta 

     int codigo_da_cidade;
     int populacao;
     float PIB;
     int area;
     int numero_de_pontos_turisticos;
     char nome[50];

//Segunda carta

     int codigo_da_cidade2;
     int populacao2;
     float PIB2;
     int area2;
     int numero_de_pontos_turisticos2;
     char nome2[50];

// Primeira carta

    printf("Nome da Cidade: \n");
    scanf("%s", &nome);

    printf("Codigo da Cidade: \n");
    scanf("%d", &codigo_da_cidade);

    printf("População: \n");
    scanf("%d", &populacao);

    printf("Area da cidade: \n");
    scanf("%d", &area);

    printf("PIB:$ \n");
    scanf("%f", &PIB);

    printf("Numero de pontos turisticos: \n");
    scanf("%d", &numero_de_pontos_turisticos);
 
    printf("\n");

//Segunda carta 

    printf("Nome da Cidade: \n");
    scanf("%s", &nome2);

    printf("Codigo da Cidade: \n");
    scanf("%d", &codigo_da_cidade2);

    printf("População: \n");
    scanf("%d", &populacao2);

    printf("Area da cidade: \n");
    scanf("%d", &area2);

    printf("PIB:$ \n");
    scanf("%f", &PIB2);

    printf("Numero de pontos turisticos: \n");
    scanf("%d", &numero_de_pontos_turisticos2);

    printf("\n");

//Primeira carta

    printf("Nome da Cidade: %s\n", nome);
    printf("Codigo da Cidade: %d\n",codigo_da_cidade);
    printf("População: %d\n",populacao);
    printf("Área: %d\n",area);
    printf("PIB: $%.3f\n",PIB);
    printf("Numero de pontos turisticos: %d\n",numero_de_pontos_turisticos);
    printf("\n");

//segunda carta 

    printf("Nome da Cidade: %s\n", nome2);
    printf("Codigo da Cidade: %d\n",codigo_da_cidade2);
    printf("População: %d\n",populacao2);
     printf("Área: %d\n",area2);
    printf("PIB: $%.3f\n",PIB2);
    printf("Numero de pontos turisticos: %d\n",numero_de_pontos_turisticos2);
    printf("\n");
 
    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
     if (populacao > populacao2) {
     printf("Cidade 1 tem maior população.\n");
    } else {
         printf("Cidade 2 tem maior população.\n");
    }

    if (area > area2) {
     printf("Cidade 1 tem uma area maior.\n");
    } else {
         printf("Cidade 2 tem uma area maior.\n");
    }

    if (PIB > PIB2) {
     printf("Cidade 1 tem um PIB maior.\n");
    } else {
         printf("Cidade 2 tem um PIB maior.\n");
    }

      if (numero_de_pontos_turisticos > numero_de_pontos_turisticos2) {
     printf("Cidade 1 tem um numero maior de pontos turisticos.\n");
    } else {
         printf("Cidade 2 tem um numero maior de pontos turisticos.\n");  
    }
int cidadeVencedora;


    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
     printf("A cidade vencedora é: %s\n", cidadeVencedora);

    return 0;}
