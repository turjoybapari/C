#include <stdio.h>
int main()
{
  int n;
  scanf("%d", &n);
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j <= i; j++)
    {
      if ((i == 2 && j == 1) || (i == 3 && (j == 1 || j == 2)))
        printf(" ");
      else
        printf("*");
    }
    printf("\n");
  }

  return 0;
}