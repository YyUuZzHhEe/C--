#include <stdio.h>
int main ()
{
	int c;
	int cnt=0;
	while((c=(getchar())!=EOF){
		if (c=='\n'){
			cnt++;
		}
	}
	printf("您的输入一共有%d行\n",cnt );
	return 0;
}