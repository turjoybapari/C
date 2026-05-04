#include <stdio.h>
int main()
{
    int a, b, c, temp;
    a = 5;
    b = 6;
    printf("a=%d \n", a);
    printf("b=%d \n", b);
    temp = a;
    a = b;
    b = temp;
    printf("After swaping \n\n");
    printf("a=%d \n", a);
    printf("b=%d \n", b);

    return 0;
}