#include <stdio.h>
int main () {

	int a=1, sum =0;
	do{ if(a%3 ==0)
		sum = sum + a;
	a++;
	}while(a <= 100);


	printf("1���� 100���� 3�� ����� ���� = %d\n", sum);
	return 0;
}