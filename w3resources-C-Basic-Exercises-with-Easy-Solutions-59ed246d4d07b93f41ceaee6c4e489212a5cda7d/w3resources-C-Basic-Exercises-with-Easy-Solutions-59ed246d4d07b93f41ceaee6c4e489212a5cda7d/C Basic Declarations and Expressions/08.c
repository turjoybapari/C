/**
 * @file 08.c
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

    scanf("%d", &days);

    int years, weeks;

    years = (days / 365);
    weeks = (days % 365) / 7;
    days = days - ((years * 365) + (weeks * 7));

    printf("Years: %d\nWeeks: %d\nDays: %d\n", years, weeks, days);

    return 0;
}