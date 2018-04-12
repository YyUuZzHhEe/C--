#include <stdio.h>
int sumup (int n){
	int sum=0,i;
	for(i=1;i<=n;i++){
		sum+=i;
	}
	return sum;
}
int main ()
{
	int n;
	printf ("请输入一个整数：");
	scanf ("%d",&n);
	printf("1+2+...+%d=%d\n",n,sumup (n)); 
	return 0;
}
