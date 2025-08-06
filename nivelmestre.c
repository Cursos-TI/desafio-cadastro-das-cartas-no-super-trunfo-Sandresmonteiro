#include <stdio.h>

int main() {
     //Carta 1

char estado1;
char codigoCarta1 [4];
char nomeCidade1[50];
unsigned long int populacao1;
float areakm1;
float pib1;
int numeroPontosTuristicos1;
float densidadePopulacional1;
float piberCapital1;
 float superPoder1;
 int resultado1;

//carta 2

char estado2;
char codigoCarta2[4];
char nomeCidade2[50];
unsigned long int populacao2;
float areakm2;
float pib2;
int numeroPontosTuristicos2;
float densidadePopulacional2;
float piberCapital2;
 float superPoder2;
 int resultado2;

 //  leitura da Carta 1 

 printf(" === Lendo Cartas 1: ==== \n");

 printf("Digite o estado: Ex A-Z\n");
 scanf(" %c", &estado1);

 printf("Digite o codigo postal: \n ");
 scanf(" %s", codigoCarta1);

 printf("Digite o Nome da Cidade:\n");
 scanf(" %s", nomeCidade1);

 printf ("Digite a Populção:\n");
 scanf(" %lu", &populacao1);

 printf(" Digite a Arekm²: \n");
 scanf (" %f", &areakm1);

 printf (" Digite o Pib: \n");
 scanf(" %f", &pib1);

 printf("Digite o Pontos Turisticos: \n");
 scanf(" %d", &numeroPontosTuristicos1);


 // Leitura da Carta  2

printf(" === Lendo Cartas 2: ==== \n");

 printf("Digite o estado: Ex A-Z\n");
 scanf(" %c", &estado2);

 printf("Digite o codigo postal: \n ");
 scanf(" %s", codigoCarta2);

 printf("Digite o Nome da Cidade:\n");
 scanf(" %s", nomeCidade2);

 printf ("Digite a Populção:\n");
 scanf(" %lu", &populacao2);

 printf(" Digite a Arekm²: \n");
 scanf (" %f", &areakm2);

 printf (" Digite o Pib: \n");
 scanf(" %f", &pib2);

 printf("Digite o Pontos Turisticos: \n");
 scanf(" %d", &numeroPontosTuristicos2);

 
 
 //calculando a Densidade Populacional e os Pibers!

 densidadePopulacional1 =(float) populacao1/areakm1;
 piberCapital1 = (float) pib1/ populacao1;
 densidadePopulacional2 = (float) populacao2/areakm2;
 piberCapital2 = (float) pib2/ populacao2;

// somando o superPoder 1 e 2

superPoder1 = (float) populacao1 + areakm1 +pib1 + numeroPontosTuristicos1 + (1.f/ densidadePopulacional1);

superPoder2 = (float) populacao2 + areakm2 +pib2 +numeroPontosTuristicos2 + (1.f/densidadePopulacional2);

// imprimindao resultados
 printf(" === Resultados ==== \n \n ");

 printf("Resultado Da Densidade Populacional 1: %f\n", densidadePopulacional1);
 printf ("Resultado PiberCapital1: %f \n", piberCapital1);
 printf ("Resultado Da Densidade populacional 2: %f\n", densidadePopulacional2);
 printf ("Resultado PiberCApital2: %f\n", piberCapital2);

// Comparando Cartas
printf("\n \n \n");

printf(" === Comparações de Cartas === \n");

printf(" Popualação 1 > População 2: %d \n", populacao1 > populacao2);

printf(" Arekm² 1 > Arekm² 2: %d\n", areakm1 > areakm2);

printf("Pib1 > Pib2?: %d\n", pib1 > pib2);

printf ("Pontos turisticos 1 > Pontos turisticos 2: %d\n", numeroPontosTuristicos1 > numeroPontosTuristicos2);

printf(" Desindade Populacional 1 < Densiadade Populacional 2: %d\n", densidadePopulacional1 < densidadePopulacional2);

printf("Piber Capita 1 > Piber Capital 2: %d\n", piberCapital1 > piberCapital2);

printf("Super poder 1 > Super poder 2: %d \n", superPoder1 > superPoder2);
  
printf("\n \n \n");
 // resultados das comparaçôes! Qual Carta vence Quem 1 ou 2?
 printf(" === Qual Carta vence ====\n");
 printf("População: Carta 1 venceu? %d \n", populacao1 > populacao2);
 printf(" Área: Carta 1 venceu??: %d \n", areakm1 > areakm2);
 printf(" PIB: Carta 1 venceu?: %d \n ", pib1 > pib2);
 printf(" Pontos Turisticos: Carta 1 venceu?: %d \n", numeroPontosTuristicos1 < numeroPontosTuristicos2);
 printf ("Densidade: Carta 1 (venceu?? %d \n", densidadePopulacional1 < densidadePopulacional2);
 printf(" Pib Per Capital: carta 1 Venceu?: %d\n", piberCapital1 > piberCapital2);
 printf ("SuperPoder: Carta 1 venceu?: %d\n", superPoder1 > superPoder2);

 return 0;

}