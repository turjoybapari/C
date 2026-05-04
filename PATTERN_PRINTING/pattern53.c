#include <stdio.h>
int main()
{
  int n;
  scanf("%d", &n);
  char a = 'A';
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j <= 2 - i; j++)
    {
      printf(" ");
    }
    for (int k = 0; k < 1 + 2 * i; k++)
    {
      printf("%c", a);
    }
    printf("\n");
    a++;
  }

  return 0;
}