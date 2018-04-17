#include <stdio.h>
#define swap(type,a,b){type tmp; tmp=a; a=b; b=tmp;}
int main()
{
	int a,b;
	printf("请输入a，b的值：\na=");
	scanf("%d",&a);
	printf("b=");
	scanf("%d",&b);
	//读取两个数a,b
	swap(int,a,b)
	printf("a，b交换后，a=%d,b=%d",a,b);
	return 0;
}