#include <stdio.h>
int alert (int n){
	int i;
	for(i=1;i<=n;i++){
		putchar('\a');
	}
}
int main ()
{
	int n;
	printf ("需要响铃多少次：");
	scanf ("%d",&n);
	alert(n);
	return 0;
}