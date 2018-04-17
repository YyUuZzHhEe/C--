#include <stdio.h>
#define max(x,y) ((x)>(y)?(x):(y))
int main ()
{
	int a,b,c,d,x,y,z,w,p;
	printf("请输入四个整数:\n");
	printf("a=");
	scanf("%d",&a);
	printf("b=");
	scanf("%d",&b);
	printf("c=");
	scanf("%d",&c);
	printf("d=");
	scanf("%d",&d);
	//读取四个数
	x=max(a,b);
	printf("max(a,b)=%d\n",x);
	y=max(c,d);
	printf("max(c,d)=%d\n",y);
	p=max(x,y);
	printf("max(max(a,b),max(c,d))=%d\n",p);
	z=max(x,c);
	printf("max(max(a,b),c)=%d\n",z);
	w=max(z,d);
	printf("max(max(a,b),c),d)=%d\n", w);
	return 0;
}
