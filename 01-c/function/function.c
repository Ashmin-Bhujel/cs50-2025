#include <stdio.h>

// Function prototype
void add(int x, int y);

int main(void)
{
  int x = 0, y = 0;
  printf("Enter value of x & y:\n");
  scanf("%i %i", &x, &y);

  // Function call
  add(x, y);
  return 0;
}

// Function definition
void add(int x, int y)
{
  int result = x + y;
  printf("The result of addition is %i\n", result);
}