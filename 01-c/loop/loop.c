#include <stdio.h>

int main(void)
{
  int x = 0;

  // while loop
  while (x <= 10)
  {
    printf("[ %i ]\n", x);
    x++;
  }

  // for loop
  for (int i = 9; i >= 0; i--)
  {
    printf("[ %i ]\n", i);
  }

  // do-while loop
  int y = 1;
  do
  {
    printf("[ %i ]\n", y);
    y++;
  } while (y <= 10);

  return 0;
}