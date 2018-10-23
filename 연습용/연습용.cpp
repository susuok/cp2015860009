#include <stdio.h>
int main () {
	int a,b,c;
	printf("두 정수 입력하시오\n");
	scanf("%d%d", &a ,&b);

	while (b!=0){
		c = a%b;
		a = b;
		b = c;
	}

	printf("%d\n", a);
	return 0;
}