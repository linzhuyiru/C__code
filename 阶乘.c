//����׳�
/*#include <stdio.h>
int main(void)
{
	int n;
	printf("���������֣�");
	scanf("%d",&n);
	int fact=1;
	
	int i=1;
	for(i=1;i<=n;i++)
	{
		fact*=i;
	}
	printf("%d!=%d\n",n,fact);
	return 0;
 }*/
 
 //��while���ʵ��
 #include <stdio.h>
 int main(void)
 {
 	int n;
 	printf("���������֣�");
 	scanf("%d",&n);
 	int fact=1;
 	int i=1;
 	while(i<=n)
 	{
 		fact*=i;
 		i++;
	 }
	 printf("%d!=%d\n",n,fact);
 }
