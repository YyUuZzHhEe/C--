    #include <stdio.h>
int main ()
{
	int a,b,c,d,e;
	printf ("a= ");
	scanf("%d",&a);
	printf ("b=");
	scanf ("%d",&b);  
	if (a<b)
	{
		c=(a<b);
		printf("a<b的值为%d",c);
	}else if (a==b)
	{	d=a==b;
		printf("a==b的值为%d",d);
	}else {
		printf ("a>b的值为%d",e);
	}
	return 0;
} 