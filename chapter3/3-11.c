#include <stdio.h>
int main  ()
{
	int A,B;
	printf("请输入两个整数:");
	printf("整数A："); scanf ("%d",&A); 
	printf("整数B："); scanf ("%d",&B); 
	if((A-B)<=10){
		printf ("它们的差小于等于10。\n");	
	}else printf ("它们的差大于等于11。\n");	
	
	return 0;
} 
