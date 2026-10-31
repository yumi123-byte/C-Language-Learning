#include<stdio.h>
int main()
{
	int n;
	printf("在键盘上输入一个总秒数:");
	scanf("%d",&n);
	int a,b,c;
	a=n/3600;
	b=(n-a*3600)/60;
	c=n%60;
	printf("%d小时%d分钟%d秒\n",a,b,c);
	return 0;
}
