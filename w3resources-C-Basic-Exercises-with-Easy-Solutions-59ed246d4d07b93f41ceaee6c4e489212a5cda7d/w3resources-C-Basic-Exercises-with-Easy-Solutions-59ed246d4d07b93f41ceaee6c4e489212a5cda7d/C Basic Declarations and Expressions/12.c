/**
 * @file 12.c
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
    int employee_id;
    double working_hours, money_per_hour;

    printf("Enter employee ID: ");
    scanf("%d", &employee_id);

    printf("Input the working hours: ");
    scanf("%lf", &working_hours);

    printf("Salary amount/hour: ");
    scanf("%lf", &money_per_hour);

    double salary = (working_hours * money_per_hour);

    printf("Employee ID: %d\n", employee_id);
    printf("Salary: U$ %0.2lf\n", salary);

    return 0;
}