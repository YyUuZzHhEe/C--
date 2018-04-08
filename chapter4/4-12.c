#include <stdio.h>
int main ()
{
	int no,no1,cnt=0;
	do {
		printf ("请输入一个正整数：");
		scanf("%d",&no);
		if (no<=0)
			printf ("\a请不要输入非正数。");
	}while (no<=0);
	no1=no;
	while (no >0){
		no/=10;
		cnt++;
	} 
	printf ("%d的位数是%d。",no1,cnt);
	return 0;
} 