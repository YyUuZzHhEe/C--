#include <stdio.h>
int main ()
{
	int a,i;
	printf ("����ֵ:"); scanf ("%d",&a);
	for (i=1;i<=a;i++){
		if (i%2!=0){
			printf ("%d ",i);
		}
	}
	printf("\n");

	return 0;
} 