#include <stdio.h>
#include <stdlib.h>

/**
 *main - calculating change
 *@arc: int parameter
 *@argv: char parameter
 *Return: 0
 */

int main(int argc, char *argv[])
{
  int amount, coinsUsed = 0;

  if (argc != 2) {
    printf("Usage: %s amount\n", argv[0]);
    return 1;
  }

  amount = atoi(argv[1]);

  for (; amount > 0; coinsUsed++) {
    if (amount >= 25) {
      amount -= 25;
    } else if (amount >= 10) {
      amount -= 10;
    } else if (amount >= 5) {
      amount -= 5;
    } else if (amount >= 2) {
      amount -= 2;
    } else if (amount >= 1) {
      amount -= 1;
    }
  }

  printf("%d\n", coinsUsed);
  return 0;
}

