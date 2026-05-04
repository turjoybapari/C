/**
 * @file 21.c
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
    int a;

    printf("Enter the value for 'a': ");
    scanf("%d", &a);

    if (!((a < 0) && (a > 80)))
    {
        if (a <= 20)
        {
            printf("Range [0, 20]\n");
        }
        else if (a <= 40)
        {
            printf("Range [0, 40]\n");
        }
        else if (a <= 60)
        {
            printf("Range [0, 60]\n");
        }
        else if (a <= 80)
        {
            printf("Range [0, 80]\n");
        }
        else
        {
            printf("Invalid Range!\n");
        }
    }

    return 0;
}