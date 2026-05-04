#include <stdio.h>
int main()
{
    int day;
    printf("Please enter your day ");
    scanf("%d", &day);
    switch (day)
    {
    case 1:
        printf("Saturday");
        break;
    case 2:
        printf("Sunday");
        break;
    case 3:
        printf("monday");
        break;
    default:
        printf("Error");
        break;
    }
    return 0;
}