#include <stdio.h>
#include<math.h>

main(){
    /*
    Dados três valores A, B e C, construa um algoritmo, que imprima os valores de forma descendente (do maior para o menor).
    */

   int A, B, C;

   printf("Digite os valores de A, B e C");
   scanf("%d %d %d", &A, &B, &C);

   if(A > B && A > C){
        printf("%d ", A);
        if(B > C){
            printf("%d %d ", B, C);
        }else if (C > B){
            printf("%d %d ", C, B);
        }

   }else if(B > A && B > C){
        printf("%d ", B);

        if(A > C){
            printf("%d %d ", A, C);
        }else if (C > A){
            printf("%d %d ", C, A);
        }
   }else if(C > A && C > B){
        printf("%d ", C);

        if(A > B){
            printf("%d %d ", A, B);
        }else if (B > A){
            printf("%d %d ", B, A);
        }

   }



}