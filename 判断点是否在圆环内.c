//半径为1和半径为2的圆组成的圆环 
#include <stdio.h>
int main(void)
{
	int bool;
	float x,y,z;
	printf("请输入x,y:");
	scanf("%f %f",&x,&y);
	z=x*x+y*y;
	bool=(z>=1)&&(z<=4);
	if(bool)
		printf("TRUE\n");
	else
		printf("FALSE\n");
	return 0;
}
