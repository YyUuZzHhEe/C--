#include <stdio.h>

int main() {
    int A,B;
    printf("请输入两个整数。\n整数A：");
    scanf("%d",&A);
    printf("整数B：");
    scanf("%d",&B);
    if(A%B)
        printf("B不是A的约数");
    else printf("B是A的约数。\n");
    return 0;
}