#include <stdio.h>
int pn(int x,int n){
	int p;
	if (n = 0)
	{
		p = 1;
	}
	if (n = 1)
	{
		p = x;
	}
	if (n > 1)
	{
		p = ((2*n-1)*x-pn(x,n-1)-(n-1)*pn(x,n-2))/n;
	}
	return p;
}
int main (){
	int p,x,n;
	printf("请输入pn（x）中的x =");
	scanf("%d",&x);
	printf("n =");
	scanf("%d",&n);
	p=pn(x,n);
	printf("pn(x) = %d\n",p );
	return 0;
}