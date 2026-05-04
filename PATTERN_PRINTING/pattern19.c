#include <stdio.h>
int main()
{
  int n;
  scanf("%d", &n);

  for (int i = 0; i < n; i++)
  {
    char a = 'A';
    for (int j = 0; j <= i; j++)
    {
      printf("%c", a++);
    }
    printf("\n");
  }
  for (int i = 0; i < 2; i++)
  {
    char a = 'A';
    for (int j = 0; j < 2 - i; j++)
    {
      printf("%c", a++);
    }
    printf("\n");
  }
  return 0;
}