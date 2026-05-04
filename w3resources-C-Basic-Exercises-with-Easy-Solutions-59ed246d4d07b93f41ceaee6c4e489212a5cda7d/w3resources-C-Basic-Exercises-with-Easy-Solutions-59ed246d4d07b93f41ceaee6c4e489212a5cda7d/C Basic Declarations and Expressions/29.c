/**
 * @file 29.c
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
    int n[5], odd_sum = 0;

    printf("Enter the five numbers: ");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &n[i]);
        odd_sum = ((n[i] % 2) != 0) ? odd_sum + n[i] : odd_sum;
    }

    printf("Sum of all odd values: %d\n", odd_sum);

    return 0;
}