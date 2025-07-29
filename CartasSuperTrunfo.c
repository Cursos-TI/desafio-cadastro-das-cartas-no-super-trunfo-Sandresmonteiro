   #include <stdio.h>

 int main (){
   //carta 1
   char estado1;
   char codigocarta1[4];
   char nomecidade1[50];
   int populaçao1;
   float areakm1;
   float pib1;
   int pontosturisticos1;
   
   //carta2

   char estado2;
   char codigocarta2[4];
   char nomecidade2[50];
   int populaçao2;
   float areakm2;
   float pib2;
   int pontosturisticos2;

   // leitura da carta 1!

   printf("carta1\n");

   printf("Digite o estado1 (EX:A-Z):\n");
   scanf(" %c", &estado1);

   printf ("Digite o codigocarta1 (EX:A01-B04):\n");
   scanf("%s", &codigocarta1);

   printf("Digite o nomecidade1: \n");
   scanf("%s", &nomecidade1);

   printf("Digite o numero da populaçao1:\n");
   scanf("%d", &populaçao1);

   printf("Digite a areakm1: \n");
   scanf("%f", &areakm1);

   printf("Digite o pib1: \n");
   scanf("%f", &pib1);

   printf("Digite o pontosturisticos1 \n");
   scanf("%d", &pontosturisticos1);

   //Leitura da carta 2!

   printf("carta2\n");

   printf("Digite o estado2 (EX:A-Z): \n");
   scanf(" %c", &estado2);

   printf("Digite o codigocarta2 (EX:A01-B04): \n");
   scanf("%s", &codigocarta2);

   printf("Digite o nomecidade2: \n");
   scanf("%s", &nomecidade2);

   printf("Digite a populaçao2: \n");
   scanf("%d", &populaçao2);

   printf("Digite a areakm2: \n");
   scanf(" %f", &areakm2);

   printf("Digite o pib2: \n");
   scanf("%f", &pib2);

   printf("Digite o pontosturistico2: \n");
   scanf("%d", &pontosturisticos2);

   //lendo saidas das cartas!

   printf("\n==carta1==\n");
   
   printf("estado1 %c \n", estado1);
   printf("codigocarta1: %s \n", codigocarta1);
   printf("nomecidade1: %s \n", nomecidade1);
   printf("populaçao1: %d \n", populaçao1);
   printf("areakm1: %f \n", areakm1);
   printf("pib1 bilhoes de reais: %f \n ", pib1);
   printf("pontosturisticos1 %d \n" , pontosturisticos1);

   printf("\n==carta2==\n");
   printf("estado2: %c \n", estado2);
   printf("codigocarta2 %s \n", codigocarta2);
   printf("nomecidade2: %s \n", nomecidade2);
   printf("populaçao2: %d \n", populaçao2);
   printf("areakm2: %f \n", areakm2);
   printf("pib2 bilhoes de reais: %f \n", pib2);
   printf("pontosturisticos2: %d \n", pontosturisticos2);

   return 0;

 }