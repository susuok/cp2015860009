#include <stdio.h>
int main () {
int a;
	printf("������ �Է��Ͻÿ� : \n");
	scanf("%d", &a);
	if (80 <= a && a <=100)
		printf("�� ������ ����� A�Դϴ�. \n");
	else if ( 60 <= a && a <= 80) 
		printf("�� ������ ����� B�Դϴ�. \n");
	else if ( 40 <= a && a < 60 )
		printf("�� ������ ����� C�Դϴ�. \n");
	else if ( 20 <= a && a < 40 )
		printf("�� ������ ����� D�Դϴ�. \n");
	
	else 
		printf("�� ������ ����� E�Դϴ�. \n");
	
	return 0;
}