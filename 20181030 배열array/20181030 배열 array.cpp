#include <stdio.h>
//�Լ� printArray
//�Է� : �迭
//��� : ����
//�μ�ȿ�� : ȭ�鿡 ��� ��Ҹ� ���
//�迭�� �Լ�����⤷��...

void printArray(int arr[], int length) {
	int count = 0;
	while(count<length){
		printf("a[%d] = %d\n", count, arr[count]); // index �� ������ ���� �� �ִ�.
		count++;
	}
}

int main () {
	int len = 4;
	//int a[4]; 
	//�迭���� ���� ���̰� 4(n)�̴� index�� 3(n-1) ����
	//1. �迭�� �̸� : a
	//2. �� ����� �ڷ��� : int
	//3. �迭�� ���� : 4

	//a[0] = 20; //index �� 0���� ����
	//a[1] = 200;
	//a[2] = 2000;
	//a[3] = 20000;
	int a[4] = {2,20,200,2000}; //�迭 �ʱ�ȭ ����ڡڡ�(���۸�,PDF)

	printArray(a,len); //�迭�� �Ű������� (�迭�� �̸�a, �迭�� ���� len)
	
	printf("%d\n", a[100]);

	int arr[] = {3,30,300};//���� 3�� �迭 ����
	int count = 0;
	while(count<len){
		printf("a[%d] = %d\n", count, a[count]); // index �� ������ ���� �� �ִ�.
		count++;
	}

	//�迭�� �Ű������� �Լ��� ������ ���

	return 0;
}
// ������ ���Ѻ��� �ֱ׷��� �� �����غ���.�ڡڡڡڡڡڡڡڡ�
//�迭�� �Լ�����°� �����غ���. �迭���������,