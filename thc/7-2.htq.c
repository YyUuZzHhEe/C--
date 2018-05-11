#include <stdio.h>
#include <math.h>
int x1, x2, delta;
void equation (int a, int b, int c)
{
	
	delta = b*b-4*a*c;
	if (delta > 0)
	{
		x1=(-b+sqrt(delta))/(2*a);
		x2=(-b-sqrt(delta))/(2*a);
	}
	if (delta = 0)
	{
		x1=(-b/(2*a));
		x2=(-b/(2*a));
	}
}
int main ()
{
	int a,b,c;
	printf("请输入ax^2+bx+c=0中的系数\n");
	printf("a=");
	scanf("%d",&a);
	printf("b=");
	scanf("%d",&b);
	printf("c=");
	scanf("%d",&c);
	equation(a,b,c);
	if (delta >= 0)
	{
		if (x1!=x2)
		{
		printf("ax^2-bx+c=0的解为x1=%d,x2=%d\n",x1,x2 );
		}else {
		printf("ax^2-bx+c=0的解为x1=x2=%d\n",x1);
		}
	}else
	{
		printf("该方程无实数解\n");
	}
	return 0;
}