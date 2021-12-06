#include <stdio.h>
int main()
{
	float price,bill;
	printf("请输入金额：");
	scanf("%f",&price);
	printf("请输入票面：");
	scanf("%f",&bill);
	if(bill>=price)
	{
		printf("应该找您%f元",bill-price);
	}
	else
	{
		printf("您的钱不够");
	}
	return 0;
}
