/**
 * @file 22.c
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
    int num[5], odd_sum = 0;

    printf("Enter the five numbers: ");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &num[i]);
        odd_sum += (num[i] % 2 != 0) ? num[i] : 0;
    }

    printf("Sum of all odd values: %d\n", odd_sum);

    return 0;
}