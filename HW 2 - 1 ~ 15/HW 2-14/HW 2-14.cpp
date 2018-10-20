#include <stdio.h>
int main(){
	int a;
	int b=0;
	printf("7이상의 정수를 입력하시오. :");
	scanf("%d",&a);
	if(a>=7){
		for(int i=7;i<=a;i++){
			b+=i;
		}
		printf("7부터 입력한 수까지의 합은 %d 이다.\n",b);
		}
	else printf("7이상의 숫자를 입력하라구\n");
	return 0;
}