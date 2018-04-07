#include <stdio.h>
int main ()
{
	int i=2,no,no1;
	printf ("请输入一个正整数：");
	scanf ("%d",&no);
	no1=no;
	while (no>=2&&i<=no){
		printf ("%d ",i);
		i+=2;
	}
	if (no1>=0)
	printf ("\n");
	return 0;
} 