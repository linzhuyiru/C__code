//�뾶Ϊ1�Ͱ뾶Ϊ2��Բ��ɵ�Բ�� 
#include <stdio.h>
int main(void)
{
	int bool;
	float x,y,z;
	printf("������x,y:");
	scanf("%f %f",&x,&y);
	z=x*x+y*y;
	bool=(z>=1)&&(z<=4);
	if(bool)
		printf("TRUE\n");
	else
		printf("FALSE\n");
	return 0;
}
