#include <stdio.h>
int main ()
{
	int i,j,i1,j1,a,b;
	printf("让我们来画一个长方形。\n一边："); scanf ("%d",&a);
	printf ("另一边："); scanf ("%d",&b);
	if(a<b){
		i=a;j=b;
	} else {
		i=b;j=a;
	}
	for (i1=1;i1<=i;i1++){
		for (j1=1;j1<=j;j1++){
			printf ("*");
		}
		printf ("\n");
	}
	return 0;
	} 