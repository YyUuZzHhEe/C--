#include <stdio.h>
int main ()
{
	int n,i,sum=0;
	printf ("n��ֵ��");
	scanf("%d",&n);
	for(i=1;i<=n;i++) {
		sum+=i;
	}
	printf("1��%d�ĺ�Ϊ%d��\n",n,sum);
	
		
	return 0;
} 