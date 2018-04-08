#include <stdio.h>
int main ()
{
	int i,j,len;
	printf("生成直角在左上方的等腰直角三角形。\n短边："); scanf ("%d",&len) ;
	for (i=1;i<=len;i++){
		for(j=len;j>=i;j--){
			printf ("*");
		}
		for(j=len;j>=len-i;j--){
		printf(" ");
		}printf ("\n");
	}
	printf("生成直角在右上方的等腰直角三角形。\n短边："); scanf ("%d",&len) ;
	for (i=1;i<=len;i++){
		for(j=len;j>=len-i;j--){
		printf(" ");
		}
		for(j=len;j>=i;j--){
			printf ("*");
		}printf ("\n");
	}
	return 0;
	} 