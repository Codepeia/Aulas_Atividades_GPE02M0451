#include<stdio.h>

main(){
    /*
    Uma revendedora de carros usados paga a seus funcionários vendedores um salário fixo por mês, mais uma comissão também fixa para cada carro vendido e mais 5% do valor das vendas por ele efetuadas. Escrever um algoritmo que leia o número de carros por ele vendidos, o valor total de suas vendas, o salário fixo e o valor que ele recebe por carro vendido. Calcule e escreva o salário final do vendedor.
    */
   float totalVendas,salarioFixo, valorPorCarro, salarioFinal, porcentagemVendas = 0.05;
   int numCarros;

   printf("Digite o numero de carros vendidos");
   scanf("%d",&numCarros);
   printf("\nDigite o total das vendas");
   scanf("%f",&totalVendas);
    printf("\nDigite o salario fixo");
   scanf("%f",&salarioFixo);
   printf("\nDigite o a comissao fixa por carro");
   scanf("%f",&valorPorCarro);

   salarioFinal = salarioFixo +(numCarros * valorPorCarro) + (totalVendas * porcentagemVendas);

   printf("Salario final: %.2f", salarioFinal);

}