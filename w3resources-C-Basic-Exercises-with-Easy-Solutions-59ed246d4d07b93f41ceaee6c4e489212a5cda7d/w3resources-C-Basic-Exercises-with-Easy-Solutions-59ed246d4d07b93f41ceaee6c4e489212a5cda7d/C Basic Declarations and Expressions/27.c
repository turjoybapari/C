/**
 * @file 27.c
 * @author Mehedi Hasan Rifat (mehedihasrifat@gmail.com)
 * @brief
 * @version 0.1
 * @date 2023-09-08
 *
 * @copyright Copyright (c) 2023
 *
 */
#include <stdio.h>

int main()
{
    int n[5], pos = 0, neg = 0;

    printf("Enter the five numbers: ");

    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &n[i]);
        (n[i] >= 0) ? pos++ : neg++;
    }

    printf("Number of positive numbers: %d\n", pos);
    printf("Number of negative numbers: %d\n", neg);

    return 0;
}