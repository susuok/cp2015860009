#include <stdio.h>
int main () {

	int a = 1, sum = 0;

	while(a<=100) {
		a++;
		if (a%3 == 0)
			sum = sum + a;
	}

	printf("0���� 100������ 3��� ������ = %d\n", sum);
	return 0;
}