#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main()
{
  // Área para definição das variáveis para armazenar as propriedades das cidades

  //CARTA 1
  unsigned long int Populacao1;
  int Numero1;
  char Estado1;
  char Nome1[20];
  char Codigo1[4];
  float Area1;
  float PIB1;
  char Carta1[5];
  float Densidade1;
  float Per_capita1;
  float SuperPoder1;

  //CARTA 2
  unsigned long int Populacao2;
  int População2;
  int Numero2;
  char Estado2;
  char Nome2[50];
  char Codigo2[4];
  char Carta2[5];
  float Area2;
  float PIB2;
  float Densidade2;
  float Per_capita2;
  float SuperPoder2;


  // Área para entrada de dados
  // ENTRADA CARTA 1
  printf("Carta: \n");
  scanf("%s", Carta1);

  printf("Estado: \n");
  scanf(" %c", &Estado1);

  printf("Codigo: \n");
  scanf(" %s", Codigo1);

  printf("Nome da cidade: \n");
  scanf(" %s", Nome1);

  printf("População: \n");
  scanf("%lu", &Populacao1);

  printf("Área(em Km²): \n");
  scanf("%f", &Area1);

  printf("PIB: \n");
  scanf("%f", &PIB1);

  printf("Número de Pontos Turísticos: \n");
  scanf("%i", &Numero1);

  Densidade1 = (float)Populacao1 / Area1;

  Per_capita1 = (float)PIB1 / Populacao1;

  //CARTA 2
  printf("Carta: \n");
  scanf("%s", Carta2);

  printf("Estado: \n");
  scanf(" %c", &Estado2);

  printf("Codigo: \n");
  scanf(" %s", Codigo2);

  printf("Nome da cidade: \n");
  scanf(" %s", Nome2);

  printf("População: \n");
  scanf("%lu", &População2);

  printf("Área(em Km²): \n");
  scanf("%f", &Area2);

  printf("PIB: \n");
  scanf("%f", &PIB2);

  printf("Número de Pontos Turísticos: \n");
  scanf("%i", &Numero2);

  Densidade2 = (float)População2 / Area2;

  Per_capita2 = (float)PIB2 / População2;

   //CALCULOS
  Densidade1 = (float)Populacao1 / Area1;
  Per_capita1 = PIB1 / Populacao1;

  Densidade2 = (float)Populacao2 / Area2;
  Per_capita2 = PIB2 / Populacao2;

  // ===== SUPER PODER =====
  SuperPoder1 = Populacao1 + Area1 + PIB1 + Numero1 + Per_capita1 + (1 / Densidade1);
  SuperPoder2 = Populacao2 + Area2 + PIB2 + Numero2 + Per_capita2 + (1 / Densidade2);




  // Área para exibição dos dados da cidade


//CARTA 1
  printf("Carta: %s\n", Carta1);
  
  printf("Estado: %c\n", Estado1);

  printf("Codigo: %s\nNome da cidade: %s\n", Codigo1, Nome1);

  printf("População: %lu\n", Populacao1);

  printf("Área(em Km²): %.2f\n", Area1);

  printf("PIB: %.2f\n", PIB1);

  printf("Numero de Ponto Turístico: %i\n", Numero1);

  printf("Densidade Populacional: %.2f\n", Densidade1);

  printf("PIB per Capita: %.2f\n", Per_capita1);

  printf("Super Poder: %.2f\n", SuperPoder1);

  

  //CARTA 2

  printf("Carta: %s\n", Carta2);
  
  printf("Estado: %c\n", Estado2);

  printf("Codigo: %s\nNome da cidade: %s\n", Codigo2, Nome2);

  printf("População: %lu\n", População2);

  printf("Área(em Km²): %.2f\n", Area2);

  printf("PIB: %.2f\n", PIB2);

  printf("Numero de Ponto Turístico: %i\n", Numero2);

  printf("Densidade Populacional: %.2f\n", Densidade2);

  printf("PIB per Capita: %.2f\n", Per_capita2);

  printf("Super Poder: %.2f\n", SuperPoder2);


//COMPARACAO
  printf("\n=Comparacao de Cartas=\n");

  printf("Populacao: Carta 1 venceu (%d)\n", Populacao1 > Populacao2);
  printf("Area: Carta 1 venceu (%d)\n", Area1 > Area2);
  printf("PIB: Carta 1 venceu (%d)\n", PIB1 > PIB2);
  printf("Pontos Turisticos: Carta 1 venceu (%d)\n", Numero1 > Numero2);

  
  


  return 0;
}
