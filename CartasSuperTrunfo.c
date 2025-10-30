#include <stdio.h>

int main () {


  // Declarando Variaveis //

  // Carta 1
  char Estado1;
  char Codigo1[4];
  char NomeCidade1[50];
  int Populacao1;
  float Area1;
  float Pib1;
  int PontosTuristicos1;

  // Carta 2 //
   char Estado2;
   char Codigo2[4];
   char NomeCidade2[50];
   int populacao2;
   float Area2;
   float Pib2;
   int PontosTuristicos2;


   // Dados da Carta 1 //

    printf(" Cadastro da Carta 1 =\n");
    printf("Digite o Estado: ");
    scanf("%c", &Estado1);

    Printf("Digite o código da Carta:  ");
    scanf("%s", Codigo1);

    printf("Digite o nome da Cidade:  ");
    scanf("%[^\n]", NomeCidade1);

    printf(" Digite o nome da Cidade:  ");
    scanf("%d", &Populacao1);

    printf(" Digite a Área ( km²):  ");
    scanf("%f", &Area1);

    printf(" Digite o PIB (em bilhões d reais):  ");
    scanf("%f", &Pib1);

    printf("Digite o número de pontos Turísticos:  ");
    scanf("%d", &PontosTuristicos1);

    // Dados da Carta 2 //

    printf(" Cadastro da Carta 2: \n");
    printf("Digite o estado : ");
    scanf(" %c", &Estado2);

    printf("Digite o código da carta : ");
    scanf("%s", Codigo2);

    printf(" Digite o nome da Cidade: ");
    scanf(" %[^\n]", NomeCidade2);

    printf(" Digite a população: ");
    scanf("%d", &populacao2);

    printf(" Digite a Área ( km²): ");
    scanf("%f", &Area2);

    printf(" Digite o PIB (em bilhões D reais): ");
    scanf("%f", &Pib2);

    printf(" Digite o número de pontos Turísticos: ");
    scanf("%d", &PontosTuristicos2);

// Exibir os dados //

    printf(" Carta 1 ");
    printf( "Estado: %c\n", Estado1);
    printf( "Código: %s\n", Codigo1);
    printf( "Nome da Cidade: %s\n", NomeCidade1);
    printf( "População: %d\n", Populacao1);
    printf( "Área: %.2f km²\n", Area1);
    printf( "PIB: %.2f bilhões d reais\n", Pib1);
    printf( "Número de Pontos Turísticos: %d\n", PontosTuristicos1);

    printf(" Carta 2 ");
    printf( "Estado: %c\n", Estado2);
    printf( "Código: %s\n", Codigo2);
    printf( "Nome da Cidade: %s\n", NomeCidade2);
    printf( "População: %d\n", populacao2);
    printf( "Área: %.2f km²\n", Area2);
    printf( "PIB: %.2f bilhões de reais\n", Pib2);
    printf( "Número de Pontos Turísticos: %d\n", PontosTuristicos2);

    return 0;


}

