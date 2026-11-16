//Count Number even or add
#include <stdio.h>
int main(){
    int n,num ,even=0,odd=0;

    printf("ENTER NUMEBER OF REPETATION:");
    scanf("%d",&n);

    for(int i=1;i<=n;i++){
        printf("ENTER THE NUMBER:");
        scanf("%d",&num);

        if(num % 2==0){
            even++;
        }
        else{
            odd++;
        }
    }
     printf("---------------------------------------------------\n");
    printf("EVEN NUMBER IS[ %d ] INPUTED.\n",even);
    printf("ODD NUMBER IS [ %d ]INPUTED.\n",odd);
    return 0;
}