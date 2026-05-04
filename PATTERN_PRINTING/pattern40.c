#include <stdio.h>
int main()
{
  int n;
  scanf("%d", &n);
  for (int i = 0; i < n; i++)
  {
    for (int j = 1; j <= 4 - i; j++)
    {
      printf(" ");
    }
    for (int k = 1; k <= 1 + i; k++)
    {
      printf("%d", i + 1);
    }
    printf("\n");
  }
 

  return 0;
}