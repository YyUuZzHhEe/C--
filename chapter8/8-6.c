#include <stdio.h>
int main ()
{
	int cnt,x,i;
	printf("请输入一个整数：");
	scanf("%d",&x);
	for (cnt=1,i = 1; cnt < x;cnt++)
	{
		i*=(cnt+1);
		
	}
	printf("x!=%d\n",i);
	return 0;
}