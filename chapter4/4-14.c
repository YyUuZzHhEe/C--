#include <stdio.h>
int main ()
{
	int n,i,j=1;
	printf ("������һ��������");
	scanf("%d",&n);
	for (i=1;i<=n;i++){
		printf ("%d",j);
		j++;
		if (j>9)
			j-=10; 
	}
	printf("\n");
	return 0;
} 