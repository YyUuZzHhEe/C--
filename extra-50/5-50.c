#include <stdio.h>
int main ()
{
	int i=1,n,c,cnt=0;
	for (int n = 2; n <=100; n++)
	{
		do {
			i++;
			c=n%i;
	} while (c!=0);
			if (i==n){
		printf("%4d",n);
		cnt++;
		i=1;
	}
	if (cnt%5==0){
		printf("\n");
	}
	}
	return 0;
}