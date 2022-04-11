#include <stdio.h>
//Função que recebe o valor do salário de cada participante e soma ao total,no final, o programa calcula a média dos salários e joga para a função main.
float mSalario(int n){
  float soma, media,salario;
  for(int x = 0; x < n; x++){
    printf("Digite o valor do seu salário: \n");
    scanf("%f",&salario);
    soma += salario;
  }
  media = soma / n;
  return media;
}


//Função main, que recebe a entrada do numero de participantes e retorna a média de salários.
int main(void) {
  int n;
  printf("Digite o número de cidadãos participantes da pesquisa: \n");
  scanf("%d",&n);

  printf("A média dos salários é: R$ %.0f,00",mSalario(n));
}
