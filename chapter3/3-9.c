#include <stdio.h>
int main  ()
{
	int a,b,c,min;
	printf("��������������:");
	scanf ("%d%d%d",&a,&b,&c);
	min=(a<b)?a:b;
	min=(min<c)?min:c;
	printf ("a,b,c,�е���СֵΪ%d��\n",min);
	return 0;
} 