#include <stdio.h>


//Declarar abaixo as variáveis globais(sum).


//declarar função que faz a operacao.
void result(int N){
  float sum=0,result=0;
  for(float x = 1; x <= N; x++){
    sum = (((x*x)+1) / ((x + 3))); 
    result +=sum;
  }
  printf("Resultado é: %0.2f",result);
}



//funcao que lê o número de repeticoes e encaminha para sum();
int main(void) {
  int n;
  printf("Digite um número\n");
  scanf("%d",&n);

  result(n);
}
