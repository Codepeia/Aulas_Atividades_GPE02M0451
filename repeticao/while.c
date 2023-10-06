#include<stdio.h>

main(){

    //escrever os numeros de 1 a 10;
    int n = 20, numero = 6, res;

    /*while(n <= 10){
        printf("\nValor da variavel: %d", n);
        n++;
    }*/

    while(n <= 10){
        res = numero * n;
        printf(" \n%d * %d = %d ", numero, n, res);
        n++;
    }
    printf("Continua....");

}