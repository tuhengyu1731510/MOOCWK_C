#include<stdio.h>
int main()
{
    int price = 0;
    int bill = 0;
    printf("请输入金额：");
    scanf("%d",&price);
    printf("请输入票面：");
    scanf("%d",&bill);
    if(bill>=price){
        printf("找零%d元\n",bill-price);
    }
    else{
        printf("钱不够\n");
    }

}