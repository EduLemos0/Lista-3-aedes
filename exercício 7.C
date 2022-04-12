#include <stdio.h>

//filtra se o número é positivo(true) ou negativo(false)
void filter(int n){
  if(n >= 0){
    printf("True.\n\n");
  }else{
    printf("False.\n\n");
  }
}




// digita quantos números quiser e os coloca em ordem
int main(void) {
  int n,i=1;
  do{
    printf("%d° número: \n",i);
    scanf("%d",&n);
    filter(n);
    
   i++;   
  }while(n != 777);
}
