#include <stdio.h>
int main()
{
	int hour1, minute1;
	int hour2, minute2;
	scanf_s("%d %d", &hour1, &minute1);
	scanf_s("%d %d", &hour2, &minute2);
	int ih = hour2 - hour1;
	int im = minute2 - minute1;
	if (im < 0)
	{
		im = 60 + im;
		ih--;
	}
	printf("ʱ�����%dСʱ%d����", ih, im);
	return 0;
}
