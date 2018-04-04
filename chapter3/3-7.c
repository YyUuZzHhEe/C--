# include <stdio.h>
int main()
{
	int a,b,c,d,min1,min2,min;
	printf ("请输入四个数：");
	 scanf ("%d%d%d%d",&a,&b,&c,&d);
	 if (a>b){
	 	min1=b;
	 }else 	{
	 	min1=a;
	 }if (c>d){
	 	min2=d;
	 }else {
	 	min2=c;
	 }
	 min=(min1>min2)?min2:min1;
	 
	 printf ("min=%d\n",min);
	return 0;
} 