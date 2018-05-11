#include <stdio.h>
int gongyueshu(int a,int b){
	int c,min,i;
	min=a;
	if (a>b)
	{
		min=b;
	}
	for (i = min; i > 0; i--)
	{
		if (a%i==0&&b%i==0)
		{
			c=i;
			break;
		}
	}
	return c;
}
int gongbeishu(int a,int b){
	int max,c,i;
	max=a;
	if (b>a)
	{
		max=b;
	}
	for(i=max;;i++){
		if (i%a==0&&i%b==0){
			c=i;
			break;
		}
	}
	return c;
}
int main ()
{
	int a,b,bei,yue;
	printf("请输入两个整数：\n");
	scanf("%d%d",&a,&b);
	yue=gongyueshu(a,b);
	printf("a和b的最大公约数为%d\n",yue );
	bei=gongbeishu(a,b);
	printf("a和b的最小公倍数为%d\n",bei );
	return 0;
}
