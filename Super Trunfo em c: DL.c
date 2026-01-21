#include <stdio.h>

// Desafio Super Trunfo - Países

 int main(){

   printf("Desafio Super Trunfo - Estados\n");
   
  // Área para definição das variáveis para armazenar as propriedades das cidades

  //Carta 1

char Estado[30] = "Pernambuco";
char Cidade[20] = "Recife";
char Código[10] = "PE1";
float Populacao =  9.562007;
int pontos_turísticos_1 = 40; 
float Área_em_Km² = 98.312;
float PIB = 254.9;
float Densidade_populacional = Populacao / Área_em_Km²;
float PIB_per_capita = PIB / Populacao;
float SuperPoder_1 = Populacao + Área_em_Km² + PIB + PIB_per_capita + Densidade_populacional + pontos_turísticos_1;

//Carta 2
 
char Estado_2[11] = "Bahia";
char Cidade_2[30] = "Salvador";
char Código_2[10] = "AD2";
float População_2 = 14.870907;
int pontos_turísticos_2 = 50; 
float Área_em_Km²_2 = 567.295;
float PIB_2 = 402.6;
float Densidade_populacional_2 = População_2 / Área_em_Km²_2;
float PIB_per_capita_2 = PIB_2 / População_2;
float SuperPoder_2 = População_2 + Área_em_Km²_2 + PIB_2 + PIB_per_capita_2 + Densidade_populacional_2 + pontos_turísticos_2;
int resultado1, resultado2;
int comparacao, comparacao2; 

// Área para exibição dos dados da cidade

// Carta 1

printf("\nEstado 1: %s\n", Estado);
printf("Cidade: %s\n", Cidade);
printf("Código: %s\n", Código);
printf("População: %f\n", Populacao);
printf("Pontos turísticos: %d\n", pontos_turísticos_1);
printf("Área em Km²: %.3f\n", Área_em_Km²);
printf("PIB (bilhões): %.1f\n", PIB);
printf("Densidade Populacional: %.2f\n", Densidade_populacional);
printf("PIB per capita: %.2f\n", PIB_per_capita);
printf("Super Poder da Carta 1: %.2f\n", SuperPoder_1);
printf("\n");

// Carta 2

printf("\nEstado 2: %s\n", Estado_2);
printf("Cidade: %s\n", Cidade_2);
printf("Código: %s\n", Código_2);
printf("População: %f\n", População_2);
printf("Pontos turísticos: %d\n", pontos_turísticos_2);
printf("Área em Km²: %.3f\n", Área_em_Km²_2);
printf("PIB (bilhões): %.1f\n", PIB_2);
printf("Densidade Populacional: %.2f\n", Densidade_populacional_2);
printf("PIB per capita: %.2f\n", PIB_per_capita_2);
printf("Super Poder da Carta 2: %.2f\n", SuperPoder_2);
printf("\n");

// Menu de comparação entre cartas
    printf("Bem-vindo ao jogo Super Trunfo - Estados!\n");
    printf("Escolha o primeiro atributo para comparar as cartas:\n");
    printf("1 - População\n");
    printf("2 - Área em Km²\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Populacional\n");
    printf("6 - PIB per capita\n");
    printf("7 - Super Poder\n");

    printf("Digite o número do atributo escolhido: ");
    scanf("%d", &comparacao);

    switch (comparacao) {
    case 1:
    printf("Você escolheu comparar População.\n");
        resultado1 = (Populacao > População_2) ? 1 : 0;
        break;
    case 2:
        printf("Você escolheu comparar Área em Km².\n");
        resultado1 = (Área_em_Km² > Área_em_Km²_2) ? 1 : 0;
        break;
    case 3:
        printf("Você escolheu comparar PIB.\n");
        resultado1 = (PIB > PIB_2) ? 1 : 0;
        break;
    case 4:
        printf("Você escolheu comparar Pontos Turísticos.\n");
        resultado1 = (pontos_turísticos_1 > pontos_turísticos_2) ? 1 : 0;
        break;
    case 5:
        printf("Você escolheu comparar Densidade Populacional.\n");
        resultado1 = (Densidade_populacional < Densidade_populacional_2) ? 1 : 0;
        break;
    case 6:
        printf("Você escolheu comparar PIB per capita.\n");
        resultado1 = (PIB_per_capita > PIB_per_capita_2) ? 1 : 0;
        break;
    case 7:
        printf("Você escolheu comparar Super Poder.\n");
        resultado1 = (SuperPoder_1 > SuperPoder_2) ? 1 : 0;
        break;
    default:
        printf("Opção inválida!\n");                        
        break;
    }
  
    printf("Escolha o segundo atributo para comparar as cartas:\n");
    printf("Atenção: Você deve escolher um atributo diferente do primeiro!\n");
    printf("1 - População\n");
    printf("2 - Área em Km²\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Populacional\n");
    printf("6 - PIB per capita\n");
    printf("7 - Super Poder\n");
     
    printf("Digite o número do atributo escolhido: ");
    scanf("%d", &comparacao2);

    if (comparacao2 == comparacao) {
        printf("Você escolheu o mesmo atributo do primeiro. Por favor, escolha um atributo diferente.\n");
    } else {
        switch (comparacao2) {
        case 1:
            printf("Você escolheu comparar População.\n");
            resultado2 = (Populacao > População_2) ? 1 : 0;
            break;
        case 2:
            printf("Você escolheu comparar Área em Km².\n");
            resultado2 = (Área_em_Km² > Área_em_Km²_2) ? 1 : 0;
            break;
        case 3:
            printf("Você escolheu comparar PIB.\n");
            resultado2 = (PIB > PIB_2) ? 1 : 0;
            break;
        case 4:
            printf("Você escolheu comparar Pontos Turísticos.\n");
            resultado2 = (pontos_turísticos_1 > pontos_turísticos_2) ? 1 : 0;
            break;
        case 5:
            printf("Você escolheu comparar Densidade Populacional.\n");
            resultado2 = (Densidade_populacional < Densidade_populacional_2) ? 1 : 0;
            break;
        case 6:
            printf("Você escolheu comparar PIB per capita.\n");
            resultado2 = (PIB_per_capita > PIB_per_capita_2) ? 1 : 0;
            break;
        case 7:
            printf("Você escolheu comparar Super Poder.\n");
            resultado2 = (SuperPoder_1 > SuperPoder_2) ? 1 : 0;
            break;
        default:
            printf("Opção inválida!\n");                        
            break;
        }
    }


    if (resultado1 && resultado2)
    {
        printf("Parabéns! A Carta 1 venceu em ambas as comparações!\n");
  
    } else if (resultado1 != resultado2) {
        printf("Cada carta venceu em uma comparação. Empate!\n");
    } else {
        printf("A Carta 2 venceu em ambas as comparações! Melhor sorte na próxima vez!\n");
    }



   
return 0;
}