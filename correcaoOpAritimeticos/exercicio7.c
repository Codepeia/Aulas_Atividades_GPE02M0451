#include<stdio.h>
main(){
    /*
        Faça um algoritmo que leia a idade de uma pessoa expressa em anos, meses e dias e escreva a idade dessa pessoa expressa apenas em dias. Considerar ano com 365 dias e mês com 30 dias.
    */

   int anos, meses, dias,totalDias;

   printf("Digite sua idade em anos");
   scanf("%d", &anos);
   printf("Digite sua idade em meses");
   scanf("%d", &meses);
   printf("Digite sua idade em dias");
   scanf("%d", &dias);

   totalDias = anos * 365 + meses * 30 + dias;

    printf("Total de dias vividos: %d", totalDias);


}