#include <stdio.h>
int main ()
{
	int no,no1,cnt=0;
	do {
		printf ("������һ����������");
		scanf("%d",&no);
		if (no<=0)
			printf ("\a�벻Ҫ�����������");
	}while (no<=0);
	no1=no;
	while (no >0){
		no/=10;
		cnt++;
	} 
	printf ("%d��λ����%d��",no1,cnt);
	return 0;
} 