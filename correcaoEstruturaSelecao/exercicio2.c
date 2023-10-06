#include <stdio.h>
#include<math.h>

main(){
    /*
        Construa um algoritmo que, dado quatro valores, A, B, C e D, o algoritmo imprima o maior e o menor valor;
    */

   int A = 15, B = 12, C = 8, D = 7, maior, menor;

    if (A > B && A > C && A > D){
        printf("A e maior");
        //verificar que é o menor

        if(B < C && B < D){
            printf("B e menor");
        }else if(C < B && C < D){
            printf("C e menor");
        }else{
            printf("D e menor");
        }
    }else if(B > A && B > C && B > D){
        printf("B e maior");

        if(A < C && A < D){
            printf("A e menor");
        }else if(C < A && C < D){
            printf("C e menor");
        }else{
            printf("D e menor");
        }

    }else if(C > A && C > B && C > D){
        printf("C e maior");
        if(A < B && A < D){
            printf(" A e menor");
        }else if(B < A && B < D){
            printf(" B e menor");
        }else{
            printf(" D e menor");
        }
    }else{
         printf("D e maior");
        if(A < B && A < C){
            printf("A  e menor");
        }else if(B < A && B < C){
            printf(" B e menor");
        }else{
            printf(" C e menor");
        }

    }

   /*verificando o maior de todos
   if(A > B && A > C && A > D){
        maior  = A;
   }else if(B > A && B > C && B > D){
        maior = B;
   }else if(C > A && C > B && C > D){
        maior = C;
   }else{
        maior = D;
   }

   //verificar o menor de todos

   if(A < B && A < C && A < D){
        menor = A;
   }else if(B < A && B < C && B < D){
        menor = B;
   }else if(C < A && C < B && C < D){
        menor = C;
   }else{
        menor = D;
   }
    printf("Maior: %d. Menor: %d", maior, menor);
 */
}

