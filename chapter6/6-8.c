#include <stdio.h>
int min_of(const int v[],int n){
	int i;
	int min=v[0];
	for(i=1;i<n;i++){
		if (v[i]<min){
			min=v[i];
		}
	}
	return min;
}
int main ()
{
	int i,n,min;
	int x[100];
	printf("��������ٸ�������"); scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("[%d]:",i+1);
		scanf("%d",&x[i]);
	} 
	min=min_of(x,n);
	printf ("��Щ���е���СֵΪ%d",min);
	return 0;
} 