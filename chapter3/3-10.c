#include <stdio.h>
int main  ()
{
	int A,B,C;
	printf("��������������:");
	scanf ("%d%d%d",&A,&B,&C);
	if (A==B&&B==C){
		printf ("����ֵ����ȡ�\n");
	} else if (A!=B&&B!=C&&C!=A){
		printf ("����ֵ������ͬ��\n");
	}else 
	printf ("������ֵ��ȡ�\n");
	return 0;
} 
