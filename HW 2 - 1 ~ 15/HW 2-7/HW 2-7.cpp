#include <stdio.h>
int main () {
	int a, sum=0;
	while (1) {
		printf("������ �Է��Ͻÿ� : \n");
		scanf("%d" , &a);
		sum = sum + a;
		if (a == 0)
			break;

	}
	printf("0�� �Է��ϱ������� �Էµ� ������ ������ = %d\n", sum);
	return 0;
}