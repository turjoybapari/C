#include <stdio.h>
#include <stdbool.h>
 bool prime(int a){
     if(a==0||a==1){
        return false;

    }
 for(int i=2;i<a;i++){
    if(a%i==0){
        return false;
        break;
    }

 }
        return true;
 }
int main() {
    int a,b,n,sum=0;
    scanf("%d %d %d",&a,&b,&n);

    if(prime(a)==false&&prime(b)==false){
            printf("%d %d ",a,b);
 for(int i=0;i<n;i++){
        sum=a+b;
        if(prime(sum)==true){
               sum= sum-1;
    printf("%d  ",sum);
    a=b;
        b=sum;
    }
    else{
    printf("%d  ",sum);
    a=b;
        b=sum;
    }
 }}
if(prime(a)==true&&prime(b)==true){
        a=a-1;
        b=b-1;
            printf("%d %d ",a,b);
 for(int i=0;i<n;i++){
        sum=a+b;
    printf("%d  ",sum);
    a=b;
        b=sum;
    }
    if(prime(sum)==true){
               sum= sum-1;
    printf("%d  ",sum);
    a=b;
        b=sum;
    }
    else{
    printf("%d  ",sum);
    a=b;
        b=sum;
    }
 }
    return 0;
}
