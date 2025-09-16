// calc_main.c
#include <stdio.h>
#include "calc.h"

int main(void)
{
  int a = 4, b = 5;

  printf("Sum result : %d", Sum(a, b)); // 9
  printf("Sub result : %d", Sub(a, b)); // -1
  printf("Mul result : %d", Mul(a, b)); // 20
  printf("Div result : %d", Div(a, b)); // ???

  printf("r Half Circle Area is %.3f\n", circ_area(a));
  printf("r Half Circle Circumference is %.3f\n", circ_circ(a));

  return 0;
}