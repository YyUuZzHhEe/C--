#include <stdio.h>
int cube(int x){
	return x*x*x;
}
int main ()
{
	int x; 
	printf ("������һ��������\n");
	scanf ("%d",&x);
	printf ("%d��������%d��\n",x,cube(x));
	return 0;
} 