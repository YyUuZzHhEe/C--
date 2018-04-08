#include <stdio.h>
#define NUMBER 7     /*数组元素个数为7*/
int main ()
{
	int i;
	int x[NUMBER];
	for (i=0;i<7;i++){
		printf ("x[%d]:",i);
		scanf ("%d",&x[i]);
	}
	for (i=0;i<3;i++){
		int temp =x[i];
		x[i]=x[6-i];
		x[6-i]=temp;
	}
	for (i=0;i<7;i++){
		printf("x[%d]=%d\n",i,x[i]);
	}
	return 0;
} 