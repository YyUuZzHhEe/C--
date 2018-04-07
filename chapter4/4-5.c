#include <stdio.h>
int main ()
{
	int i=1,no,no1;
	printf ("请输入一个正整数：");
	scanf ("%d",&no);
	no1=no;
	while (i<=no){
		printf ("%d ",i++);
	}
	if (no1>=0)
	printf ("\n");
	return 0;
} 