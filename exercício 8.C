#include <stdio.h>


//Declarar abaixo as variáveis globais(sum).
float sum=0;

//declarar função que faz a operacao.
void result(int N){
  for(float x = 1; x <= N; x++){
    sum +=sum;
    sum = (((x*x)+1) / ((x + 3))); 
  }
  printf("Resultado é: %0.2f",sum);
}



//funcao que lê o número de repeticoes e encaminha para sum();
int main(void) {
  int n;
  printf("Digite um número\n");
  scanf("%d",&n);

  result(n);
  return 0;
}
