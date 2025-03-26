#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.

int main() {
    char estado [50]; // Nome do estado
    char codigo [5]; // Código da carta. Ex:A01,B01
    char cidade[50]; // Nome da cidade
    int populacao; // Número da população da cidade
    float area; // Área em km²
    float PIB; // Produto Interno Bruto
    int pontos_turisticos; // número dos pontos turísticos da cidade

    printf("Super Trunfo - Tema: Países\n");
    
    printf("Cadastro das Cartas:\n");

    printf("Carta 1:\n");

    printf("Digite o nome do estado:\n");
    scanf("%s", &estado);

    printf("Digite um código:(exemplo:A01)\n");
    scanf("%s", &codigo);

    printf("Digite o nome da cidade:\n");
    scanf("%s", &cidade);

    printf("Digite o número da população(número inteiro):\n");
    scanf("%d", &populacao);

    printf("Digite a área da cidade em km²(número decimal):\n");
    scanf("%f", &area);
     
    printf("Digite o PIB(Produto Interno Bruto)(número decimal):\n");
    scanf("%f", &PIB);

    printf("Digite o número de pontos turísticos(número inteiro):\n");
    scanf("%d", &pontos_turisticos);
    
    printf(" Cadastro confirmado/Carta 1!\n");

    printf("Nome do Estado:%s - Código:%s\n", estado, codigo);
    printf("Nome da cidade:%s\n", cidade);
    printf("Número da população:%d\n",populacao);
    printf("Área:%f\n", area);
    printf("PIB:%f\n", PIB);
    printf("Número de pontos turísticos:%d\n", pontos_turisticos);

    printf("Carta 2:\n");

    printf("Digite o nome do estado:\n");
    scanf("%s", &estado);

    printf("Digite um código:(exemplo:A01)\n");
    scanf("%s", &codigo);

    printf("Digite o nome da cidade:\n");
    scanf("%s", &cidade);

    printf("Digite o número da população:\n");
    scanf("%d", &populacao);

    printf("Digite a área da cidade em km²:\n");
    scanf("%f", &area);
     
    printf("Digite o PIB(Produto Interno Bruto):\n");
    scanf("%f", &PIB);

    printf("Digite o número de pontos turísticos:\n");
    scanf("%d", &pontos_turisticos);
    
    printf(" Cadastro confirmado/Carta 2!\n");


    printf("Nome do Estado:%s - Código:%s\n", estado, codigo);
    printf("Nome da cidade:%s\n", cidade);
    printf("Número da população:%d\n",populacao);
    printf("Área:%f\n", area);
    printf("PIB:%f\n", PIB);
    printf("Número de pontos turísticos:%d\n", pontos_turisticos);


    return 0;
}
