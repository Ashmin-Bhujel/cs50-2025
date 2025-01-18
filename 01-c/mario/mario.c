#include <stdio.h>

void print_bricks(int row, int col);

int main(void)
{
  // * NOTE: "const" prevents the change of variable's value
  const int row = 5;
  const int col = 5;
  print_bricks(row, col);
  return 0;
}

void print_bricks(int row, int col)
{
  // Loop for printing rows
  for (int r = 0; r < row; r++)
  {
    // Loop for printing cols
    for (int c = 0; c < col; c++)
    {
      printf("# ");
    }

    printf("\n");
  }
}
