#include <stdio.h>
#include <math.h>
int main ()
{
    int n,i,j,a[100],tmp;
    printf("请输入要排序的数：");
    scanf("%d",&n);
    if (n!=0){
        for(i=0;i<n;i++){
            scanf("%d",&a[i]);
        }
    }
    for(i=0;i<n;i++)
        for(j=i+1;j<n;j++){
             if(abs(a[i])<abs(a[j])){
                 tmp=a[j];
                 a[j]=a[i];
                 a[i]=tmp;
             }
        }
    for(i=0;i<n;i++){
        printf("%d",a[i]);
    }
   
    return 0;
}