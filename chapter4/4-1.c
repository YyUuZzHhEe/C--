#include <stdio.h>
int main ()
{
	int retry;
	do {
		int no ;
		printf ("������һ��������");
		scanf ("%d",&no);
		if (no==0)
			puts("������Ϊ0");
		else if (no>0)
			puts ("������Ϊ������");
		else 
			puts ("������Ϊ������"); 
		printf ("Ҫ�ظ�һ���𣿡�Yes...0/No...9����");
		scanf ("%d",&retry);
	} while (retry==0);
	
	return 0;
} 