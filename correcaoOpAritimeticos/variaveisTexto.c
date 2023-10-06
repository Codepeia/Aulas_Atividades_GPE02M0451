#include<stdio.h>

main(){

    //declaração de variaveis de texto
    //chamadas em c de vetores de caracteres
    char nome[20] = "Ana da Silva !-51";
    char endereco[50];
    char matricula[12];

    printf("\nNome: %s", nome);

    //recebendo os dados com scanf
    printf("\nDigite o endereco");
    scanf("%[^\n]",endereco);
    printf("O endereco e: %s",endereco);
    fflush(stdin);//limpa o buffer do teclado

    //recebendo os dados com fgets
    printf("\nDigite a matricula");
    fgets(matricula,12,stdin);
    printf("\nA matricula e: %s", matricula);







}