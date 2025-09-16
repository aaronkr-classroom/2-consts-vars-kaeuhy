#include <stdio.h>
#include <locale.h>
#include "calc.h"

int main(void)
{
  double principal = 1000000.0;
  double annual_rate = 0.10;
  int compounds_per_year = 12;
  int years = 40;

  double future_value = calculate_future_value(principal, annual_rate, compounds_per_year, years);

  setlocale(LC_NUMERIC, "");

  printf("초기 투자금: %,.0f원\n", principal);
  printf("연평균 수익률: %.0f%%\n", annual_rate * 100);
  printf("투자 기간: %d년\n", years);
  printf("------------------------------------------\n");
  printf("40년 후, 65세가 되었을 때의 예상 투자 총액은...\n\n");
  printf("약 %,.0f원 입니다.\n", future_value);

  return 0;
}