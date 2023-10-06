#include<stdio.h>

main(){
    /*
    Faça um programa em que o usuário digite o custo de uma determinada mercadoria, em seguida, adiciona-se ao custo o valor do frete e despesas eventuais (também solicitadas pelo teclado). Para concluir, o programa pergunta qual o valor de venda e indica a percentagem de lucro da mercadoria.
    */

   float custo, frete, despesas,lucro,custoTotal, valorVenda,porcentagemLucro;

   printf("Digite o custo do produto");
   scanf("%f",&custo);
   printf("\nDigite o frete do produto");
   scanf("%f",&frete);
   printf("\nDigite as despesas do produto");
   scanf("%f",&despesas);

   custoTotal = custo + frete + despesas;

   printf("\nO produto custa %.2f. Qual o valor de venda? ",custoTotal);
   scanf("%f",&valorVenda);

   lucro = valorVenda - custoTotal;

   porcentagemLucro = (lucro / custoTotal) * 100;

   //porcentagemVenda = ((valorVenda - custoTotal)/custoTotal )* 100;

   printf("A porcentagem de lucro e: %.2f%%", porcentagemLucro);


}