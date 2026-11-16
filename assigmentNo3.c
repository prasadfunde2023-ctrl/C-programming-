//Palidrown Number

#include <stdio.h>
int main(){
    int num,n,reverse=0,digit;
printf("----------------------------\n");

    printf(" ENTER THE NUMBER:");
    scanf("%d",&num);//XYX
    printf(" ");
     printf("ENTER THE SAME NUMBER:");
    scanf("%d",&n);//XYX
    while(num>0){

        digit=num%10;
        reverse=reverse*10+digit;
        num=num/10;}

        printf("----------------------------\n");


        if(n ==reverse){
            printf("Number %d is Palidrown\n",reverse);//reverse=XYX=n
        }
     else{
            printf("Number %d is not Palidrown \n",reverse); //reverse!=XYX!=n
        }




    return 0;
}