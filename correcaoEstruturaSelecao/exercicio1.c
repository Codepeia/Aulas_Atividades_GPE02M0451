#include <stdio.h>
#include<math.h>

main(){
    /*
    Escreva um algoritmo que leia um número e imprima a raiz quadrada do número caso ele seja positivo ou igual a zero e o quadrado do número caso ele seja negativo.
    */

   double numero, resultado;

   printf("Digite um numero");
   scanf("%lf", &numero);

   if(numero >= 0){
    //se verdadeiro calcular raiz quadrada
        resultado = sqrt(numero);
        printf("Raiz quadrada de %.3lf e %.3lf",numero, resultado );
   }else{
        resultado = pow(numero, 2);
        printf("O quadrado de %.3lf e %.3lf", numero, resultado);
   }

}