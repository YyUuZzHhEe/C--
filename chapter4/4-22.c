#include <stdio.h>
int main ()
{
	int i,j,i1,j1,a,b;
	printf("����������һ�������Ρ�\nһ�ߣ�"); scanf ("%d",&a);
	printf ("��һ�ߣ�"); scanf ("%d",&b);
	if(a<b){
		i=a;j=b;
	} else {
		i=b;j=a;
	}
	for (i1=1;i1<=i;i1++){
		for (j1=1;j1<=j;j1++){
			printf ("*");
		}
		printf ("\n");
	}
	return 0;
	} 