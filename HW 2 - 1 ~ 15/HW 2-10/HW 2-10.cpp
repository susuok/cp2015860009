#include <stdio.h>
int main(){
	int a =0;
	int b=2;

		printf("������ �Է��Ͻÿ�. \n");
		scanf("%d",&a);
	
	
	printf("%d �� �μ��� ",a);

	for(int b=2;b<a;b++)
		if(a%b==0) printf("%d ",b);

	return 0;
}