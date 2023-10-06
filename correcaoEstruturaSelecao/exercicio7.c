#include <stdio.h>


int main(void) {
  /*6. Faça um algoritmo que calcule a media ponderada das notas de 3 provas. A primeira e a segunda prova tem peso 1 e a terceira tem peso 2. Ao final, mostrar a média do aluno e indicar se o aluno foi aprovado ou reprovado. A nota para aprovação deve ser igual ou&nbsp; superior a 7.0 pontos.*/

  float nota1 = 7, nota2 = 0 , nota3 = 10, mediaP;

  mediaP = (nota1 + nota2 + nota3 * 2)/4;

  if(mediaP >= 7){
    printf("Nota: %.2f. Aprovado", mediaP);
  }else{
     printf("Nota: %.2f. Reprovado", mediaP);
  }
}











