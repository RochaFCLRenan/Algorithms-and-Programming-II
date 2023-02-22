#include <stdio.h>

int main(){
   
   float number1, number2;

   printf("\nType two numbers: ");
   scanf("%f", &number1);
   scanf("%f", &number2);

   if (number1 > number2)
   {
      printf("The bigest number is %f \n", number1);
   }
   else 
      if (number2 > number1)
      {
         printf("The bigest number is %f \n", number2);
      }
      else
      {
         printf("\n Numbers are equal. \n");
      }
}