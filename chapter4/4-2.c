#include <stdio.h>
int main ()
{
	int a,b,max,min,max1,min1,sum=0;
	printf ("请输入两个整数：\n整数a：");
	scanf ("%d",&a);
	printf ("整数b：");
	scanf ("%d",&b);
	if (a>b){
		max=a;min=b;
	}else if(a<b){
		max=b;min=a;
	}	else sum=max;
	max1=max;
	min1=min;
	printf ("%d",max1);
	do {
		sum+=min;
		min++;
	}while (min<=max);
	printf ("大于等于%d小于等于%d的所有整数的和是%d。\n",min1,max1,sum);
	return 0;
}  