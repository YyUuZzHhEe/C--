#include <stdio.h>
int main ()
{
	int i,j,x;
	for (i = 6; i < 1000; ++i)
	{
		for (j = 2,x=1; j <= i; ++j)
			{
				if (i%j==0)
				{
					x+=j;
				}
			}
	if (x==i)
	{
		printf("%d是完数。\n", x);
	}
	}
	return 0;
}