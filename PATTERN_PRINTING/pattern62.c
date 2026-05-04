#include <stdio.h>
int main()
{
  int n = 3;

  for (int i = 0; i < n; i++)
  {
    char a = 'A';
    for (int j = 0; j <= 2 - i; j++)
    {
      printf(" ");
    }
    for (int k = 0; k < 1 + 2 * i; k++)
    {
      printf("%c", a++);
    }
    printf("\n");
  }
  for (int i = 0; i < n - 1; i++)
  {
    char a = 'A';
    for (int j = 0; j <= 1 + i; j++)
    {
      printf(" ");
    }
    for (int k = 0; k < 3 - 2 * i; k++)
    {
      printf("%c", a++);
    }
    printf("\n");
  }

  return 0;
}