#include <stdio.h>
int main () {
	int sum = 0, a;

	for(a = 0; a<= 100; a++)
	if (a%3 == 0)
		sum = sum + a;



	printf("0부터 100까지의 3배수 총합은 = %d\n", sum);
	return 0;
}