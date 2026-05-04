/**
 * @file 24.c
 * @author Mehedi Hasan Rifat (mehedihasrifat@gmail.com)
 * @brief
 * @version 0.1
 * @date 2023-09-08
 *
 * @copyright Copyright (c) 2023
 *
 */
#include <stdio.h>

int main()
{
    int a, b;

    printf("Enter the first integer: ");
    scanf("%d", &a);
    printf("Enter the second integer: ");
    scanf("%d", &b);

    if (a < b)
    {
        int temp = a;
        a = b;
        b = temp;
    }

    if (a % b == 0)
    {
        printf("Multiplied\n");
    }
    else
    {
        printf("Not Multiplied\n");
    }

    return 0;
}