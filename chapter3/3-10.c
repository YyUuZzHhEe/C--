#include <stdio.h>
int main  ()
{
	int A,B,C;
	printf("请输入三个整数:");
	scanf ("%d%d%d",&A,&B,&C);
	if (A==B&&B==C){
		printf ("三个值都相等。\n");
	} else if (A!=B&&B!=C&&C!=A){
		printf ("三个值各不相同。\n");
	}else 
	printf ("有两个值相等。\n");
	return 0;
} 
