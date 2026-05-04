#include <stdio.h>
#include <math.h>
int main()
{
  // 1+ 1/2 + 1/3.....1/n
  float a;
  float sum = 0;
  scanf("%f", &a);
  for (float i = 1; i <= a; i++)
  {

    sum += 1 / i;
  }
  printf("The sum is %.2f", sum);

  printf("\n\n\n\n");
  // 1+ 1/2^2 + 1/3^2.....1/n^2
  for (int i = 1; i <= a; i++)
  {

    sum += 1.0 / i * i;
  }
  printf("The sum is %.2f", sum);
printf("\n\n\n\n");
  // 1+ 1/2^2 + 1/3^3.....1/n^n
  for (int i = 1; i <= a; i++)
  {

    sum += 1.0 / pow(i,i);
  }
  printf("The sum is %.2f", sum);

  return 0;
}