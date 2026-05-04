#include <stdio.h>
int main()
{
  int age;
  printf("Enter your age ");
  scanf("%d", &age);
  if (age < 18)
  {
    printf("you are under 18");
  }
  else if (age == 18)
  {
    printf("congo you are 18");
  }
  else
  {
    printf("you are sesnior");
  }

  return 0;
}