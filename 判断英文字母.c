#include <stdio.h>
int main(void)
{
	char ch;
	printf("������һ���ַ�:");
	scanf("%c",&ch);
	if((ch>='A'&&ch<='Z')||(ch>='a'&&ch<='z'))
		printf("%c��Ӣ����ĸ\n",ch);
	else
		printf("%c�������ַ�\n",ch);
	return 0;
}
