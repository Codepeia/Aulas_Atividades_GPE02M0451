#include <stdio.h>


main() {

    float a = 1, b = -1, c = -1, delta ,x1, x2;

    if(a == 0){
        printf("Não e equacao de segundo grau");
    }else{
        //realizar as operacoes
        delta = pow(b, 2) - 4 * a * c;
        float raiz = sqrt(delta);

        if(delta < 0){
            printf("Não existe raiz real");
        }else if(delta == 0 ){
            x1 = (- b + raiz)/(2 * a);
            printf("X1: %f", x1);
        }else{
            x1 = (- b + raiz)/(2 * a);  
            x2 = (- b - raiz)/(2 * a);
            printf("X1: %f X2: %f", x1, x2);
        }

    }



}