#include <stdio.h>

int main(){
   
   int NUMBER_OF_TEAMS = 1;
   int i;
   int PLAYERS_IN_A_TEAM = 3;
   int TOTAL_OF_PLAYERS_IN_CHAMPIONSHIP = NUMBER_OF_TEAMS * PLAYERS_IN_A_TEAM;
   int AMOUNT_OF_PLYERS_UNDER_18YEARS = 0;

   for (i = 1; i <= NUMBER_OF_TEAMS; i++)
   {
      double SUM_OF_AGES_IN_A_TEAM = 0;
      for (int j = 1; j <= PLAYERS_IN_A_TEAM; j++)
      {
         printf("Digite a idade, o peso e a altura do jogador %d do time %d\n", j, i);
         int age;
         float weight;
         double height;
         scanf("%d %f %lf", &age, &weight, &height);
         printf("idade: %d, peso: %lf, altura:%lf\n", age, weight, height);
         
         if (age < 18)
         {
            AMOUNT_OF_PLYERS_UNDER_18YEARS++;
         }
         SUM_OF_AGES_IN_A_TEAM = SUM_OF_AGES_IN_A_TEAM + age;
      }
      printf("Quantidade de menosres de 18 anos: %d", AMOUNT_OF_PLYERS_UNDER_18YEARS);
      double AVERAGE_AGE_OF_TEAM = SUM_OF_AGES_IN_A_TEAM / PLAYERS_IN_A_TEAM;
      printf("Idade média do time: %lf", AVERAGE_AGE_OF_TEAM);

   }
   
}