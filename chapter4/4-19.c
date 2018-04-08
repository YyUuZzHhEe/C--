#include <stdio.h>
int main ()
{
	int n,i,cnt=0;
	printf ("整数值：");scanf ("%d",&n);
	for (i=1;i<=n;i++){
		if (n%i==0){
			printf ("%d\n",i);
			cnt++;
		} 
	}
	printf ("约数有%d个。\n
		",cnt);
	return 0;
} 