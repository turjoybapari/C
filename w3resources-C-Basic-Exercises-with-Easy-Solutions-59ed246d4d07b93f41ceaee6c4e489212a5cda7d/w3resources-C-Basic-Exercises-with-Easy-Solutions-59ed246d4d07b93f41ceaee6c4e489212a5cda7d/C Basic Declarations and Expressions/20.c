/**
 * @file 20.c
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
    double a, b, c, pr1;

    printf("Input the 1st number: ");
    scanf("%lf", &a);
    printf("Input the 2nd number: ");
    scanf("%lf", &b);
    printf("Input the 3rd number: ");
    scanf("%lf", &c);

    pr1 = (b * b) - (4 * a * c);

    if (pr1 > 0 && pr1 != 0)
    {
        pr1 = sqrt(pr1);

        double x, y;

        x = (-b + pr1) / (2 * a);
        y = (-b - pr1) / (2 * a);

        printf("Root 1: %0.5lf\n", x);
        printf("Root 2: %0.5lf\n", y);
    }
    else
    {
        printf("Not possible with these values!\n");
    }

    return 0;
}