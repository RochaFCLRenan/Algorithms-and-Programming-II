#include <stdio.h>

int main(){

   int number;

   printf("\n Type a number: ");
   scanf("%d", &number);

   switch (number)
   {
   case 1:
      printf("\n You typed number one\n");
      break;
   case 2:
      printf("\n You typed number two\n");
   default:
      printf("\n You typed a number different from one or two\n");
      
   }

}