#include <stdio.h>
int main() {
  int age;
  printf("enter your age ");
  scanf("%d",&age);
    if( age<=18){
      printf("you are not eligible for a licence");
    }
    else{
      printf("oh yeh,you are eligable");
    }
    return 0;
}