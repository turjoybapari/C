/**
 * @file 11.c
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
    double c1, w1, c2, w2, result;

    printf("Weight: ");
    scanf("%lf", &w1);
    printf("Quantity: ");
    scanf("%lf", &c1);

    printf("Weight: ");
    scanf("%lf", &w2);
    printf("Quantity: ");
    scanf("%lf", &c2);

    result = ((w1 * c1) + (w2 * c2)) / (c1 + c2);

    printf("Average: %lf\n", result);

    return 0;
}