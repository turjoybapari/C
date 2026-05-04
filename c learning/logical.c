#include <stdio.h>
int main() {
    int age;
    printf("enter your age ");
    scanf("%d",&age);
    if (age>=18&&age<70)
    {
        printf("You are eligable for licence");

    }
    else{
        printf("You are not eligable");
    }
    
    return 0;
}