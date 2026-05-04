#include <stdio.h>
int main()
{
  int x = 3;
  int *p = &x;
  int **q = &p;
  printf("the value of x  is %d\n", x);
  printf("the aaddress of x  is %p\n", &x);
  printf("the address of x  is %p\n", p);
  printf("the value of x by shit  is %d\n", *p);
  printf("the value of x by shit  is %d\n", *(&x));
  printf("the address of p  is %p\n", &p);
  printf("the address of p  is %p\n", q);

  return 0;
}