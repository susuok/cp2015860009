#include <stdio.h>
int main(){
	int a =0;

		printf("1 ~ 9������ ���ڸ� �Է��Ͻÿ�. \n");
		scanf("%d",&a);
		
	for(int b=1;b<10;b++){
		printf("%d X %d = %d\n",a,b,a*b);
	}
	return 0;
}