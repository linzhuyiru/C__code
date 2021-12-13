/*#include <stdio.h>
int main()
{
	const int PASS=60;
	int score;
	printf("请输入你的成绩");
	scanf("%d",&score);
	if(score<PASS)
		printf("很遗憾，继续努力");
	else
	printf("祝贺你，及格了");
	return 0;
}*/

#include <stdio.h>
#define PASS 60
int main()
{
	int score;
	printf("请输入你的成绩");
	scanf("%d",&score);
	if(score<PASS)
		printf("很遗憾，继续努力");
	else
	printf("祝贺你，及格了");
	return 0;
}
