#include <stdio.h>
#include <stdbool.h>

void double_the_money();
void divide_the_number(int x, int y);

int main(void)
{
  double_the_money();
  divide_the_number(22, 7);
  return 0;
}

// ! This function can introduce integer overflow if we double the money too many times
void double_the_money()
{
  char choice = ' ';
  int money = 1;

  while (true)
  {
    printf("You will get $%i or Do you want to double it and pass it to next person? ", money);
    scanf(" %c", &choice);

    if (choice == 'y' || choice == 'Y')
    {
      money *= 2;
    }
    else
    {
      break;
    }
  }

  printf("You have $%i now.\n", money);
}

void divide_the_number(int x, int y)
{
  // * Note: (Type Casting) Explictly telling compiler to convert x to a float before division
  float result = (float)x / y;
  printf("The result of division is: %f\n", result);

  // ! Introduces floating point imprecision
  // printf("The result of division is: %.25f\n", result);
}