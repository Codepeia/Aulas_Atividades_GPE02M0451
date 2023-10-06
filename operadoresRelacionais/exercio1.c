#include<stdio.h>

main(){
    //Leia a idade e imprima se a pessoa é maior;
    //Leia o salário e imprima se ganha mais que o salário mínimo;
    //Leia a altura e imprima se é maior que 1.8m;
    //Leia o peso e imprima se é menor que 60kg;

    double peso;

    printf("Digite o peso");
    scanf("%lf",&peso);

    if(peso < 60.0){
        printf("Menor que 60");
    }else{
        printf("Maio que 60");
    }
}    