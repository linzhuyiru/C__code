/*#include <stdio.h>
int main()
{
	int a,b;
	printf("�����������Ƚϵ�����");
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
	printf("���������%d\n",max);
	return 0;
}*/
//��ɵ�����Ƕ��ܿ���

#include <stdio.h>
int main()
{
	int a,b;
	printf("������Ƚϵ���������");
	scanf("%d %d",&a,&b);
	int max=b;
	if(a>b)
	{
		max=a;
	}
	printf("����Ǹ�������%d",max);
	return 0;
 } 
