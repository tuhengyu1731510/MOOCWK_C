#include<stdio.h>//计算时差
int main()
{
    int hour1,minute1=0;
    int hour2,minute2=0;
    scanf("%d %d",&hour1,&minute1);
    scanf("%d %d",&hour2,&minute2);
    int ih = hour2-hour1;
    int im = minute2-minute1;
    if(im <0){
        im = 60+ im;//分钟补位
        ih --;
    }
    printf("时间差是%d小时%d分。\n",ih,im);
}