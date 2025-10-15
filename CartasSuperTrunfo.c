#include <stdio.h>
#include <string.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  char estado1, estado2;
  char codigo1[4], codigo2[4];
  char cidade1[50], cidade2[50];
  int populacao1, populacao2;
  float area1, area2;
  float pib1, pib2;
  int pt_turistico1, pt_turistico2;
  float dens_pop1, dens_pop2, pib_capta1, pib_capta2;
  int comparacao1, comparacao2, comparacao3, comparacao4, comparacao5, comparacao6, comparacao7;
  double superpoder1, superpoder2;
  

  // Área para entrada de dados
  printf("Carta 1: ");
  printf("Digite uma letra(de A a H, cada uma representando um dos oito estados): ");
  scanf(" %c", &estado1);
  printf("Digite o codigo da carta(A letra do estado seguida de um numero de 01 a 04 (ex: A01, B03).):");
  scanf("%3s", codigo1);
  while(getchar() != '\n'); // Clear the newline character from the input buffer
  printf("Digite o nome da cidade: ");
  fgets(cidade1, sizeof(cidade1), stdin);
  cidade1[strcspn(cidade1, "\n")] = 0; // Remove newline character if present
  printf("Digite a populacao da cidade mencionada: ");
  scanf("%d", &populacao1);
  printf("Digite a area(em km2): ");
  scanf("%f", &area1);
  printf("Digite o PIB do estado: ");
  scanf("%f", &pib1);
  printf("Digite a quantidaed de pontos turisticos: ");
  scanf("%d", &pt_turistico1);

  printf("Carta 2: ");
  printf("Digite uma letra(de A a H, cada uma representando um dos oito estados): ");
  scanf(" %c", &estado2);
  printf("Digite o codigo da carta(A letra do estado seguida de um numero de 01 a 04 (ex: A01, B03).):");
  scanf("%3s", codigo2);
  while(getchar() != '\n'); // Clear the newline character from the input buffer
  printf("Digite o nome da cidade: ");
  fgets(cidade2, sizeof(cidade2), stdin);
  cidade2[strcspn(cidade2, "\n")] = '\0'; // Remove newline character if present
  printf("Digite a populacao da cidade mencionada: ");
  scanf("%d", &populacao2);
  printf("Digite a area(em km2): ");
  scanf("%f", &area2);
  printf("Digite o PIB do estado: ");
  scanf("%f", &pib2);
  printf("Digite a quantidaed de pontos turisticos: ");
  scanf("%d", &pt_turistico2); 

  // Area para atribuição de variáveis após a entrada de dados
  
  dens_pop1 = populacao1 / area1;
  dens_pop2 = populacao2 / area2;
  pib_capta1 = pib1 / populacao1;
  pib_capta2 = pib2 / populacao2;
  superpoder1 = populacao1 + area1 + pib1 + dens_pop1 + pib_capta1;
  superpoder2 = populacao2 + area2 + pib2 + dens_pop2 + pib_capta2;

  // Area para as comparações

  if(populacao1 > populacao2){
    comparacao1 = 1;
  } else {
    comparacao1 = 0;
  };
  if(area1 > area2){
    comparacao2 = 1;
  } else {
    comparacao2 = 0;
  };
  if(pib1 > pib2){
    comparacao3 = 1;
  } else {
    comparacao3 = 0;
  };
  if(pt_turistico1 > pt_turistico2){
    comparacao4 = 1;
  } else {
    comparacao4 = 0;
  };
  if(dens_pop1 > dens_pop2){
    comparacao5 = 1;
  } else {
    comparacao5 = 0;
  };
  if(pib_capta1 > pib_capta2){
    comparacao6 = 1;
  } else {
    comparacao6 = 0;
  };
  if(superpoder1 > superpoder2){
    comparacao7 = 1;
  } else {
    comparacao7 = 0;
  };

  
  // Área para exibição dos dados da cidade

  printf("\n Carta 1: ");
  printf("\n Estado: %c", estado1);
  printf("\n Codigo: %s", codigo1);
  printf("\n Nome da Cidade: %s", cidade1);
  printf("\n Populacao: %d", populacao1);
  printf("\n Area: %.2f km²", area1);
  printf("\n PIB: %.2f bilhoes de reais", pib1);
  printf("\n Numero de Pontos Turisticos: %d", pt_turistico1);
  printf("\n Densidade Populacional: %.2f hab/km²", dens_pop1);
  printf("\n PIB per capta: %.2f reais.", pib_capta1);

  printf("\n------------------------------");

  printf("\n Carta 2: ");
  printf("\n Estado: %c", estado2);
  printf("\n Codigo: %s", codigo2);
  printf("\n Nome da Cidade: %s", cidade2);
  printf("\n Populacao: %d", populacao2);
  printf("\n Area: %.2f km²", area2);
  printf("\n PIB: %.2f bilhoes de reais", pib2);
  printf("\n Numero de Pontos Turisticos: %d", pt_turistico2);
  printf("\n Densidade Populacional: %.2f hab/km²", dens_pop2);
  printf("\n PIB per capta: %.2f reais", pib_capta2);


// Area para xibir os resultados das batalhas

printf("\n-----------------------------------------");
printf("\nComparacao de cartas: ");

if(comparacao1 == 1){
  printf("\nPopulacao: Carta 1 venceu! (%d)", comparacao1);
} else {
  printf("\nPopulacao: Carta 2 venceu! (%d)", comparacao1);
};

if(comparacao2 == 1){
  printf("\nArea: Carta 1 venceu! (%d)", comparacao2);
} else {
  printf("\nArea: Carta 2 venceu! (%d)", comparacao2);
};

if(comparacao3 == 1){
  printf("\nPIB: Carta 1 venceu! (%d)", comparacao3);
} else {
  printf("\nPIB: Carta 2 venceu! (%d)", comparacao3);
};

if(comparacao4 == 1){
  printf("\nPontos Turisticos: Carta 1 venceu! (%d)", comparacao4);
} else {
  printf("\nPontos Turisticos: Carta 2 venceu! (%d)", comparacao4);
};

if(comparacao5 == 1){
  printf("\nDensidade Populacional: Carta 1 venceu! (%d)", comparacao5);
} else {
  printf("\nDensidade Populacional: Carta 2 venceu! (%d)", comparacao5);
};

if(comparacao6 == 1){
  printf("\nPIB Per Capta: Carta 1 venceu! (%d)", comparacao6);
} else {
  printf("\nPIB Per Capta: Carta 2 venceu! (%d)", comparacao6);
};

if(comparacao7 == 1){
  printf("\nSuper Poder: Carta 1 venceu! (%d)", comparacao7);
} else {
  printf("\nSuper Poder: Carta 2 venceu! (%d)", comparacao7);
};

return 0;
};