#include <stdio.h>

int main(void)
{
  // Using char data type
  char is_agreed = ' ';
  printf("Do you agree? [y/n] ");
  // * NOTE: Should use space before %c in scanf to avoid reading whitespace character from buffer
  scanf(" %c", &is_agreed);

  if (is_agreed == 'y' || is_agreed == 'Y')
  {
    printf("You agreed.\n");
  }
  else if (is_agreed == 'n' || is_agreed == 'N')
  {
    printf("You disagreed.\n");
  }
  else
  {
    printf("Invalid!\n");
  }

  return 0;
}