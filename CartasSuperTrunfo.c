#include <stdio.h>

// Desafio Super Trunfo
// Nível Mestre

int main() {

    //Variáveis da Carta 1
    char estado1 [50]; // Nome do estado
    char codigo1 [5]; // Código da carta. Ex:A01,B01
    char cidade1 [50]; // Nome da cidade
    unsigned long int populacao1; // Número da população da cidade
    float area1; // Área em km²
    float PIB1; // Produto Interno Bruto
    int pontos_turisticos1; // número dos pontos turísticos da cidade
    float densidade_populacional1; // divisão da população pela sua área
    float PIB_per_Capita1; // divisão do PIB da cidade pela sua população
    float Super_Poder1; // Soma de população, área, PIB per capita, densidade 
    //populacional invertida para comparação e número de pontos turísticos. 
    
    // Variáveis para Carta 2
    char estado2[50]; 
    char codigo2[5]; 
    char cidade2[50]; 
    unsigned long int populacao2; 
    float area2; 
    float PIB2; 
    int pontos_turisticos2; 
    float densidade_populacional2; 
    float PIB_per_Capita2; 
    float Super_Poder2; 


    printf("Super Trunfo - Tema: Países\n");
    printf("---------------------------------\n\n");
    
    printf("=== Cadastro das Cartas ====\n\n");

    //Carta 1

    printf("Carta 1:\n");
    printf("----------\n");

    printf("Digite o nome do estado:\n");
    scanf("%s", estado1);

    printf("Digite um código:(exemplo:A01)\n");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade:\n");
    scanf("%s", cidade1);

    printf("Digite o número da população(número inteiro):\n");
    scanf("%lu", &populacao1);

    printf("Digite a área da cidade em km²(número decimal):\n");
    scanf("%f", &area1);
     
    printf("Digite o PIB(Produto Interno Bruto)(número decimal):\n");
    scanf("%f", &PIB1);

    printf("Digite o número de pontos turísticos(número inteiro):\n");
    scanf("%d", &pontos_turisticos1);


    //Cálculos Carta 1
    densidade_populacional1 = (float) populacao1 / area1;
    PIB_per_Capita1 = (float) (PIB1 * 1000000000) / populacao1;
    // Cálculo do Super Poder = soma todos os atributos numéricos + inverso da densidade
    Super_Poder1 = (float) populacao1 + area1 + PIB1 + pontos_turisticos1 + PIB_per_Capita1 + 
    (1.0/densidade_populacional1);



    printf("\n\n=== Cadastro confirmado - Carta 1!===\n");
    printf("-----------------------------------------\n\n");

    printf("Nome do Estado%s - Código:%s\n", estado1, codigo1);
    printf("Nome da cidade:%s\n", cidade1);
    printf("Número da população:%lu habitantes\n",populacao1);
    printf("Área:%.2f km²\n", area1);
    printf("PIB:R$%.2f bilhões\n", PIB1);
    printf("Número de pontos turísticos:%d\n", pontos_turisticos1);
    printf("Densidade Populacional é:%.2f hab/km²\n", densidade_populacional1);
    printf("PIB per Capita é:%.2f reais\n", PIB_per_Capita1);
    printf("Super Poder: %.2f\n\n", Super_Poder1);

  
    //Carta 2
   
    printf("Carta 2:\n");
    printf("----------\n");
    

    printf("Digite o nome do estado:\n");
    scanf("%s", estado2);

    printf("Digite um código:(exemplo:A01)\n");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade:\n");
    scanf("%s", cidade2);

    printf("Digite o número da população(número inteiro):\n");
    scanf("%lu", &populacao2);

    printf("Digite a área da cidade em km²(número decimal):\n");
    scanf("%f", &area2);
     
    printf("Digite o PIB(Produto Interno Bruto)(número decimal):\n");
    scanf("%f", &PIB2);

    printf("Digite o número de pontos turísticos(número inteiro):\n");
    scanf("%d", &pontos_turisticos2);
    

    // Cálculos carta 2
    densidade_populacional2 = (float) populacao2 / area2;
    PIB_per_Capita2 = (float) (PIB2 * 1000000000) / populacao2;
   // Cálculo do Super Poder - soma todos os atributos numéricos + inverso da densidade
    Super_Poder2 = (float) populacao2 + area2 + PIB2 + pontos_turisticos2 + PIB_per_Capita2 + 
    (1.0/densidade_populacional2);

    
    printf("\n\n === Cadastro confirmado - Carta 2!===\n");
    printf("-----------------------------------------\n\n");
 

    printf("Nome do Estado:%s - Código:%s\n", estado2, codigo2);
    printf("Nome da cidade:%s\n", cidade2);
    printf("Número da população:%lu habitantes\n",populacao2);
    printf("Área:%.2f km²\n", area2);
    printf("PIB:R$%.2f bilhões\n", PIB2);
    printf("Número de pontos turísticos:%d\n", pontos_turisticos2);
    printf("Densidade Populacional é:%.2f hab/km²\n", densidade_populacional2);
    printf("PIB per Capita é:%.2f reais\n", PIB_per_Capita2);
    printf("Super Poder: %.2f\n\n", Super_Poder2);


    //  COMPARAÇÃO DE CARTAS

    printf("=== Comparação de Cartas! ===\n");
    printf("----------------------------------\n\n");

    printf("Se o resultado for 1, a carta 1 vence; se for 0, vence a carta 2.\n\n");

    printf("População: %d\n", populacao1 > populacao2);
    printf("Área: %d\n", area1 > area2);
    printf("PIB: %d\n", PIB1 > PIB2);
    printf("Pontos Turísticos: %d\n", pontos_turisticos1 > pontos_turisticos2);
    printf("Densidade Populacional: %d\n", densidade_populacional1 < densidade_populacional2 );
    printf("PIB per Capita: %d\n", PIB_per_Capita1 > PIB_per_Capita2);
    printf("Super Poder: %d\n\n", Super_Poder1 > Super_Poder2);
    
    return 0;
}
