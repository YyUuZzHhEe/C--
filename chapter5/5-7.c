#include <stdio.h>
#define AMMOUNT 4/* ���ݸ���*/
int main ()
{
	int i;
	int a[AMMOUNT];
	for (i=0;i<AMMOUNT;i++){
		printf ("%d��:",i+1);
		scanf("%d",&a[i]);
	}
	printf("{");
	for (i=0;i<AMMOUNT;i++){
		printf ("%d",a[i]);
		if (i<AMMOUNT-1){
			printf(",");
		}
	}
	printf ("}");
	
	return 0;
} 