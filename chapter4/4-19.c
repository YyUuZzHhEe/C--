#include <stdio.h>
int main ()
{
	int n,i,cnt=0;
	printf ("����ֵ��");scanf ("%d",&n);
	for (i=1;i<=n;i++){
		if (n%i==0){
			printf ("%d\n",i);
			cnt++;
		} 
	}
	printf ("Լ����%d����\n
		",cnt);
	return 0;
} 