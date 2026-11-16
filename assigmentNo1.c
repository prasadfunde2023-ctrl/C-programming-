//N th number Addition


#include <stdio.h>
int main(){
int i=1,sum=0;
int n;

printf("Enter the value:");
scanf("%d",&n);

while(i<=n){
    sum+=i;
    i++;
}
printf("Sum is: %d \n",sum);
    return 0;

}