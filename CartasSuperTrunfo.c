#include <stdio.h>

int main() {

    printf("Desafio SuperTrunfo!\n");
    printf("NÍVEL NOVATO\n");

    
    printf("\nCARTA 1\n");
    char estado1 = 'A';
    char codigo1[4] = "A01";
    char cidade1[50] = "Sao Paulo";
    int populacao1 = 12325000;
    float area1 = 1521.11;
    float PIB1 = 699.28;
    int pontos1 = 50;

    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhoes\n", PIB1);
    printf("Pontos Turisticos: %d\n", pontos1);

    
    printf("\nCARTA 2\n");
    char estado2 = 'B';
    char codigo2[4] = "B02";
    char cidade2[50] = "Rio de Janeiro";
    int populacao2 = 6748000;
    float area2 = 1200.25;
    float PIB2 = 300.50;
    int pontos2 = 30;

    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhoes\n", PIB2);
    printf("Pontos Turisticos: %d\n", pontos2);
    
  
    float densidade1 = populacao1 / area1;
    float densidade2 = populacao2 / area2;

    printf("Densidade Carta 1: %.2f hab/km²\n", densidade1);
    printf("Densidade Carta 2: %.2f hab/km²\n", densidade2);
 
    float pibpercapita1 = (PIB1 * 1000000000.0f  / populacao1);
    float pibpercapita2 = (PIB2 * 1000000000.0f / populacao2);

    printf("PIB per Capita 1: %.2f reais\n", pibpercapita1);
    printf("PIB per Capita 2: %.2f reais\n", pibpercapita2);

    printf("\nNÍVEL MESTRE\n"); 

    float inverso1 = 1 / densidade1;
    float inverso2 = 1 / densidade2;

    printf("O inverso da densidade 1 é %.8f\n", inverso1);
    printf("O inverso da densidade 2 é %.8f\n", inverso2);
     
    // Comparações entre atributos

    int resultadopop = populacao1 > populacao2;
    printf("A carta 1 venceu: %d\n", resultadopop); 

    float resultadoarea = area1 > area2; 
    printf("A carta 1 venceu: %.0f\n", resultadoarea); 

    float resultadopib = PIB1 > PIB2;
    printf("A carta 1 venceu: %.0f\n", resultadoarea); 

    int resultadopontos = pontos1 > pontos2;
    printf("A carta 1 venceu: %.d\n", resultadopontos);   

    float resultadodens = densidade1 > densidade2;
    printf("A carta 1 venceu: %.0f\n", resultadodens);  
    
    float resultadopibpercapita = pibpercapita1 > pibpercapita2;
    printf("A carta 1 venceu: %.0f\n", resultadopibpercapita);

    float resultadoinverso = inverso1 > inverso2;
    printf("A carta 2 venceu: %.0f\n", resultadoinverso);




    return 0;
}