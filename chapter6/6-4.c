#include <stdio.h>
int sqr(int x){
	return x*x;
}
int pow4 (int x){
	return sqr(x)*sqr(x);
}
int main ()
{
	int x; 
	printf ("请输入一个整数:");
	scanf ("%d",&x);
	printf ("%d的四次幂是%d。\n",x,pow4 (x));
	return 0;
} 