#include <stdio.h>
int main ()
{
	int i=0,cnt;
	printf("��������");
	scanf ("%d",&cnt);
	if (cnt>0){
		while (i++<cnt){
		putchar ('*');
	}
	putchar ('\n');
	}
	return 0;
} 