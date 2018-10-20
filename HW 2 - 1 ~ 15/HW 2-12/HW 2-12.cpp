#include <stdio.h>
int main(){
	int a;
	int b;
		printf("정수를 입력하라. \n");
		scanf("%d",&a);
		b = a;
	while(a != 0){
		printf("정수를 입력하라. \n");
		scanf("%d",&a);		
		if (b < a){
			b = a;
		}
	}
		printf("입력한 수 중 가장 큰 수는 %d 이다.\n",b);
	return 0;
}