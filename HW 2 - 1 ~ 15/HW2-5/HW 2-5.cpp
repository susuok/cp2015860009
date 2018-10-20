#include <stdio.h>
int main () {

	int a=1, sum =0;
	do{ if(a%3 ==0)
		sum = sum + a;
	a++;
	}while(a <= 100);


	printf("1부터 100까지 3의 배수의 합은 = %d\n", sum);
	return 0;
}