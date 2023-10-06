#include<stdio.h>
#include<math.h>

main(){
    /*operadores aritmeticos
        soma (+)
        subtração (-)
        divisao (/)
        multiplicacao (*)
        modulo (%)
        potencia (pow(n,p))
    */

   //declaracao das variaveis
   int num1, num2, soma, sub, mult, mod, pot;
   float div;

   printf("Digite o primeiro numero");
   scanf("%d",&num1);

   printf("Digite o segundo numero");
   scanf("%d", &num2);

    //montar as operacoes 
    soma = num1 + num2;
    sub = num1 - num2;
    mult = num1 * num2;
    pot = pow(num1,num2);
    mod = num1 % num2;
    div = (float)num1 / (float)num2;
    
    //saida dos dados
    printf("Soma: %d",soma);
    printf("\nSubtracao: %d",sub);
    printf("\nDivisao: %f",div);
    printf("\nMult: %d",mult);
    printf("\nPotencia: %d",pot);
    printf("\nModulo ou resto divisao: %d",mod);
}