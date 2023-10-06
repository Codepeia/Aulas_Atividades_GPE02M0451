#include<stdio.h>

main(){

    float valorFinal = 0, valorLanche;
    int opcaoLanche, qtd, opcao;


    do{

        printf("Cardapio: 100 - Cachorro quente 10,10\n 101 - Bauru Simples 8,30 \n 102 - Bauru com Ovo 8,50 \n 103 - Hamburguer 12,50 \n 104 - Cheeseburguer 13,25" );
        scanf("%d",&opcaoLanche);
        printf("\nDigite a quantidade de itens");
        scanf("%d", &qtd);


        switch(opcaoLanche){
            case 100:
                valorLanche = 10.10;
                valorFinal += valorLanche * qtd;
                break;
            case 101:
                valorLanche = 8.30;
                valorFinal += valorLanche * qtd;
                break;
            case 102:
                valorLanche = 8.50;
                valorFinal += valorLanche * qtd;
                break;
            case 103:
                valorLanche = 12.50;
                valorFinal += valorLanche * qtd;
                break;
            case 104:
                valorLanche = 13.25;
                valorFinal += valorLanche * qtd;
            break;
            default:
                printf("Lanche nao encontrado");
        }

        printf("\n Deseja adicionar um novo item? 1 - Sim / 0 - Nao ");
        
        scanf("%d", &opcao);

    }while(opcao != 0);

    printf("\nValor final do pedido: %.2f",valorFinal);











}
