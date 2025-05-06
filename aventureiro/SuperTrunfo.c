#include <stdio.h>

int main()
{
    // Declaração variaveis carta 1

    char estado1;
    char codigo1[3];
    char nomeCidade1[50];
    int populacao1;
    float area1;
    float pib1; 
    int pontosTuristicos1;
    float densidadePopulacional1;
    float pibPerCapita1;

    // Declaração variáveis carta

    char estado2;
    char codigo2[3];
    char nomeCidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidadePopulacional2;
    float pibPerCapita2;

    //Leitura dos dados da carta 1

    printf ("-------- Bem-Vindo ao Super Trunfo -------\n\n");
    printf ("# Carta 1\n\n");
    printf ("Estado: ");
    scanf ( " %c", &estado1);
    printf ("Código: ");
    scanf ( "%s", codigo1);
    printf ("Nome da cidade: ");
    scanf ( " %[^\n]", nomeCidade1);
    printf ("População: ");
    scanf ( " %d", &populacao1);
    printf ("Área: ");
    scanf ( " %f", &area1);
    printf ("PIB: ");
    scanf ( " %f", &pib1);
    printf ("Pontos Turisticos: ");
    scanf ( " %d", &pontosTuristicos1);
  
    
   
    //calculo 1
    
    densidadePopulacional1 = populacao1 / area1;
    pibPerCapita1 = pib1 / populacao1;

 


    //Leitura dos dados da carta 2

    printf ("\n # Carta 2\n\n");
    printf ("Estado: ");
    scanf ( " %c", &estado2);
    printf ( "Código: ");
    scanf ( " %s", codigo2);
    printf ("Nome da cidade: ");
    scanf ( " %[^\n]", nomeCidade2);
    printf ("População: ");
    scanf ( " %d", &populacao2);
    printf ("Área: ");
    scanf ( "%f", &area2);
    printf ("PIB: ");
    scanf ( "%f", &pib2);
    printf ("Pontos Turisticos: ");
    scanf ( "%d", &pontosTuristicos2);

   // calculo 2

   densidadePopulacional2 = populacao2 / area2;
   pibPerCapita2 = pib2 / populacao2;
   

   // Exibição carta 1

   printf ("\n\n=== Carta 1 ===\n\n");
   printf ("Estado: %c\n", estado1);
   printf ("Código: %s\n", codigo1);
   printf ("Nome da Cidade: %s\n", nomeCidade1);
   printf ("População: %d\n", populacao1);
   printf ("Área: %.2f km²\n", area1);
   printf ("PIB: %.2f Bilhões de reais\n", pib1);
   printf ("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
   printf ("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional1);
   printf ("PIB Per Capita: %.2f Reais", pibPerCapita1);

   // Exibição Carta 2

   printf ("\n\n=== Carta 2 ===\n\n");
   printf ("Estado: %c\n", estado2);
   printf ("Código: %s\n", codigo2);
   printf ("Nome da Cidade: %s\n", nomeCidade2);
   printf ("População: %d\n", populacao2);
   printf ("Área: %.2f km²\n", area2);
   printf ("PIB: %.2f Bilhões de reais\n", pib2);
   printf ("Números de Pontos Turísticos: %d\n", pontosTuristicos2);
   printf ("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional2);
   printf ("PIB Per Capita: %.2f Reais\n\n\n", pibPerCapita2);

   return 0;

}


