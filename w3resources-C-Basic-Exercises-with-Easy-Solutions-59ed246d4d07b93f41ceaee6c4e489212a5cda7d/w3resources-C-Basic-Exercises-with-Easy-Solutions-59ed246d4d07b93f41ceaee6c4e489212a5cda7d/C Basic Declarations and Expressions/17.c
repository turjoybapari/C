/**
 * @file 17.c
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
    int input;

    printf("Input Seconds: ");
    scanf("%d", &input);

    int h, m, s;

    h = input / 3600;
    m = (input %= 3600) / 60;
    s = (input % 60);

    printf("There are:\nH:M:S - %d:%d:%d\n", h, m, s);

    return 0;
}