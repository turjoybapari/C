/**
 * @file 31.c
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
    int n;

    printf("Enter an integer: ");
    scanf("%d", &n);

    if ((n % 2) == 0 && (n >= 0))
    {
        printf("Positive Even\n");
    }
    else if ((n % 2) == 0 && (n < 0))
    {
        printf("Negative Even\n");
    }
    else if ((n % 2) != 0 && (n >= 0))
    {
        printf("Positive Odd\n");
    }
    else
    {
        printf("Negative Odd\n");
    }

    return 0;
}