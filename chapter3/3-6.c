# include <stdio.h>
int main()
{
	int a,b,c,min;
	printf ("��������������");
	 scanf ("%d%d%d",&a,&b,&c);
	 if (a>b){
	 	min=b;
	 }else 	{
	 	min=a;
	 }if (min>c){
	 	min=c;
	 }
	 
	 printf ("min=%d\n",min);
	return 0;
} 