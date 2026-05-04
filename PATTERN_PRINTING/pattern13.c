#include <stdio.h>
int main()
{
  int n;
  scanf("%d", &n);
  for (int i = 0; i < n; i++)
  {
    char a = 'A';
    for (int j = 0; j < 3 - i; j++)
    {
      printf("%c", a++);
    }
    printf("\n");
  }

  return 0;
}