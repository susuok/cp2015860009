#include <stdio.h>
int main(){
	int a =0;

		printf("1 ~ 9사이의 숫자를 입력하시오. \n");
		scanf("%d",&a);
		
	for(int b=1;b<10;b++){
		printf("%d X %d = %d\n",a,b,a*b);
	}
	return 0;
}