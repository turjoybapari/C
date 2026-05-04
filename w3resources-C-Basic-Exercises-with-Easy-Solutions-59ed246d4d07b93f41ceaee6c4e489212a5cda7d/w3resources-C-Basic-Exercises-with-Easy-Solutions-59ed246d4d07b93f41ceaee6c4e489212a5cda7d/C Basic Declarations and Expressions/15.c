/**
 * @file 15.c
 * @author Mehedi Hasan Rifat (mehedihasrifat@gmail.com)
 * @brief
 * @version 0.1
 * @date 2023-09-07
 *
 * @copyright Copyright (c) 2023
 *
 */
#include <stdio.h>
#include <math.h>

int main()
{
    double d, x1, x2, y1, y2;

    printf("Enter the value of x1: ");
    scanf("%lf", &x1);
    printf("Enter the value of y1: ");
    scanf("%lf", &y1);
    printf("Enter the value of x2: ");
    scanf("%lf", &x2);
    printf("Enter the value of y2: ");
    scanf("%lf", &y2);

    d = sqrt((pow((x2 - x1), 2)) + pow((y2 - y1), 2));

    printf("Distance: %0.4lf\n", d);

    return 0;
}