#include<stdio.h>

main(){
    //operadores relacionais ou de comparacao

    int numero;

    printf("Digite um numero");
    scanf("%d",&numero);

    //verifique se o numero é maior ou igual a 5
    //caso seja verdadeiro apresentar a mensagem
    // o numero é maior ou igual
    //caso seja falso
    //o numero é menor

    if(numero >= 5){
        //verdadeiro
        printf("o numero é maior ou igual");

    }else{
        printf("o numero nao e maior ou igual");
    }

    printf("\ncontinua a execucao...");

}