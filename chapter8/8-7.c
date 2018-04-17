#include <stdio.h>
int factorial(int n){
	int f;
	if(n>0)
		f=n*factorial(n-1);
	else 
		f=1;
	return f;
}
int conbination(int n, int r){
	int c;
	c=factorial(n)/(factorial(r)*factorial(n-r));
	return c;
}
int main ()
{
	int n,r;
	printf ("要求从n个整数中取出r个整数的组合数，其中\nn=");
	scanf("%d",&n);
	printf("r=");
	scanf("%d",&r);
	printf("从%d个整数中取出%d个整数的组合数为%d.\n",n,r,conbination(n,r));
	return 0;
}