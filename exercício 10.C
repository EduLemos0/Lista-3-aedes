#include <stdio.h>

//função que analisa a categoria do nadador
void category(int N){
  int age;
  printf("digite a idade do nadador:\n");
  scanf("%d",&age);

  if((age >= 5) && (age <=7)){
    printf("categoria F.\n\n");
  }else if((age > 7) && (age <= 10)){
    printf("categoria E.\n\n");
  }else if((age > 10) && (age <=13)){
    printf("categoria D.\n\n");
  }else if((age > 13) && (age <= 15)){
    printf("categoria C.\n\n");
  }else if((age > 15) && (age <= 17)){
    printf("categoria B.\n\n");
  }else if (age >= 18){
    printf("categoria A.\n\n");
  }
}


//tem um for para que o código se repita até o número de nadadores dado.
int main(void) {
  int n;
  printf("digite o número de nadadores participantes:\n");
  scanf("%d",&n);

  for(int i = 1; i <= n;i++){
    printf("calculando a categoria do nadador n°%d\n",i);
    category(n);
  }
}
