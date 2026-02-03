#include <stdio.h>

int main(){
    printf("Desafio SuperTrunfo!\n");
    
    printf("CARTA 1\n");


    char estado;
    char cidade[50];
    int populacao;
    float area;
    float PIB;
    int pontosturisticos;

    printf ("Digite o seu estado(letra de A a H): \n");
    scanf("%c", &estado);
    
    printf("Digite a sua cidade: \n");
    scanf("%s", cidade);

    printf("Digite a população da cidade: \n");
    scanf("%d", &populacao);

    printf("Digite a area da cidade: \n");
    scanf("%f", &area);

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &PIB);

    printf("Digite quantos pontos turísticos a cidade tem: \n");
    scanf("%d", &pontosturisticos);

    return 0;   
} 
