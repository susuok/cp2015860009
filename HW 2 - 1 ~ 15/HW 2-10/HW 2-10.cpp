#include <stdio.h>
int main(){
	int a =0;
	int b=2;

		printf("정수를 입력하시오. \n");
		scanf("%d",&a);
	
	
	printf("%d 의 인수는 ",a);

	for(int b=2;b<a;b++)
		if(a%b==0) printf("%d ",b);

	return 0;
}