#include <stdio.h>
#include <stdlib.h>
int main(){
	int a;
	int b;
	int c;
	c = rand()%100+1;
	for(b=0;b<10;b++){
		printf("1~100사이의 숫자하나를 입력하라. \n");
		scanf("%d",&a);	
		if (c < a){
			printf("입력하신 숫자보다 작습니다. \n\n\n");
		}
		else if (c ==a){
			printf("정답입니다! \n\n\n");
			break;
		}
		else {
			printf("입력하신 숫자보다 큽니다. \n\n\n");
		}
	}
	if(b==10)
		printf("GAME OVER.\n");

	return 0;
}