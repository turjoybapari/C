#include <stdio.h>
int main()
{
  int n = 5;
  // scanf("%d", &n);
  for (int i = 0; i < n; i++)
  {
    char a = 'A';
    for (int j = 0; j < 5; j++)
    {
      printf("%c", a);
      a++;
    }
    printf("\n");
  }

  return 0;
}