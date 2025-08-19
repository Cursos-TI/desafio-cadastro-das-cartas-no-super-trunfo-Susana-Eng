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
    /*coletando dados da carta 1 digitadas no terminal*/
    densidadepopulacional1 = populacao1 / area1;
    printf("%f \n",densidadepopulacional1);

    
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
    /*coletando dados da carta 2 digitadas no terminal*/
    densidadepopulacional2 = populacao2 / area2;
    printf("%f \n",densidadepopulacional2);


    printf("Carta 1\n");
    printf("Estado:%s\n", estado1);
    printf("Codigo:%s\n", cod1);
    printf("Nome da Cidade:%s\n",ncidade1);
    printf("Populacao:%d\n",populacao1);
    printf("Area em km²:%f\n",area1);
    printf("PIB:%f\n", pib1);
    printf("Numeros de Pontos Turisticos:%d\n",npturistico1);
    /*imprimindo dados da carta 1*/

    printf("Carta 2\n");
    printf("Estado:%s\n", estado2);
    printf("Codigo:%s\n", cod2);
    printf("Nome da Cidade:%s\n",ncidade2);
    printf("Populacao:%d\n",populacao2);
    printf("Area em km²:%f\n",area2);
    printf("PIB:%f\n", pib2);
    printf("Numeros de Pontos Turisticos:%d\n",npturistico2);
    /*imprimindo dados da carta 2*/
    return 0;
    


}
