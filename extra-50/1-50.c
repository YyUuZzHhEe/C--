#include <stdio.h>
int main ()
{
	int a,b,c;
	printf("请输入三个整数\n");
	scanf("%d%d%d",&a,&b,&c);
	if (a+b>c&&a+c>b&&b+c>a){
		if (a==b&&b==c){
			printf("1：以%d、%d、%d三边围成的三角形是等边三角形\n",a,b,c);
		}else if (a==b||b==c||a==c){
			printf("2:以%d、%d、%d三边围成的三角形是等腰三角形\n",a,b,c);
		}else {
				printf("3:以%d、%d、%d三边围成的三角形是任意三角形\n",a,b,c);
			}
	}else printf("0：tan90\n");
	return 0;
}