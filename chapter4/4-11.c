#include <stdio.h>
int main ()
{
	int no,no1;
	do {
		printf ("������һ����������");
		scanf("%d",&no);
		if (no<=0)
			puts ("\a�벻Ҫ�����������");
	}while (no<=0);
	no1=no;
	printf ("%d������ʾ�Ľ����",no1);
	while (no >0){
		printf ("%d",no%10);
		no/=10;
	}	 
	puts ("��");
	return 0;
} 