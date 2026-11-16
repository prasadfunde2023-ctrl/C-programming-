//Print reverse number

#include <stdio.h>
int main(){

    int n,digit,reverse=0,x;

    printf("Enter the value:");
    scanf("%d",&n);

while(n>0){
    digit=n%10;
    reverse=reverse*10+digit;
    n=n/10;
}
// printf("Entered Value is:%d \n",n);
printf("Reverse of NUmber is: %d \n",reverse);
    return 0;
}