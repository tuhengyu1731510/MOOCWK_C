#include <stdio.h>//二进制18--->十六进制12
int main()
{
	int x;
	scanf("%d",&x);//十进制
	printf("%x",x);//十六进制
	return 0;
}
/*
18/16--->1
18%16--->2
1*10+2-->12
*/