#include <stdio.h>
int main ()
{
	int i,ch;
	int cnt[10]={0};
	while ((ch=getchar())!=EOF){
		if (ch>='0'&&ch<='9'){
			cnt[ch-'0']++;
		}
	}
	puts("数字出现的次数");
	for (int i = 0; i < 10; ++i)
	{
		printf("'%d':",i );
		for (int j = 0; j < cnt[i]; j++)
		{
			printf("* ");
		}
	printf("\n");
	}
	return 0;
}