#include <stdio.h>
int main()
{
  int n;
  scanf("%d", &n);
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < 3 - i; j++)
    {
      // printf("%d", 3 - i);
      if (i % 2 == 0)
        printf("%d", 1);
      if (i % 2 == 1)
        printf("%d", 0);
    }
    printf("\n");
  }

  return 0;
}