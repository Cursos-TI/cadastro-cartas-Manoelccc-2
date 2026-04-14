#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main()
{
  // Área para definição das variáveis para armazenar as propriedades das cidades
  int População;
  int Numero;
  char Estado;
  char Nome[20];
  char Codigo[04];
  float Área;
  float PIB;
  char Carta[5];
  float Densidade ;
  float Per_capita;


  // Área para entrada de dados
  printf("Carta: \n");
  scanf("%s", Carta);

  printf("Estado: \n");
  scanf("%s", &Estado);

  printf("Codigo: \n");
  scanf("%s", Codigo);

  printf("Nome da cidade: \n");
  scanf("%s", Nome);

  printf("População: \n");
  scanf("%d", &População);

  printf("Área(em Km²): \n");
  scanf("%f", &Área);

  printf("PIB: \n");
  scanf("%e", &PIB);

  printf("Número de Pontos Turísticos: \n");
  scanf("%i", &Numero);

  Densidade = (float)(População / Área );

  Per_capita = (float)(PIB / População );

  

  // Área para exibição dos dados da cidade

  printf("Carta: %s\n", Carta);
  
  printf("Estado: %c\n", Estado);

  printf("Codigo: %s\nNome da cidade: %s\n", Codigo, Nome);

  printf("População: %d\n", População);

  printf("Área(em Km²): %.2f\n", Área);

  printf("PIB: %.2f\n", PIB);

  printf("Numero de Ponto Turístico: %i\n", Numero);

  printf("Densidade Populacional: %d\n", Densidade);

  printf("PIB per Capita: %d\n", Per_capita);

  
  

  return 0;
}
