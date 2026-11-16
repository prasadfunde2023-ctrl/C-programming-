//Factorial
#include <stdio.h>
int main(){
    int i=1,n,fact=1;
    printf("ENTER THE FACTORIAL NUMBER:");
    scanf("%d",&n);

    while(i<=n){
        fact*=i;
        i++;
    }
    printf("FACTORIAL IS:%d \n",fact);
    return 0;
}