#include <stdio.h>
int main () {
	int a, sum=0;
	while (1) {
		printf("정수를 입력하시오 : \n");
		scanf("%d" , &a);
		sum = sum + a;
		if (a == 0)
			break;

	}
	printf("0을 입력하기전까지 입력된 정수의 총합은 = %d\n", sum);
	return 0;
}