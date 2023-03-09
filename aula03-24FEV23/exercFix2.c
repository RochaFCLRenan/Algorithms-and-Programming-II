/*Faça um programa que preencha dois vetores A e B com
dez elementos numéricos cada um calcule e apresente um
vetor C resultante da intercalação deles.*/

#include <stdio.h>

int main(){
   int i;
   int vectorA[10];
   int vectorAIndex = 0;
   int vectorB[10];
   int vectorBIndex = 0;
   int intercalatedVector[20];

   for ( i = 0; i < 10; i++)
   {
      printf("Digite o valor %d do vetor A: \n", i);
      scanf("%d%*c", &vectorA[i]);
   }
      for ( i = 0; i < 10; i++){

      printf("Digite o valor %d do vetor B: \n", i);
      scanf("%d%*c", &vectorB[i]);

   }
   
   for ( i = 0; i < 20; i++) {
      if ((i == 0) || ( i % 2 == 0)){
         intercalatedVector[i] = vectorA[vectorAIndex];
         vectorAIndex++;
      }
      else{
         intercalatedVector[i] = vectorB[vectorBIndex];
         vectorBIndex++;
      }      
   }

   for ( i = 0; i < 20; i++) {
      
      printf("%d ", intercalatedVector[i]);

   } 
}