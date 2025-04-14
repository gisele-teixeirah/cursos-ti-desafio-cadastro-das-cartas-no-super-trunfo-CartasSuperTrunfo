#include <stdio.h>

// Desafio Super Trunfo
// Nível Aventureiro

int main() {
    char estado [50]; // Nome do estado
    char codigo [5]; // Código da carta. Ex:A01,B01
    char cidade[50]; // Nome da cidade
    unsigned long int populacao; // Número da população da cidade
    float area; // Área em km²
    float PIB; // Produto Interno Bruto
    int pontos_turisticos; // número dos pontos turísticos da cidade
    float densidade_populacional; // divisão da população pela sua área
    float PIB_per_Capita; // divisão do PIB da cidade pela sua população
    float Super_Poder; // Soma de população, área, PIB per capita, densidade 
    //populacional invertida para comparação e número de pontos turísticos. 
    float carta1,carta2;


 
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
    scanf("%lu", &populacao);

    printf("Digite a área da cidade em km²(número decimal):\n");
    scanf("%f", &area);
     
    printf("Digite o PIB(Produto Interno Bruto)(número decimal):\n");
    scanf("%f", &PIB);

    printf("Digite o número de pontos turísticos(número inteiro):\n");
    scanf("%d", &pontos_turisticos);


    //Cálculos
    densidade_populacional = (float) populacao / area;
    PIB_per_Capita = (float) (PIB * 1000000000) / populacao;
    // Cálculo do Super Poder - soma todos os atributos numéricos + inverso da densidade
    Super_Poder = (float) populacao + area + PIB + pontos_turisticos + PIB_per_Capita + 
    (1.0/densidade_populacional);



    printf("\n\n=== Cadastro confirmado - Carta 1!===\n");
    printf("-----------------------------------------\n\n");

    printf("Nome do Estado:%s - Código:%s\n", estado, codigo);
    printf("Nome da cidade:%s\n", cidade);
    printf("Número da população:%lu habitantes\n",populacao);
    printf("Área:%.2f km²\n", area);
    printf("PIB:R$%.2f bilhões\n", PIB);
    printf("Número de pontos turísticos:%d\n", pontos_turisticos);
    printf("Densidade Populacional é:%.2f hab/km²\n", densidade_populacional);
    printf("PIB per Capita é:%.2f reais\n", PIB_per_Capita);
    printf("Super Poder: %.2f\n\n", Super_Poder);

  
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
    scanf("%lu", &populacao);

    printf("Digite a área da cidade em km²(número decimal):\n");
    scanf("%f", &area);
     
    printf("Digite o PIB(Produto Interno Bruto)(número decimal):\n");
    scanf("%f", &PIB);

    printf("Digite o número de pontos turísticos(número inteiro):\n");
    scanf("%d", &pontos_turisticos);
    

    // Cálculos
    densidade_populacional = (float) populacao / area;
    PIB_per_Capita = (float) (PIB * 1000000000) / populacao;
   // Cálculo do Super Poder - soma todos os atributos numéricos + inverso da densidade
    Super_Poder = (float) populacao + area + PIB + pontos_turisticos + PIB_per_Capita + 
    (1.0/densidade_populacional);

    
    printf("\n\n === Cadastro confirmado - Carta 2!===\n");
    printf("-----------------------------------------\n\n");
 

    printf("Nome do Estado:%s - Código:%s\n", estado, codigo);
    printf("Nome da cidade:%s\n", cidade);
    printf("Número da população:%lu habitantes\n",populacao);
    printf("Área:%.2f km²\n", area);
    printf("PIB:R$%.2f bilhões\n", PIB);
    printf("Número de pontos turísticos:%d\n", pontos_turisticos);
    printf("Densidade Populacional é:%.2f hab/km²\n", densidade_populacional);
    printf("PIB per Capita é:%.2f reais\n", PIB_per_Capita);
    printf("Super Poder: %.2f\n\n", Super_Poder);

    return 0;
}
