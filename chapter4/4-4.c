#include <stdio.h>
int main ()
{
	int no,no1;
	printf ("������һ����������");
	scanf ("%d",&no);
	no1=no;
	while (no>0){
		printf ("%d ",no--);
	}
	if (no1>=0)
	printf ("\n");
	return 0;
} 