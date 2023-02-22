#include <stdio.h>

int main() {

   char ch;
   int i;
   char s[5];
   double df;
   int h;

   printf("Digite um caractere: ");
   scanf("%c", &ch);
   printf("Digite um inteiro negativo: ");
   scanf("%d", &i);
   printf("Digite uma string: ");
   scanf("%s", s);
   printf("Digite um número real: ");
   scanf("%lf", &df);
   printf("Digite um inteiro positivo: ");
   scanf("%d", &h);

   printf("-------------------------------\n\n");

   printf("Caractere: %c\n", ch);
   printf("Inteiro sem sinal: %u\n", i);
   printf("String: %s\n", s);
   printf("double: %lf\n", df);
   printf("Em notação científica: %e\n", df);
   printf("Inteiro: %d\n", h);
   printf("Em hexadecimal: %x\n", h);
}
   