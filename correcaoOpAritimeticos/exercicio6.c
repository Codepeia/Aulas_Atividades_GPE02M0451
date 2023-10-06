#include<stdio.h>
#include<math.h>

main(){
    /*
    Escreva um programa que pergunte qual o raio de um círculo e imprima a sua área.
    */
   double raio, PI = 3.1415, areaCirculo;

   printf("Digite o raio do circulo");
   scanf("%lf",&raio);

  // areaCirculo = PI * (raio * raio);

    areaCirculo = PI * pow(raio,2);

  printf("A area do circulo e: %lf",areaCirculo);

}