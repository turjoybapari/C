/**
 * @file 14.c
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
    int distance_travelled;
    double spent_fuel;

    printf("Enter the total distance you travelled: ");
    scanf("%d", &distance_travelled);

    printf("Enter the amount of fuel that was spent during the travel: ");
    scanf("%lf", &spent_fuel);

    double result = (distance_travelled / spent_fuel);

    printf("Average fuel spent (km/ltr): %0.2lf\n", result);

    return 0;
}