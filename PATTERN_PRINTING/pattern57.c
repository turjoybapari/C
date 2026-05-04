#include <stdio.h>
int main()
{
  int n;
  scanf("%d", &n);
  char a = 96+n;
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j <= i; j++)
    {
      printf(" ");
    }
    for (int k = 0; k < (n * 2 - 1) - 2 * i; k++)
    {
      printf("%c", a);
    }
    printf("\n");
    a--;
  }

  return 0;
}