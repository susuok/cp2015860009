#include <stdio.h>
int main () {
	int sum = 0, a;

	for(a = 0; a<= 100; a++)
	if (a%3 == 0)
		sum = sum + a;



	printf("0���� 100������ 3��� ������ = %d\n", sum);
	return 0;
}