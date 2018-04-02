#include <stdio.h>
int main ()
{
	int A,B;
	printf ("请输入两个整数。\n整数A：");
	scanf("%d",&A);
	printf ("整数B：");
	scanf ("%d",&B);
	if (A>B) 
		printf ("A大于B。\n");
			else if (A=B) 
				printf ("A等于B。\n");
	else printf("A<B。\n"); 
	return 0;
}