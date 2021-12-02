/*#include <stdio.h>
int main()
{
	int a,b;
	printf("请输入两个比较的数字");
	scanf("%d %d",&a,&b);
	int max=0;
	if(a>b)
	{
		max=a;
	}
	else
	{
		max=b;
	}
	printf("大的数字是%d\n",max);
	return 0;
}*/
//很傻，但是都能看懂

#include <stdio.h>
int main()
{
	int a,b;
	printf("请输入比较的两个数字");
	scanf("%d %d",&a,&b);
	int max=b;
	if(a>b)
	{
		max=a;
	}
	printf("大的那个数字是%d",max);
	return 0;
 } 
