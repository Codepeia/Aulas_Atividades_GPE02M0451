#include<stdio.h>
main(){
    /*
    Escreva um algoritmo para ler o salário mensal atual de um funcionário e o percentual de reajuste. Calcular e escrever o valor do novo salário.
    */

   float salario, reajuste, novoSalario;

    printf("Digite o salario atual");
    scanf("%f", &salario);

    printf("Digite o percntual de aumento");
    scanf("%f", &reajuste);

    novoSalario = salario +((reajuste/100) * salario);

    printf("O novo salario e: %.2f", novoSalario);

}