#include <stdio.h>
#include <string.h>
int main()
{
  char a[101], c[101];
  scanf("%s", a);
  int b = strlen(a);
  for (int i = b; i >= 0; i--)
  {
    c[b - i] = a[i - 1]; // ekhane bojhar ache amra  indexing kori 0,1,2,3,4 diye but strlen count kore 1,2,3,4 diye so jokhon amra i debo eta null charecter mean korbe bujhcho beacuse a[b]=null tobe strlen kintu abr null chareacter count kore na mind it
  }

  int d = strcmp(c, a);
  if (d == 0)
    printf("palindrome");
  else
    printf(" not palindrome");
  return 0;
}