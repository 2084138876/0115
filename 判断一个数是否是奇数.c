#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//判断一个数是否是奇数
int main()
{
	int num = 0;
	scanf("%d", &num);
	if (num % 2 != 0)
	{
		printf("%d是奇数", num);
	}
	else
	{
		printf("%d是偶数", num);
	}
	return 0;
}
