#include <stdio.h>


int main(void) {

    //estrutura switch case

    int opcao;

    printf("Digite a opcao da semana");
    scanf("%d", &opcao);

    switch(opcao){

        case 1:
            printf("Domingo");
            break;
        case 2:
            printf("\nSegunda");
            break;
        case 3:
            printf("\nTerca");
            break;
        case 4:
            printf("\nQuarta");
            break;
        case 5:
            printf("\nQuinta");
            break;
        case 6:
            printf("\nSexta");
            break;
        case 7:
            printf("\nSabado");
            break;
        default:
            printf("nenhuma das opcoes acima");
        
    }





}