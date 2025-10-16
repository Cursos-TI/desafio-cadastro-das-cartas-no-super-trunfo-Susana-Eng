#include<stdio.h>
int main(){
    char estado1 [1];
    char cod1 [2];
    char ncidade1 [35];
    int populacao1;
    float area1;
    float pib1;
    int npturistico1;
    float densidadepopulacional1;
    float pibpercapita1;
    /*declarando variavel carta 1*/
    char estado2 [1];
    char cod2 [2];
    char ncidade2 [35];
    int populacao2;
    float area2;
    float pib2;
    int npturistico2;
    float densidadepopulacional2;
    float pibpercapita2;
    /*declarando variavel carta 2*/
    float dpopu1;
    float percap1;
    float dpopu2;
    float percap2;
    float spoder1;
    float spoder2;
    /*declarando variaveis de calculo*/
    int resulpopu;
    int resularea;
    int resulpib;
    int resulnp;
    int resuldpopu;
    int resulpercap;
    int resulspoder;
    int opcao;

    /*Declarando variaveis para comparaçao*/
    printf("Dados da carta 1\n");
    printf("Digite a letra do estado:\n");
    scanf("%s",&estado1);
    printf("Digite o codigo da carta de 01 a 04:\n");
    scanf("%d",&cod1);
    printf("Digite o nome da cidade:\n");
    scanf("%s",&ncidade1);
    printf("Digite a quantidade de habitantes:\n");
    scanf("%d",&populacao1);
    printf("Digite a area em km²:\n");
    scanf("%f",&area1);
    printf("Digite o PIB:\n");
    scanf("%f",&pib1);
    printf("Digite o numero de pontos turisticos:\n");
    scanf("%d",&npturistico1);
    
    densidadepopulacional1 = populacao1 / area1;
    printf("%f \n",densidadepopulacional1);
/*coletando dados da carta 1 digitadas no terminal*/
    
    printf("Dados da carta 2\n");
    printf("Digite a letra do estado:\n");
    scanf("%s",&estado2);
    printf("Digite o codigo da carta de 01 a 04:\n");
    scanf("%d",&cod2);
    printf("Digite o nome da cidade:\n");
    scanf("%s",&ncidade2);
    printf("Digite a quantidade de habitantes:\n");
    scanf("%d",&populacao2);
    printf("Digite a area em km²:\n");
    scanf("%f",&area2);
    printf("Digite o PIB:\n");
    scanf("%f",&pib2);
    printf("Digite o numero de pontos turisticos:\n");
    scanf("%d",&npturistico2);
  
    densidadepopulacional2 = populacao2 / area2;
    printf("%f \n",densidadepopulacional2);
  /*coletando dados da carta 2 digitadas no terminal*/

  dpopu1 =populacao1 / area1;
  dpopu2 = populacao2 / area2;
  pibpercapita1 = pib1 / populacao1;
  pibpercapita2 = pib2 / populacao2;
  /*Calculando com operador matematico de divisao*/
  spoder1 = (float) populacao1 + area1 + pib1 + npturistico1 + pibpercapita1 + densidadepopulacional1;
  
  spoder2 = (float) populacao2 + area2 + pib2 + npturistico2 + pibpercapita2 + densidadepopulacional2;
/*Calculando com operador matematico de adiçao*/
    resularea = area1 > area2;
    resulpopu = populacao1 > populacao2;
    resulpib = pib1 > pib2;
    resulpercap = pibpercapita1 > pibpercapita2;
    resulnp = npturistico1 > npturistico2;
    resuldpopu = dpopu1 > dpopu2;
    resulspoder = spoder1 > spoder2;
    /*Fazendo a comparação das cartas*/
    if (pib1 > pib2) {
        printf("Carta 1 %f, venceu \n", pib1 );
    } else {
        printf ( "Carta 2 %f, venceu \n", pib2 );
    }
    /*Comparando o pib para ver qual carta é maior*/
    printf (" Escolha uma opção:\n");
    printf (" 1. população\n");
    printf (" 2. area\n");
    printf (" 3. pib\n");
    printf (" 4. numeros de pontos turisticos\n");
    printf (" 5. densidade populacional\n");
    printf (" 6. pib percap\n");
    printf (" 7. super poder\n");
    scanf("%d", & opcao);
    switch (opcao) {
        case 1 :
        if (populacao1 > populacao2) {
            printf("Carta 1 %f, venceu \n",populacao1);
        } else {
            printf(" Carta 2 %f, venceu \n", populacao2);
        }
        break;
        case 2 :
        if (area1 > area2) {
            printf("Carta 1 %f, venceu \n",area1);
        } else {
            printf(" Carta 2 %f, venceu \n", area2);
        }
        case 3 :
        if (pib1 > pib2) {
            printf("Carta 1 %f, venceu \n",pib1);
        } else {
            printf(" Carta 2 %f, venceu \n", pib2);
        }
        case 4 :
        if (npturistico1 > npturistico2) {
            printf("Carta 1 %f, venceu \n",npturistico1);
        } else {
            printf(" Carta 2 %f, venceu \n", npturistico2);
        }
        case 5 :
        if (densidadepopulacional1 > densidadepopulacional2) {
            printf("Carta 1 %f, venceu \n",densidadepopulacional1);
        } else {
            printf(" Carta 2 %f, venceu \n", densidadepopulacional2);
        }
        case 6 :
        if (percap1 > percap2) {
            printf("Carta 1 %f, venceu \n",percap1);
        } else {
            printf(" Carta 2 %f, venceu \n", percap2);
        }
        case 7 :
        if (spoder1 > spoder2) {
            printf("Carta 1 %f, venceu \n",spoder1);
        } else {
            printf(" Carta 2 %f, venceu \n", spoder2);
        }
    
        break;
    }
    

    printf("Carta 1\n");
    printf("Estado:%s\n", estado1);
    printf("Codigo:%s\n", cod1);
    printf("Nome da Cidade:%s\n",ncidade1);
    printf("Populacao:%d\n",populacao1);
    printf("Area em km²:%f\n",area1);
    printf("PIB:%f\n", pib1);
    printf("Numeros de Pontos Turisticos:%d\n",npturistico1);
    printf("O Super Poder é:%.2f\n",spoder1);
    /*imprimindo dados da carta 1*/

    printf("Carta 2\n");
    printf("Estado:%s\n", estado2);
    printf("Codigo:%s\n", cod2);
    printf("Nome da Cidade:%s\n",ncidade2);
    printf("Populacao:%d\n",populacao2);
    printf("Area em km²:%f\n",area2);
    printf("PIB:%f\n", pib2);
    printf("Numeros de Pontos Turisticos:%d\n",npturistico2);
    printf(" O Super Poder é:%.2f\n",spoder2);
    /*imprimindo dados da carta 2*/

    printf("Comparacao de cartas \n");
    printf("Populacao: %d \n" , resulpopu);
    printf("Area: %d \n" , resularea);
    printf ("Pib: %d \n",resulpib);
    printf("Pontos Turisticos: %d \n", resulnp);
    printf("Densidade Populacional: %d \n", resulpopu);
    printf("Pib Per Capita: %d \n", resulpercap);
    printf("Super Poder: %d \n", resulspoder);
    /*imprimindo a comparaçao da carta 1 com a carta 2*/


    return 0;
    


}
