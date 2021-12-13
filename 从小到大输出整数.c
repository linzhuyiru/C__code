#include <stdio.h>
int main(void)
{
	int a,b,tmp;
	printf("请输入两个整数：");
	scanf("%d %d",&a,&b);
	if(a>b)
	{
		tmp=a;
		a=b;
		b=tmp;
	}
	printf("%d %d\n",a,b);
	return 0;
}
