#include <stdio.h>
int main ()
{
	int a;
	printf ("������һ��������");
	scanf ("%d",&a);
	if (a>=0) 
		printf ("����ֵ��%d",a);
		else 
			printf ("����ֵ��%d��\n",-a);
	return 0;
}