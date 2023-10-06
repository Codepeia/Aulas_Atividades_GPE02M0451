#include<stdio.h>

main(){
    /*operadores relacionais
        == igual
        != diferente
        > maior que
        < menor que 
        >= maior ou igual
        <= menor ou igual
    */

   int x = 10, y = 10, resultado;

   //condição = se x for maior que y entao sera realizada a soma dos valores e apresentada soma. Senao apresentar uma mensagem informando que não podera ser realizada a soma 

   if(x == y){
        //executar este trecho
        int soma;
        soma = x + y;
        printf("Soma: %d",soma);
   }else{
        printf("A expressao é falsa por isso isto esta sendo impresso");
   }

   printf("\ncontinua a execução do algoritmo");

}

