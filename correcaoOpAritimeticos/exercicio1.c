#include<stdio.h>

main(){
    /*
    Escreva um programa que receba dois números e mostre a soma, a subtração, a multiplicação e a divisão desses números.
    */
   int num1, num2,soma, div, mult, sub;

   printf("Digite o primeiro numero");
   scanf("%d",&num1);
   printf("Digite o segundo numero");
   scanf("%d",&num2);

   //montar as operacoes

   soma = num1 + num2;
   sub = num2 - num1;
   div = num2 / num1;
   mult = num1 * num2;

   printf("Soma: %d", soma);
   printf("\nSubtracao: %d", sub);
   printf("\nDIvisao: %d", div);
   printf("\nMultiplicacao: %d", mult);

}