#include <stdio.h>

int main () {

// Cadastro de Cartas - Novato


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


    // Calculos - Aventureiro


  // Declarando Variaveis //

#include <stdio.h>

int main() {
    // Declaração das variáveis 
    char Estado1, Estado2;
    char Codigo1[4], Codigo2[4];
    char NomeCidade1[50], nomeCidade2[50];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontosTuristicos1, pontosTuristicos2;
    float densidade1, densidade2;
    float pibPerCapita1, pibPerCapita2;

    // ===== Entrada de dados =====
    printf(" Cadastro da Carta 1");
    printf(" Digite o estado : ");
    scanf(" %c", &Estado1);
    printf(" Digite o código da carta: ");
    scanf("%s", Codigo1);
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", NomeCidade1);
    printf("Digite a população: ");
    scanf("%d", &Populacao1);
    printf("Digite a área (km²): ");
    scanf("%f", &Area1);
    printf("Digite o PIB (em bilhões d reais): ");
    scanf("%f", &Pib1);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &PontosTuristicos1);

    printf(" Cadastro da Carta 2");
    printf("Digite o estado : ");
    scanf(" %c", &Estado2);
    printf("Digite o código da carta: ");
    scanf("%s", Codigo2);
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", NomeCidade2);
    printf("Digite a população: ");
    scanf("%d", &populacao2);
    printf("Digite a área (km²): ");
    scanf("%f", &Area2);
    printf("Digite o PIB (em bilhões d reais): ");
    scanf("%f", &Pib2);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &PontosTuristicos2);

    //  Cálculo

    densidade1 = populacao1 / area1;
    densidade2 = populacao2 / area2;
    pibPerCapita1 = (pib1 * 1000000000) / populacao1;
    
    // PIB em bilhões 
    pibPerCapita2 = (pib2 * 1000000000) / populacao2;

    // Exibição das informações

    printf(" Carta 1 \n");
    printf("Estado: %c\n", Estado1);
    printf("Código: %s\n", Codigo1);
    printf("Nome da Cidade: %s\n", NomeCidade1);
    printf("População: %d\n", PontosTuristicos1);
    printf("Área: %.2f km²\n", Area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", PontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);

    printf(" Carta 2");
    printf("Estado: %c\n", Estado2);
    printf("Código: %s\n", Codigo2);
    printf("Nome da Cidade: %s\n", NomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", PontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);


    return 0;

// BATALHA DAS CARTAS: MESTRE

#include <stdio.h>

int main() {

    //  Declaração 
    char Estado1, Estado2;
    char codigo1[4], codigo2[4];
    char nomeCidade1[50], nomeCidade2[50];
    unsigned long int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontosTuristicos1, pontosTuristicos2;
    float densidade1, densidade2;
    float pibPerCapita1, pibPerCapita2;
    float superPoder1, superPoder2;

    //  Entrada/ INICIO
    printf("Cadastro da Carta 1 ");
    printf("Estado: "); scanf(" %c", &estado1);
    printf("Código: "); scanf("%s", codigo1);
    printf("Nome da Cidade: "); scanf(" %[^\n]", NomeCidade1);
    printf("População: "); scanf("%lu", &populacao1);
    printf("Área (km²): "); scanf("%f", &area1);
    printf("PIB (bilhões): "); scanf("%f", &pib1);
    printf("Pontos Turísticos: "); scanf("%d", &pontosTuristicos1);

    printf("\n=== Cadastro da Carta 2 ===\n");
    printf("Estado: "); scanf(" %c", &estado2);
    printf("Código: "); scanf("%s", codigo2);
    printf("Nome da Cidade: "); scanf(" %[^\n]", nomeCidade2);
    printf("População: "); scanf("%lu", &populacao2);
    printf("Área (km²): "); scanf("%f", &area2);
    printf("PIB (bilhões): "); scanf("%f", &pib2);
    printf("Pontos Turísticos: "); scanf("%d", &pontosTuristicos2);

    // ===== Cálculos =====
    densidade1 = populacao1 / area1;
    densidade2 = populacao2 / area2;

    pibPerCapita1 = (pib1 * 1000000000) / populacao1;
    pibPerCapita2 = (pib2 * 1000000000) / populacao2;

    superPoder1 = populacao1 + area1 + pib1 + pontosTuristicos1 + pibPerCapita1 + (1 / densidade1);
    superPoder2 = populacao2 + area2 + pib2 + pontosTuristicos2 + pibPerCapita2 + (1 / densidade2);

    // Comparações das cartas

    printf("Comparação de Cartas");
    printf("População: Carta 1 venceu (%d)\n", populacao1 > populacao2);
    printf("Área: Carta 1 venceu (%d)\n", area1 > area2);
    printf("PIB: Carta 1 venceu (%d)\n", pib1 > pib2);
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", pontosTuristicos1 > pontosTuristicos2);
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", densidade1 < densidade2);
    printf("PIB per Capita: Carta 1 venceu (%d)\n", pibPerCapita1 > pibPerCapita2);
    printf("Super Poder: Carta 1 venceu (%d)\n", superPoder1 > superPoder2);

    return 0;

}

