#include <stdio.h>
int min (int a ,int b)
{   
    int min;
    min = a < b ? a:b;
    return min;
}
int main ()
{
    int a,b;
    puts("����������������");
    printf("����1��");     scanf("%d", &a);
    printf("����2��");     scanf("%d", &b);
	printf("��Сֵ��%d��\n",min (a,b));

    return 0;
}
