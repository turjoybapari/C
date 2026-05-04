/**
 * @file 19.c
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
    int p, q, r, s;

    printf("1st Integer: ");
    scanf("%d", &p);

    printf("2nd Integer: ");
    scanf("%d", &q);

    printf("3rd Integer: ");
    scanf("%d", &r);

    printf("4th Integer: ");
    scanf("%d", &s);

    if (q > 0 && r > 0 && s > 0 && p % 2 == 0 && q > r && s > p && (r + s) > (p + q))
    {
        printf("Correct Values\n");
    }
    else
    {
        printf("Wrong Values\n");
    }

    return 0;
}