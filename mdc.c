#include <stdio.h>
#include "mdc.h"

int main(void) {
  int num1, num2;
  printf("Num 1: ");
  scanf("%i", &num1);
  printf("Num 2: ");
  scanf("%i", &num2);
  printf("o mdc é: %i", mdc(num1, num2));
  return 0;
}
