#include <stdio.h>
int main ()
{
	int i,j,len;
	printf("����ֱ�������Ϸ��ĵ���ֱ�������Ρ�\n�̱ߣ�"); scanf ("%d",&len) ;
	for (i=1;i<=len;i++){
		for(j=len;j>=i;j--){
			printf ("*");
		}
		for(j=len;j>=len-i;j--){
		printf(" ");
		}printf ("\n");
	}
	printf("����ֱ�������Ϸ��ĵ���ֱ�������Ρ�\n�̱ߣ�"); scanf ("%d",&len) ;
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