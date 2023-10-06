#include<stdio.h>

main(){

    float media = 5;

    if(media >= 7){
        printf("Aprovado");
    }else if(media < 4){
        printf("Reprovado");
    }else if (media >= 4 && media < 7){
        printf("Recuperacao");
    }


}