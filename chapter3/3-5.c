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
		printf("a<b��ֵΪ%d",c);
	}else if (a==b)
	{	d=a==b;
		printf("a==b��ֵΪ%d",d);
	}else {
		printf ("a>b��ֵΪ%d",e);
	}
	return 0;
} 