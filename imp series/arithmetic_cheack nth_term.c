#include <stdio.h>
int main()
{
  int a, d, n;
  printf("Enter your first number ");
  scanf("%d", &a);
  printf("Enter your difference");
  scanf("%d", &d);
  printf("Enter your nth");
  scanf("%d", &n);
  printf("%d", a + (n - 1) * d);
  return 0;
}