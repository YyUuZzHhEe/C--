//不是很懂枚举类型啊.....就到这个程度....了
#include <stdio.h>
enum sex { male, female,invalid };
void male(void){
	printf("boy\n");
}
void female(void){
	printf("girl\n");
}
enum sex select(void){
	int tmp;
	do {
		printf("0...女  1...男：\n");
		scanf("%d",&tmp);
	}while (tmp<male||tmp>invalid);
	return tmp;
}
int main()
{
	enum sex selected;
	do {
		switch (selected=select()){
			case male	: male();	break;
			case female	:female();	break;	
		}
	}while (switch!=invalid);
	return 0;
}
//enum season { spring, summer, autumn, winter };   
