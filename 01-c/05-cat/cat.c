#include <stdio.h>

void print_meow(int n);

int main(void)
{
  int n = 0;
  printf("How many times the cat should meow? ");
  scanf("%i", &n);
  print_meow(n);
  return 0;
}

void print_meow(int n)
{
  for (int i = 0; i < n; i++)
  {
    printf("meow\n");
  }
}
