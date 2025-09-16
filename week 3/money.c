// money.c
#include <stdio.h>

int main(void)
{
  int won;
  won = 10000000;
  printf("My Bank %d.\n", won);

  // 쉼표 있는 것
  const char *easy_won = "10,000,000";
  printf("My Bank %s\n", easy_won);

  printf("+500,000\n");
  easy_won = "10,500,000";
  printf("My Bank %s\n", easy_won);

  // Bitcoin
  float bc = 10.123456789;
  printf("Bitcoin Wallet: %.5fBC\n", bc);

  bc = bc + 0.34567;
  printf("Now Bitcoin Wallet: %.5fBC\n", bc);
  return 0;
}