#include <stdio.h>
#include <math.h>

int main()
{
  int n;
  scanf("%d", &n);

  printf("\nPrime numbers up to %d are:\n", n);

  for (int i = 2; i <= n; i++)
  {
    int limit;
    int c = 0;

    limit = sqrt(i);

    for (int j = 2; j <= limit; j++)
    {
      if (i % j == 0)
      {
        c++;
        break;
      }
    }
    if (c == 0)
      printf("%d", i);
  }

  printf("\n");
  return 0;
}