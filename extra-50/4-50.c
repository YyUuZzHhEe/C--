#include <stdio.h>
int gcd(int x, int y){
	int c=x%y;
	if (c==0){
		return y;
	}else {
		x=y;
		y=c;
		gcd (x,y);
}
}
int main ()
{
	int x,y,c;
	printf("请输入两个整数：\nx=");
	scanf("%d",&x);
	printf("y=");
	scanf ("%d",&y);
	c=gcd(x,y);
	printf("%d为%d,%d中的最大公因数\n",c,x,y);
	return 0;
}