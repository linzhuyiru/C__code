#include <stdio.h>
int main()
{
	float price,bill;
	printf("�������");
	scanf("%f",&price);
	printf("������Ʊ�棺");
	scanf("%f",&bill);
	if(bill>=price)
	{
		printf("Ӧ������%fԪ",bill-price);
	}
	else
	{
		printf("����Ǯ����");
	}
	return 0;
}
