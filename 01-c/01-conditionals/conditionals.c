#include <stdio.h>

int main(void)
{
  // Using int data type
  int x = 0, y = 0;
  printf("Enter value of x and y:\n");
  scanf("%i %i", &x, &y);

  // Conditionals
  if (x > y)
  {
    printf("x is greater than y\n");
  }
  else if (x < y)
  {
    printf("x is lesser than y\n");
  }
  else
  {
    printf("x is equals to y\n");
  }

  return 0;
}