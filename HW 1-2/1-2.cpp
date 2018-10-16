#include <stdio.h>
int main () {
	int a;
	printf("정수를 입력하시오 : \n");
	scanf("%d", &a);

	if (a%2==0)
		printf("이 수는 짝수입니다 \n.");

	else
	printf("이 수는 홀수입니다. \n");
	

return 0;
}