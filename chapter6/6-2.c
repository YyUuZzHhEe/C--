#include <stdio.h>
int min3 (int a, int b, int c){
	int min=a;
	if(b<min) min=b;
	if(c<min) min=c;
	return min;
}
int main ()
{
	int a,b,c;
	printf ("请输入三个整数：\n");
	printf ("整数a："); scanf ("%d",&a);
	printf ("整数b："); scanf ("%d",&b);
	printf ("整数c："); scanf ("%d",&c);
	printf ("最小值是%d。",min3(a,b,c));
	return 0;
} 