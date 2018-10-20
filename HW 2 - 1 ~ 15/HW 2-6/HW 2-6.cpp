#include <stdio.h>
int main () {

	int a,b;
	printf("정수를 입력하시오 : \n");
	scanf("%d", &a);

	if (a <= 0) {
		printf("입력한 정수는 양수가아닙니다. 에러 \n");
	}
	else {
		b = 2*a;
		printf("입력한 정수의 두배는 = %d\n", b);
	}



	return 0;
}