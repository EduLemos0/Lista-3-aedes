#include <stdio.h>
//declarar variavel global soma.
float sum = 0;

//verifica se determinado aluno passou ou não.
void filter(int *i){
float score;
  printf("Digite a nota do aluno:\n");
  scanf("%f",&score);

  if (score >= 6){
    printf("aluno aprovado.\n");
  }else{
    printf("aluno reprovado.\n");
  } 
  sum += score;
}

//função que calcula a média das notas.
float average(int *i){
  float avg = 0,num = *i;

  avg = sum / num;
  return avg;
}


int main(void) {
  int students;
  printf("digite o número de alunos desejados:\n");
  scanf("%d",&students);
  for(int i = 1; i <= students;i++){
  printf("\ncalculando a nota do aluno %d...\n",i);
  filter(&i);
  printf("A média entre os %d alunos é de %0.1f\n\n",i,average(&i));
 }
}
