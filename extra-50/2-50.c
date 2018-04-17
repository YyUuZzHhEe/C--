#include <stdio.h>
int main ()
{
	int a,b，type;
	printf("请输入两门的成绩：\n");
	scanf("%d%d",&a,&b);
	if (a>=60&&b>=60)
	{
		type=1;
	}
	if (a<60||b<60)
	{
		type=2;
	}
	if (a<0||b<0||a>100||b>100)
	{
		type=3;
	}
	switch(tpye){
		case 1:printf("it is pass.\n");break;
		case 2:printf("it is not pass.\n");break;
		case 3:printf("it is error.\n");break;
		default:break;
	}
	return 0;
}