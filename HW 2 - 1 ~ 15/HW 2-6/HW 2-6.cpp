#include <stdio.h>
int main () {

	int a,b;
	printf("������ �Է��Ͻÿ� : \n");
	scanf("%d", &a);

	if (a <= 0) {
		printf("�Է��� ������ ������ƴմϴ�. ���� \n");
	}
	else {
		b = 2*a;
		printf("�Է��� ������ �ι�� = %d\n", b);
	}



	return 0;
}