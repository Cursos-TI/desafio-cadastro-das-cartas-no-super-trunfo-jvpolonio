#include <stdio.h>
int main() {
    char Carta1[10] = "Carta01";
    char Estado1[10] = "D";
    char CodigodaCarta1[10] = "D01";
    char NomedaCidade1[20] = "Fortaleza";
    int Populacao1 = 2574412;
    float Area1 = 314.11;
    float PIB1 = 73;
    int NumerodePontosTuristicos1 = 16;

    char Carta2[10] = "Carta02";
    char Estado2[10] = "E";
    char CodigodaCarta2[10] = "E01";
    char NomedaCidade2[20] = "Pernambuco";
    int Populacao2 = 9540000;
    float Area2 = 98.94;
    float PIB2 = 954;
    int NumerodePontosTuristicos2 = 6;

   
    printf("Carta 1\n ");
    printf("Digite o Estado da carta 1: ");
    scanf("%s", Estado1);
    printf("Digite o Codigo da Carta 1: ");
    scanf("%s", CodigodaCarta1);
    printf("Digite o Nome da Cidade 1: ");
    scanf("%s", NomedaCidade1);
    printf("Digite a Populacao da carta 1: ");
    scanf("%d", &Populacao1);
    printf("Digite a Area da carta 1: ");
    scanf("%f", &Area1);
    printf("Digite o PIB da carta 1: ");
    scanf("%f", &PIB1);
    printf("Digite o Numero de Pontos Turisticos da carta 1: ");
    scanf("%d", &NumerodePontosTuristicos1);

    
    printf("Carta 2\n");
    printf("Digite o Estado da carta 2: ");
    scanf("%s", Estado2);
    printf("Digite o Codigo da Carta 2: ");
    scanf("%s", CodigodaCarta2);
    printf("Digite o Nome da Cidade da carta 2: ");
    scanf("%s", NomedaCidade2);
    printf("Digite a Populacao 2: ");
    scanf("%d", &Populacao2);
    printf("Digite a Area da carta 2: ");
    scanf("%f", &Area2);
    printf("Digite o PIB da carta 2: ");
    scanf("%f", &PIB2);
    printf("Digite o Numero de Pontos Turisticos da carta 2: ");
    scanf("%d", &NumerodePontosTuristicos2);

    
    return 0;
}


