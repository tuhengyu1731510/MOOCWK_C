#include<stdio.h>//_Three_digits_in_reverse_order 123--->321
int main()
{
    int x=0;
    int a,b,c;
    int y;
    printf("请输入一个三位数:\n");
    scanf("%d\n",&x);
    a=x/100;//1
    b=x/10%10;//2
    c=x%100%10;//3
    y = c*100+ b*10 + a*1;
    printf("逆序三位数=%d",y);
    return 0;
}