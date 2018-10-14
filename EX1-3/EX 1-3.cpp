#include <stdio.h>
int main () {
 int a, b, c;
	printf("첫번째 정수를 입력하시오 : \n");
	scanf("%d", &a);
	printf("두번째 정수를 입력하시오 : \n");
	scanf("%d", &b);
	printf("세번째 정수를 입력하시오 : \n");
	scanf("%d", &c);

if (a > b , a >c)
	printf("가장 큰 숫자는 = %d\n", a);

else if (b > a, b >c)
	printf("가장 큰 숫자는 = %d\n", b);

else 
	printf("가장 큰 숫자는 =%d\n", c);


return 0;
}