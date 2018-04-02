#include <stdio.h>
int main ()
{
	int a;
	printf ("请输入一个整数：");
	scanf ("%d",&a);
	if (a>=0) 
		printf ("绝对值是%d",a);
		else 
			printf ("绝对值是%d。\n",-a);
	return 0;
}