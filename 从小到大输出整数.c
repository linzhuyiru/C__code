#include <stdio.h>
int main(void)
{
	int a,b,tmp;
	printf("����������������");
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
