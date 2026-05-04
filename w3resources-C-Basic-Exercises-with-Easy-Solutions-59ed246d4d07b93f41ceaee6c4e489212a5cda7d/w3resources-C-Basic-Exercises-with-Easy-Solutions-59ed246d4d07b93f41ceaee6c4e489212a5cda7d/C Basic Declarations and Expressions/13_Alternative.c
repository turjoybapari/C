/**
 * @file 13_Alternative.c
 * @author Mehedi Hasan Rifat (mehedihasrifat@gmail.com)
 * @brief
 * @version 0.1
 * @date 2023-09-07
 *
 * @copyright Copyright (c) 2023
 *
 */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y, z, initial_max = 0, final_max = 0;

    printf("1st: ");
    scanf("%d", &x);

    printf("2nd: ");
    scanf("%d", &y);

    printf("3rd: ");
    scanf("%d", &z);

    initial_max = (x + y + abs(x - y)) / 2;
    final_max = (initial_max + z + abs(initial_max - z)) / 2;

    printf("Max: %d\n", final_max);

    return 0;
}