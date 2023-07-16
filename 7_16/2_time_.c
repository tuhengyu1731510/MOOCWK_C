#include<stdio.h>//1120 110----->1310
int main()
{
    int x=0;
    int q=0;
    int o=0;
    int p=0;
    scanf("%d\n",&x);
    scanf("%d\n",&q);
    int y = (x / 100)*60;
    int z = x%100;
    printf("y+z=%d\n",y+z);
    printf("y+z+q=%d\n",y+z+q);
    o = ((y+z+q)/60)*100;//=£°1300------why
    printf("o=%d\n",o);
    p = (y+z+q)%60;//»°”‡10
    printf("p=%d\n",p);
    printf("o+p=%d\n",o+p); 
    printf(" ±º‰=%d\n",(y+z+q)/60*100+(y+z+q)%60);
    return 0;
}