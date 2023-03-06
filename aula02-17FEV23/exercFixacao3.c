#include <stdio.h>

int main(){
   printf("Digite o valor da tabuada a ser calculado: \n");

   int i = 1;
   for ( i ; i <= 10; i++)
   {
      printf("Tabuada do %d\n", i);
      int j = 0;
      for (j; j <= 10; j++)
      {
         
         int resultado = 0;
         resultado = i * j;
         printf("%d X %d = %d\n", i, j, resultado);
      }
      
   }
   
}