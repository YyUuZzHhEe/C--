#include <stdio.h>
int main ()
{
	int a,b,max,min,max1,min1,sum=0;
	printf ("����������������\n����a��");
	scanf ("%d",&a);
	printf ("����b��");
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
	printf ("���ڵ���%dС�ڵ���%d�����������ĺ���%d��\n",min1,max1,sum);
	return 0;
}  