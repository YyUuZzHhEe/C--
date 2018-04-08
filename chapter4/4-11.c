#include <stdio.h>
int main ()
{
	int no,no1;
	do {
		printf ("请输入一个正整数：");
		scanf("%d",&no);
		if (no<=0)
			puts ("\a请不要输入非正数。");
	}while (no<=0);
	no1=no;
	printf ("%d逆向显示的结果是",no1);
	while (no >0){
		printf ("%d",no%10);
		no/=10;
	}	 
	puts ("。");
	return 0;
} 