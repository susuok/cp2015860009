#include <stdio.h>
int main () {
	int a,b,c;
	printf("임의의 두자리 숫자의 십의자리를 입력하시오 : \n");
	scanf("%d", &a);
	printf("임의의 두자리 숫자의 일의자리를 입력하시오 : \n");
	scanf("%d", &b);
	
	if(c=10*b+a)
		printf("자릿값이 바뀐 두자리숫자인 c = %d\n",c);

return 0;
}