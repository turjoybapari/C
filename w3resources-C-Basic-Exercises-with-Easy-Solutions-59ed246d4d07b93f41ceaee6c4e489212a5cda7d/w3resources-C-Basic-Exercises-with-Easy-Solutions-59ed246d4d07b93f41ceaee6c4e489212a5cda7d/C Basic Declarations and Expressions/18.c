/**
 * @file 18.c
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
    int days;

    printf("Enter the number of days: ");
    scanf("%d", &days);

    int y, m, d;

    y = days / 365;
    m = (days %= 365) / 30;
    d = (days % 30);

    printf("%d Year(s)\n%d Month(s)\n%d Day(s)\n", y, m, d);

    return 0;
}