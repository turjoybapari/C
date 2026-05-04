/**
 * @file 05.c
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
    int height, width;

    height = 7, width = 5;

    int area = height * width;
    int perimeter = 2 * (height + width);

    printf("Perimeter of the rectangle = %d inches\n", perimeter);
    printf("Area of the rectangle = %d square inches\n", area);

    return 0;
}