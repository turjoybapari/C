#include <stdio.h>
int main() {
    int age;
    char bd;
    printf("Are you bangladeshi Y/N ");
    scanf("%c",&bd);
    if(bd=='Y'){
  printf("Enter your age ");
  scanf("%d",&age);
    if (age<18)
    {
      printf("you are under 18");
    }
    else if(age==18){
    printf("congo you are 18");
    }
    else{
      printf("you are sesnior");
    }
    return 0;
  }
}
