#include <stdio.h>
int main  ()
{
	int no;
	printf("请输入一个整数:");
	scanf ("%d",&no); 
	switch(no%2){
		case 0 :printf ("该整数是偶数。\n");break;
		case 1 :printf ("该整数是奇数。\n");break;
	}	
	
	return 0;
} 
