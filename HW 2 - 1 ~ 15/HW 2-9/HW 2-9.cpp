#include <stdio.h>
int main(){
	int a =0;
	do{
		printf("1~9사이의 숫자를 입력하시오. \n");
		scanf("%d",&a);
		
		if(a<1 || a>9){
			printf("1~9사이로 입력하라구요\n");
		}
	}while(a<1 || a>9);
	for(int b=1;b<10;b++){
		printf("%d X %d = %d\n",a,b,a*b);
	}
	return 0;
}