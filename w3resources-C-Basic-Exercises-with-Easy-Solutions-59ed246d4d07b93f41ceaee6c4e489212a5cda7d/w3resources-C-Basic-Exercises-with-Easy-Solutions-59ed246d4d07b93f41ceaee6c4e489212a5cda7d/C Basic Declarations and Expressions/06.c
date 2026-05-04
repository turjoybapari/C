/**
 * @file 06.c
 * @author Mehedi Hasan Rifat (mehedihasrifat@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2023-09-07
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include <stdio.h>

#define PI 3.1415926

int main()
{
    double radius;

    scanf("%lf", &radius);

    double area, perimeter;

    area = PI * radius * radius;
    perimeter = 2 * PI * radius;

    printf("Perimeter of the Circle = %lf\n", perimeter);
    printf("Area of the Circle = %lf\n", area);

    return 0;
}