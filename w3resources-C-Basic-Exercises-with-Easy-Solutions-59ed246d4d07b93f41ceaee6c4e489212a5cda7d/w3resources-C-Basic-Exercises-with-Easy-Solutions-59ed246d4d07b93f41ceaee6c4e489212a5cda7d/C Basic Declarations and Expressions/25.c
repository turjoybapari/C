/**
 * @file 25.c
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
    char *months[12] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};

    int i;

    printf("Enter the number of the month you want to get printed on the screen: ");
    scanf("%d", &i);
    i--;
    printf("%s\n", months[i]);

    return 0;
}