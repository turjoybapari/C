#include <stdio.h>
int main()
{
  int a, value = 1;
  scanf("%d", &a);
  for (int i = 1; i < a; i++)
  {
    printf("%d", 1);
    for (int j = 1; j < i; j++)
    {
      value = value * (i - j) / (j );
      printf("%d", value);
    }
    printf("\n");
  }
  return 0;
}