#include <stdio.h>

int main(){
    printf("Desafio SuperTrunfo!\n");
    
    printf("NÍVEL NOVATO")

    printf("CARTA 1\n");


    char estado1 = A;
    char codigo1 = A01
    char cidade1[50] = saopaulo;
    int populacao1 = 12325000;
    float area1 = 1521.11;
    float PIB1 = 699.28;
    int pontosturisticos1 = 50;

    printf ("Digite o seu estado 1(letra de A a H): \n");
    scanf("%c", &estado1);

    printf ("Digite o código do estado 1 ( A letra do estado seguida de um número de 01 a 04 (ex: A01, B03) ): \n");
    scanf("%c", &codigo1);
    
    printf("Digite a sua cidade 1: \n");
    scanf("%s", &cidade1);

    printf("Digite a população da cidade 1: \n");
    scanf("%d", &populacao1);

    printf("Digite a area da cidade 1: \n");
    scanf("%f", &area1);

    printf("Digite o PIB da cidade 1: \n");
    scanf("%f", &PIB1);

    printf("Digite quantos pontos turísticos a cidade 1 tem: \n");
    scanf("%d", &pontosturisticos1);

    printf("CARTA 2\n");


    char estado2 = B;
    char codigo[4] = B02
    char cidade2[50] = riodejaneiro;
    int populacao2 = 6748000;
    float area2 = 1200.25;
    float PIB2 = 300.50;
    int pontosturisticos2 = 30;

    printf ("Digite o seu estado 2(letra de A a H): \n");
    scanf("%c", &estado2);

    printf ("Digite o código do estado 2 ( A letra do estado seguida de um número de 01 a 04 (ex: A01, B03) ): \n");
    scanf("%c", &codigo1);
    
    printf("Digite a sua cidade 2: \n");
    scanf("%s", &cidade2);

    printf("Digite a população da cidade 2: \n");
    scanf("%d", &populacao2);

    printf("Digite a area da cidade 2 : \n");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade 2: \n");
    scanf("%f", &PIB2);

    printf("Digite quantos pontos turísticos a cidade 2 tem: \n");
    scanf("%d", &pontosturisticos2);
    

    printf("NÍVEL AVENTUREIRO")

    printf("carta 1:\n")
    
    printf("Calcular a Densidade Populacional 1")
    
    int populacao1 = 12325000
    float area1 = 1521.11

    densidade = ((float)populacao1/area1);

    printf("A densidade é "f%", densidade);
 
    printf("carta 2:\n")
    
    printf("Calcular a Densidade Populacional 2")
    
    int populacao2 = 6748000
    float area2 = 1200.25

    densidade2 = ((float)populacao2/area2);

    printf("A densidade é "f%", densidade2);
    
    return 0;   
} 
