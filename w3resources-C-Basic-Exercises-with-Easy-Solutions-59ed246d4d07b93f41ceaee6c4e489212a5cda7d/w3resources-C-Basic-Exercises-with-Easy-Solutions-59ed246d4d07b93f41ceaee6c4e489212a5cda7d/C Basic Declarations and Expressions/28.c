/**
 * @file 28.c
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
    int n[5], pos_count = 0, pos_sum = 0;

    printf("Enter the five numbers: ");

    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &n[i]);
        (n[i] >= 0) ? pos_count++, pos_sum += n[i] : pos_sum + 0;
    }

    double avg = pos_sum / (double)pos_count;

    printf("Number of positive numbers: %d\n", pos_count);
    printf("Average value of the said positive numbers: %0.2lf\n", avg);

    return 0;
}