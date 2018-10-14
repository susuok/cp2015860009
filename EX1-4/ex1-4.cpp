#include <stdio.h>
int main () {
int a;
	printf("점수를 입력하시오 : \n");
	scanf("%d", &a);
	if (80 <= a && a <=100)
		printf("이 점수의 등급은 A입니다. \n");
	else if ( 60 <= a && a <= 80) 
		printf("이 점수의 등급은 B입니다. \n");
	else if ( 40 <= a && a < 60 )
		printf("이 점수의 등급은 C입니다. \n");
	else if ( 20 <= a && a < 40 )
		printf("이 점수의 등급은 D입니다. \n");
	
	else 
		printf("이 점수의 등급은 E입니다. \n");
	
	return 0;
}