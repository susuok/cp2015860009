#include <stdio.h>
int main(){
	int a;
	int b=0;
	printf("7�̻��� ������ �Է��Ͻÿ�. :");
	scanf("%d",&a);
	if(a>=7){
		for(int i=7;i<=a;i++){
			b+=i;
		}
		printf("7���� �Է��� �������� ���� %d �̴�.\n",b);
		}
	else printf("7�̻��� ���ڸ� �Է��϶�\n");
	return 0;
}