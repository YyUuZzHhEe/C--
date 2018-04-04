#include <stdio.h>
int main  ()
{
	int a,b,c,min;
	printf("请输入三个整数:");
	scanf ("%d%d%d",&a,&b,&c);
	min=(a<b)?a:b;
	min=(min<c)?min:c;
	printf ("a,b,c,中的最小值为%d。\n",min);
	return 0;
} 