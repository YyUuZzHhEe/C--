#include <stdio.h>
int main  ()
{
	int no;
	printf("������һ������:");
	scanf ("%d",&no); 
	switch(no%2){
		case 0 :printf ("��������ż����\n");break;
		case 1 :printf ("��������������\n");break;
	}	
	
	return 0;
} 
