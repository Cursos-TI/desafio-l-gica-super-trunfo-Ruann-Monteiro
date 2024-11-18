#include <stdio.h>
#include <string.h>

// Definir a estrutura da carta
typedef struct {
    char nome[50];
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;
} Carta;

// Função para calcular a densidade populacional
float densidade_populacional(Carta carta) {
    return carta.populacao / carta.area;
}

// Função para comparar as cartas
Carta comparar_cartas(Carta carta1, Carta carta2, int atributo) {
    switch (atributo) {
        case 1: // Comparar população
            return (carta1.populacao > carta2.populacao) ? carta1 : carta2;
        case 2: // Comparar área
            return (carta1.area > carta2.area) ? carta1 : carta2;
        case 3: // Comparar PIB
            return (carta1.pib > carta2.pib) ? carta1 : carta2;
        case 4: // Comparar pontos turísticos
            return (carta1.pontos_turisticos > carta2.pontos_turisticos) ? carta1 : carta2;
        case 5: // Comparar densidade populacional (menor é melhor)
            return (densidade_populacional(carta1) < densidade_populacional(carta2)) ? carta1 : carta2;
        default:
            printf("Atributo inválido!\n");
            return carta1; // Retorna uma carta qualquer em caso de erro
    }
}

// Função para cadastrar uma carta
Carta cadastrar_carta() {
    Carta carta;
    
    printf("Nome da cidade: ");
    scanf(" %[^\n]", carta.nome); // Lê o nome
    printf("Populacao: ");
    scanf("%d", &carta.populacao); // Lê a população
    printf("Area : ");
    scanf("%f", &carta.area); // Lê a área
    printf("PIB : ");
    scanf("%f", &carta.pib); // Lê o PIB
    printf("Numero de pontos turisticos: ");
    scanf("%d", &carta.pontos_turisticos); // Lê os pontos turísticos
    
    return carta;
}

// Função para exibir o resultado da comparação
void exibir_resultado(Carta carta1, Carta carta2, Carta vencedor) {
    printf("\nResultado da comparacao entre %s e %s:\n", carta1.nome, carta2.nome);
    printf("A carta vencedora e: %s\n", vencedor.nome);
}

int main() {
    int atributo;
    Carta carta1, carta2, vencedor;

    // Cadastro das duas cartas

    printf("Cadastre a primeira carta:\n");
    carta1 = cadastrar_carta();
    
    printf("\nCadastre a segunda carta:\n");
    carta2 = cadastrar_carta();

    // Menu de seleção do atributo para comparação
    printf("\nEscolha o atributo para comparar:\n");
    printf("1. Populacao\n");
    printf("2. Area\n");
    printf("3. PIB\n");
    printf("4. Pontos turisticos\n");
    printf("5. Densidade populacional\n");
    printf("Escolha uma opcao (1-5): ");
    scanf("%d", &atributo);

    // Comparar as cartas com o atributo escolhido
    vencedor = comparar_cartas(carta1, carta2, atributo);

    // Exibir o resultado da comparação
    exibir_resultado(carta1, carta2, vencedor);

    return 0;
}