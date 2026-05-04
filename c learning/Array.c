#include <stdio.h>
int main()
{
  int arr[10];
  printf("Please entr your number");
  for (int i = 0; i < 9; i++)
  {
    printf("\nEnter your number %d", i);
    scanf("%d", &arr[i]);
  }
  printf("You entered :");
  for (int i = 0; i < 9; i++)
  {
    printf("\n%d", arr[i]);
  }
  for (int i = 0; i < 9; i++)
  {
    printf("\nThe address is %p", &arr[i]);
  }

  return 0;
}