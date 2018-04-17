#include <stdio.h>
#define diff(x,y) ( (x)>(y)?(x-y):(y-x))
int main()
{
	int x,y;
	printf("请输入x和y的值\n");
	printf("x=");
	scanf("%d",&x);
	printf("y=");
	scanf("%d",&y);
	printf ("x与y的差值为%d\n",diff((x),(y)));
	return 0;
}