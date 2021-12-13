//数字位数有限制，并不是无范围限制的数字，因此有瑕疵。 
/*#include <stdio.h>
int main(void)
{
	int x;
	int n=1;
	printf("请输入数字:");
	scanf("%d",&x);
	if(x>999)
	{
		n=4;
	}
	else if(x>99)
	{
		n=3;
	}
	else if(x>9)
	{
		n=2;
	}
	printf("数字位数位%d位\n",n);
	return 0;
}*/

//运用while循环语句，可以实现无范围限制正整数的位数检测 
/*#include <stdio.h>
int main(void)
{
	int x;
	int n=0;
	scanf("%d",&x);
	if(x>0)
	{
		while(x>0)
		{
		n++;
		x/=10;
		}
		
	}
	else
	{
		n=1;
	}
	printf("%d",n);
	return 0;
}*/

//运用do while来进行
#include <stdio.h>
int main(void)
{
	int n=0;
	int x;
	printf("请输入一个数字:");
	scanf("%d",&x);
	do
	{
		x/=10;
		n++;
	}while(x>0);
	printf("数字位数为%d位",n);
	return 0;
 } 
