//Table of Number
#include <stdio.h>
int main(){

    int i=1,n,mul;
    printf("ENTER NUMBER OF TABLE:");
    scanf("%d",&n);
    while(i<=10){
        mul=n*i;
        i++;
        printf("%d \n",mul);
    }
   

    
    return 0;
}