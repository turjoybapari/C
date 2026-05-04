/**
 * @file 13.c
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
    int a, b, c, max = 0;

    printf("1st: ");
    scanf("%d", &a);

    printf("2nd: ");
    scanf("%d", &b);

    printf("3rd: ");
    scanf("%d", &c);

    max = (a > b && a > c) ? a : ((b > c) ? b : c);

    printf("Max: %d\n", max);

    return 0;
}