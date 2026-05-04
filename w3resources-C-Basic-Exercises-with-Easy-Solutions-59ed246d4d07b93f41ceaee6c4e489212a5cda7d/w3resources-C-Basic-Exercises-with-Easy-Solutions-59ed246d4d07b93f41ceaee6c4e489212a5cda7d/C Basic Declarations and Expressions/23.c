/**
 * @file 23.c
 * @author Mehedi Hasan Rifat (mehedihasrifat@gmail.com)
 * @brief
 * @version 0.1
 * @date 2023-09-07
 *
 * @copyright Copyright (c) 2023
 *
 */
#include <stdio.h>

int main()
{
    double x, y, z;

    printf("Enter the values of the triangle: ");
    scanf("%lf %lf %lf", &x, &y, &z);

    if (z < (x + y) && y < (x + z) && x < (y + z))
    {
        printf("Perimeter = %0.1lf\n", (x + y + z));
    }
    else
    {
        printf("Not possible to create a triangle!\n");
    }

    return 0;
}