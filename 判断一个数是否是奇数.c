#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//�ж�һ�����Ƿ�������
int main()
{
	int num = 0;
	scanf("%d", &num);
	if (num % 2 != 0)
	{
		printf("%d������", num);
	}
	else
	{
		printf("%d��ż��", num);
	}
	return 0;
}
