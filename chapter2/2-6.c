#include <stdio.h>
int main (void)
{
	int hight;
	double weight;
	printf ("请输入您的身高： ");
	scanf ("%d",&hight);
	printf ("您的标准体重是%.1f公斤。",(hight-100)*0.9); 
	return 0;
} 
