#include <stdio.h>
int main()
{
  int n;
  scanf("%d", &n);
  char a = 'C';
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < 3 - i; j++)
    {
      printf("%c", a);
    }
    a--;
    printf("\n");
  }

  return 0;
}