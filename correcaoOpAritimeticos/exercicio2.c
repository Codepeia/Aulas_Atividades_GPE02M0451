#include<stdio.h>

main(){
    /*
    Escreva um programa que receba um número qualquer e mostre o seu dobro.
    */
   int numero, dobro;

   printf("Digite um numero");
   scanf("%d",&numero);

    dobro = numero * 2;
    //dobro = numero + numero;

    printf("O dobro e: %d", dobro);



}