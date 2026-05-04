/**
 * @file 02.c
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
    if (__STDC_VERSION__ >= 201710L)
    {
        printf("You are using C18!\n");
    }
    else if (__STDC_VERSION__ >= 201112L)
    {
        printf("You are using C11!\n");
    }
    else if (__STDC_VERSION__ >= 199901L)
    {
        printf("You are using C99!\n");
    }
    else
    {
        printf("You are using C89/C90!\n");
    }

    return 0;
}