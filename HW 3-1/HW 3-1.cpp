//1. �� ���� ���̿� ��� ������(�� ���� ����)�� ������� ȭ�鿡 ����ϴ� �Լ�
#include <stdio.h>
//�Լ� : printNumber()
//�Է� : �� ����
//��� : ����
//�μ�ȿ�� : ����
void printNumber(int a, int b){
	int count = a;
	while(count <= b)
		printf("%d\n", count++);
}


int main(){
	int a =87, b=455;
	printNumber(a,b);
	printNumber(-20,-100);

	printf("end of program\n");

	return 0;
	//��ȯ���� ���� ������ ,,,,,???
}