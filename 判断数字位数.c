//����λ�������ƣ��������޷�Χ���Ƶ����֣������覴á� 
/*#include <stdio.h>
int main(void)
{
	int x;
	int n=1;
	printf("����������:");
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
	printf("����λ��λ%dλ\n",n);
	return 0;
}*/

//����whileѭ����䣬����ʵ���޷�Χ������������λ����� 
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

//����do while������
#include <stdio.h>
int main(void)
{
	int n=0;
	int x;
	printf("������һ������:");
	scanf("%d",&x);
	do
	{
		x/=10;
		n++;
	}while(x>0);
	printf("����λ��Ϊ%dλ",n);
	return 0;
 } 
