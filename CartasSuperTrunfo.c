#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  int População; 
  int Numero;
  char Estado;
  char Nome[20];
  char Codigo[04];
  float Area;
  float PIB;

  
  // Área para entrada de dados
  printf("Estado: \n");
  scanf("%c", &Estado);

  printf("Codigo: \n");
  scanf("%s", Codigo);

  printf("Nome da cidade: \n");
  scanf("%s", Nome);

  printf("População: \n");
  scanf("%d", &População);

  printf("Área: \n");
  scanf("%f", &Area);

  printf("PIB: \n");
  scanf("%e", &PIB);

  printf("Número de Pontos Turísticos: \n");
  scanf("%i", &Numero);

  // Área para exibição dos dados da cidade
   printf("Estado: %c\n", Estado);

    printf("Codigo: %s\nNome da cidade: %s\n", Codigo, Nome);

    printf("População: %d\n", População);

    printf("Area: %f\n", Area);

    printf("PIB: %e\n", PIB);

    printf("Numero de Ponto Turístico: %i\n", Numero);

return 0;
} 
