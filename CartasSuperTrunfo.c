#include <stdio.h>

// Desafio Super Trunfo
// Nível Aventureiro

int main() {
    char estado [50]; // Nome do estado
    char codigo [5]; // Código da carta. Ex:A01,B01
    char cidade[50]; // Nome da cidade
    int populacao; // Número da população da cidade
    float area; // Área em km²
    float PIB; // Produto Interno Bruto
    int pontos_turisticos; // número dos pontos turísticos da cidade
    float densidade_populacional; // divisão da população pela sua área
    float PIB_per_Capita; // divisão do PIB da cidade pela sua população
 
    printf("Super Trunfo - Tema: Países\n");
    printf("---------------------------------\n\n");
    
    printf("=== Cadastro das Cartas ====\n\n");

    //Carta 1

    printf("Carta 1:\n");
    printf("----------\n");

    printf("Digite o nome do estado:\n");
    scanf("%s", estado);

    printf("Digite um código:(exemplo:A01)\n");
    scanf("%s", codigo);

    printf("Digite o nome da cidade:\n");
    scanf("%s", cidade);

    printf("Digite o número da população(número inteiro):\n");
    scanf("%d", &populacao);

    printf("Digite a área da cidade em km²(número decimal):\n");
    scanf("%f", &area);
     
    printf("Digite o PIB(Produto Interno Bruto)(número decimal):\n");
    scanf("%f", &PIB);

    printf("Digite o número de pontos turísticos(número inteiro):\n");
    scanf("%d", &pontos_turisticos);

    //Cálculos
    densidade_populacional = (float) populacao / area;
    PIB_per_Capita = (float) (PIB * 1000000000) / populacao;


    printf("\n=== Cadastro confirmado - Carta 1!===\n");
    printf("-----------------------------------------\n");

    printf("Nome do Estado:%s - Código:%s\n", estado, codigo);
    printf("Nome da cidade:%s\n", cidade);
    printf("Número da população:%d habitantes\n",populacao);
    printf("Área:%.2f km²\n", area);
    printf("PIB:R$%.2f bilhões\n", PIB);
    printf("Número de pontos turísticos:%d\n", pontos_turisticos);
    printf("Densidade Populacional é:%.2f hab/km²\n", densidade_populacional);
    printf("PIB per Capita é:%.2f reais\n\n", PIB_per_Capita);


  
    //Carta 2

    printf("Carta 2:\n");
    printf("----------\n");
    

    printf("Digite o nome do estado:\n");
    scanf("%s", estado);

    printf("Digite um código:(exemplo:A01)\n");
    scanf("%s", codigo);

    printf("Digite o nome da cidade:\n");
    scanf("%s", cidade);

    printf("Digite o número da população(número inteiro):\n");
    scanf("%d", &populacao);

    printf("Digite a área da cidade em km²(número decimal):\n");
    scanf("%f", &area);
     
    printf("Digite o PIB(Produto Interno Bruto)(número decimal):\n");
    scanf("%f", &PIB);

    printf("Digite o número de pontos turísticos(número inteiro):\n");
    scanf("%d", &pontos_turisticos);
    
    //Cálculos
    densidade_populacional = (float) populacao / area;
    PIB_per_Capita = (float) (PIB * 1000000000) / populacao;

    
    printf("\n === Cadastro confirmado - Carta 2!===\n");
    printf("-----------------------------------------\n");
 

    printf("Nome do Estado:%s - Código:%s\n", estado, codigo);
    printf("Nome da cidade:%s\n", cidade);
    printf("Número da população:%d habitantes\n",populacao);
    printf("Área:%.2f km²\n", area);
    printf("PIB:R$%.2f bilhões\n", PIB);
    printf("Número de pontos turísticos:%d\n", pontos_turisticos);
    printf("Densidade Populacional é:%.2f hab/km²\n", densidade_populacional);
    printf("PIB per Capita é:%.2f reais\n\n", PIB_per_Capita);
   

    return 0;
}
