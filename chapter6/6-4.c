#include <stdio.h>
int sqr(int x){
	return x*x;
}
int pow4 (int x){
	return sqr(x)*sqr(x);
}
int main ()
{
	int x; 
	printf ("������һ������:");
	scanf ("%d",&x);
	printf ("%d���Ĵ�����%d��\n",x,pow4 (x));
	return 0;
} 