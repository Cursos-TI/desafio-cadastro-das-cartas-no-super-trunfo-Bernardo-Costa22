#include<stdio.h>
struct carta{
    char estado;
    char carta [4];
    char cidade [50];
    int populacao;
    float area;
    float PIB;
};

int main(){
    struct carta carta1;
    struct carta carta2;
    printf("\n=== Cadastro da Carta 1 ===\n");
printf("estado (A-H): \n");
scanf("%c", &carta1.estado);

printf("carta (ex: A01):\n");
scanf("%3s", &carta1.carta);

printf("cidade:\n");
scanf("%s", &carta1.cidade);

printf("População:\n");
scanf("%d", &carta1.populacao);

printf("Área em km²:\n");
scanf("%f", &carta1.area);

printf("PIB:\n");
scanf("%f",&carta1.PIB);

printf("estado:%c\ncarta:%s\ncidade:%s\n", carta1.estado, carta1.carta, carta1.cidade);
printf("população:%d\nÁrea: %.2f km²\nPIB:%2f bilhões de reais\n", carta1.populacao, carta1.area, carta1.PIB);

//Leitura da carta2
printf("\n=== Cadastro da Carta 2 ===\n");
printf("Estado (A-H):\n ");
    scanf(" %c", &carta2.estado);

    printf("Código da Carta (ex: B02):\n ");
    scanf(" %3s", carta2.carta);

    printf("cidade:\n ");
    scanf("%s", carta2.cidade);

    printf("População:\n ");
    scanf("%d", &carta2.populacao);

    printf("Área em km²:\n ");
    scanf("%f", &carta2.area);

    printf("PIB (em bilhões de reais):\n ");
    scanf("%f", &carta2.PIB);

    printf("estado:%c\ncarta:%s\ncidade:%s\n", carta2.estado, carta2.carta, carta2.cidade);
    printf("população:%d\nÁrea:%.2f km²\nPIB: %2f bilhões de reais\n", carta2.populacao, carta2.area, carta2.PIB);
    
    return 0;
}