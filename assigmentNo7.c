#include <stdio.h>

void balence_acc();
void deposit_money();
void withdraw();
void interest();
void Exit();
int balence=10000;

int main(){

  
    int n,pin;
    printf("---------------ATM----------------\n");
    printf("PLZ INSERT CARD\n");
    printf("ENTER THE PIN:");
    scanf("%d",&pin);
    if(pin==123){
    
      do{
        printf("-------------------------------------------------- \n ");
        printf("1.Cheak account balence\n");
        printf("2.Deposit money in account\n");
        printf("3.Withdraw Money\n");
        printf("4.Cheak Interest on balence\n");
        printf("5.Exit\n");
        printf("-------------------------------------------------- \n ");

        printf("Enter Number For Process:");
        scanf("%d",&n);

    switch(n){
        case 1:
        balence_acc();
        break;
        case 2:
        deposit_money();
        break;
        case 3:
        withdraw();
        break;
        case 4:
        interest();
        break;
        case 5:
        Exit();
        break;
        default:
        printf("Enter Valid Operation!! \n");
        
    }
    }while(n <= 4);
}
else{
        printf("Pin is incorrect try again!! \n");
}

    
    return 0;
}

void balence_acc(){
   
    printf("Account Balence:%d \n",balence);


}
void deposit_money(){
    int deposit;
    printf("Enter the deposit Amount:");
    scanf("%d", &deposit);

    if(deposit>0){
        balence=balence+deposit;
        printf("Succesfully deposit Money\n");
    }
     else{
        printf("Enter the Valid Number\n");
}
}


void withdraw(){

    int withdraw_amu;
    printf("Enter Withdraw Amount:");
    scanf("%d",&withdraw_amu);
    
    if(withdraw_amu<balence){
        balence=balence-withdraw_amu;
        printf("Succesfully Withdraw Money \n");
}
    else if(withdraw_amu<0){
        printf("Invalid Number \n");
}
        else{
            printf("balence is Insufficient \n");
}

}
void interest(){
    int inter,in_value;
    printf("Enter the interest:");
    scanf("%d",&inter);

    if(inter > 0 && inter <  100){
        in_value=(balence/100)*inter;
        printf("Interest per year is:%d \n",in_value);
    }
    else{
        printf("Invalid Number\n");
    }
}


void Exit(){
    printf("----------Thank You----------\n");
}

