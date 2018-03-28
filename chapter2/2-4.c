#include <stdio.h>
int main (void)
{
	int n1=2,n2=5,n3=2.5;
	double d1=2,d2=2.5;
	printf ("n1=%d\n n2=%d\n n3=%d\n d1=%f\n",n1,n2,n3,d1);
	printf ("d2=%d",d2);
	printf ("n1/n3=%d\nd1/n1=%f",n1/n3,d1/n1) ;
	double a=2.5;
	int b=(int)a;
	printf ("%d",b);	
	return 0;
} 
