#include <stdio.h>

int main(){
   int inicialVector[8];
   int positiveVector[8] = {0};
   int negativeVector[8] = {0};
   int i;
   int VECTOR_LENGHT = 8;
   int posVecIndex = 0;
   int negVecIndex = 0;

   for ( i = 0; i < VECTOR_LENGHT; i++) {

      printf("Digite o valor da posição %d \n", i+1);
      scanf("%d%*c", &inicialVector[i]);

   }
   for (i = 0; i < VECTOR_LENGHT; i++) {
      if (inicialVector[i] >= 0) {

         positiveVector[posVecIndex] = inicialVector[i];
         posVecIndex++;

      }
      else {

         negativeVector[negVecIndex] = inicialVector[i];
         negVecIndex++;
         
      }
   }
   printf("Vetor inicial: ");
   for (i = 0; i < VECTOR_LENGHT; i++) {

      printf("%d", inicialVector[i]);
      printf(" ");

   }
   printf("\n");
   printf("vetor negativo: ");
   for (i = 0; i < VECTOR_LENGHT; i++) {

      printf("%d", negativeVector[i]);
      printf(" ");

   }
   printf("\n");
   printf("vetor positivo: ");
   for (i = 0; i < VECTOR_LENGHT; i++) {

      printf("%d", positiveVector[i]);
      printf(" ");

   }
}