#include <stdio.h>
int main()
{
    int price,totalPrice,amount,quantity,numProduct,add=0;

printf("Total Product:");
scanf("%d",&numProduct);

if(numProduct<=0){
    printf("Value not accepatable");
    return 0;
}
for(int i=1;i<=numProduct;i++){

    printf("Enter Product Price %d.\n",i,":");
    scanf("%d", &price);

    printf("Enter quantity of Product  %d.\n",i,":");
    scanf("%d",&quantity);

    amount=quantity*price;
    printf("Total Amount Product  %d \n",amount);
    printf("------------------------------------------------------------");

    
    add+=amount;

}
printf("--------BILL-------- \n");

printf("Total Bill Amount is :%d \n",add);
    return 0;
}