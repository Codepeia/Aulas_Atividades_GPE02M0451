#include <stdio.h>


int main(void) {
  /*6. Codifique um programa que lê um número inteiro. A seguir o programa deve imprimir uma mensagem para o usuário dizendo se o número digitado é par. Se o número não for par, o programa não deve fazer nada.*/

  int numero;

  printf("Digite o numero");
  scanf("%d", &numero);

    //verificar se o numero e par ou impar
    if(numero % 2 == 0){
        printf("Par");
    }

}