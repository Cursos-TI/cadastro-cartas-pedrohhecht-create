#include <stdio.h>

int main(){
    printf("Desafio SuperTrunfo!\n");
    
    printf("CARTA 1\n");


    char estado1;
    char cidade1[50];
    int populacao1;
    float area1;
    float PIB1;
    int pontosturisticos1;

    printf ("Digite o seu estado 1(letra de A a H): \n");
    scanf("%c", &estado1);
    
    printf("Digite a sua cidade 1: \n");
    scanf("%s", cidade1);

    printf("Digite a população da cidade 1: \n");
    scanf("%d", &populacao1);

    printf("Digite a area da cidade 1: \n");
    scanf("%f", &area1);

    printf("Digite o PIB da cidade 1: \n");
    scanf("%f", &PIB1);

    printf("Digite quantos pontos turísticos a cidade 1 tem: \n");
    scanf("%d", &pontosturisticos1);

    printf("CARTA 2\n");


    char estado2;
    char cidade2[50];
    int populacao2;
    float area2;
    float PIB2;
    int pontosturisticos2;

    printf ("Digite o seu estado 2(letra de A a H): \n");
    scanf("%c", &estado2);
    
    printf("Digite a sua cidade 2: \n");
    scanf("%s", cidade2);

    printf("Digite a população da cidade 2: \n");
    scanf("%d", &populacao2);

    printf("Digite a area da cidade 2 : \n");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade 2: \n");
    scanf("%f", &PIB2);

    printf("Digite quantos pontos turísticos a cidade 2 tem: \n");
    scanf("%d", &pontosturisticos2);

    return 0;   
} 
