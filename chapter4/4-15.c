#include <stdio.h>
int main ()
{
	int a,b,c;
	printf ("��ʼ��ֵ��cm����"); scanf ("%d",&a);
	printf ("������ֵ��cm����"); scanf ("%d",&b);
	printf ("�����ֵ��cm����"); scanf ("%d",&c);
	for (;a<=b;a+=c){
		printf("%dcm %.2lfkg\n",a,(a-100)*0.9);
	}
	return 0;
} 
