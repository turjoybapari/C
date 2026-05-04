/**
 * @file 16.c
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
    int amount;

    printf("Enter the amount: ");
    scanf("%d", &amount);

    int hundred, fifty, twenty, ten, five, two, one;

    hundred = amount / 100;
    fifty = (amount %= 100) / 50;
    twenty = (amount %= 50) / 20;
    ten = (amount %= 20) / 10;
    five = (amount %= 10) / 5;
    two = (amount %= 5) / 2;
    one = (amount %= 2);

    printf("%d Note(s) of 100.00\n", hundred);
    printf("%d Note(s) of 50.00\n", fifty);
    printf("%d Note(s) of 20.00\n", twenty);
    printf("%d Note(s) of 10.00\n", ten);
    printf("%d Note(s) of 5.00\n", five);
    printf("%d Note(s) of 2.00\n", two);
    printf("%d Note(s) of 1.00\n", one);

    return 0;
}