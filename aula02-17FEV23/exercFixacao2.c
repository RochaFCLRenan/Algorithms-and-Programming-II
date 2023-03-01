#include <stdio.h>

int main(){
   int checkPrimeNumber;
   int flag = 1;

   scanf("%d", &checkPrimeNumber);

   for (int i = 2; i < checkPrimeNumber; i++)
   {
      if (checkPrimeNumber % i == 0)
      {
         flag = 0;
      }      
   }   
   if (flag == 1)   
      printf("É primo.");    
   else 
      printf ("Não é primo");   
}