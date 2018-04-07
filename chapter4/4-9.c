#include <stdio.h>
int main ()
{
	int i=0,cnt;
	printf("ÕýÕûÊý£º");
	scanf ("%d",&cnt);
	if (cnt>0){
		while (i<cnt){
		if (++i%2!=0){
			putchar ('+');
		}else 
			putchar ('-');
	}
	putchar ('\n');
	}
	return 0;
} 