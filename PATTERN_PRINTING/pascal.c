#include <stdio.h>

int main()
{
  int row, value = 1;
  printf("Enter your row number ");
  scanf("%d", &row);
  for (int i = 0; i < row; i++)
  {
    for (int j = 0; j <= row - i; j++)
    {
      printf(" ");
    }
    int value = 1;
    for (int k = 0; k <= i; k++)
    {

      printf("%d ", value);
      value = value * (i - k) / (k + 1);
    }
    printf("\n");
  }

  return 0;
}