#include <stdio.h>
#include <math.h>
int main()
{
  int a, b, c = 0;
  scanf("%d", &a);
  b = sqrt(a);
  if (a == 2 || a == 3)
  {
    printf("This is prime");
  }
  for (int i = 2; i <= b; i++)
  {
    if (a % i == 0)
    {
      c++;
    }
  }
  if (c > 0)
  {
    printf("THIS is not prime number");
  }
  else
    printf("This is  prime");
  return 0;
}