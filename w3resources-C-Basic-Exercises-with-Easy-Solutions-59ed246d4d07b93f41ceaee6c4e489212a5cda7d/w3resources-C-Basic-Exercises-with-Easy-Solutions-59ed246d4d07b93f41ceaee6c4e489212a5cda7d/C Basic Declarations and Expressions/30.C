/**
 * @file 30.C
 * @author Mehedi Hasan Rifat (mehedihasrifat@gmail.com)
 * @brief
 * @version 0.1
 * @date 2023-09-08
 *
 * @copyright Copyright (c) 2023
 *
 */
#include <stdio.h>
#include <math.h>

int main()
{
    int a;

    printf("List of square of each one of the even values from 1 to a: ");
    scanf("%d", &a);

    for (int i = 2; i <= a; i += 2)
    {
        printf("%d^%d = %0.0lf\n", i, i, pow(i, 2));
    }

    return 0;
}