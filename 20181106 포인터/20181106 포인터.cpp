#	include <stdio.h>
int main() {

	int a=10; // ���� ���� + ���� �ʱ�ȭ
	int* ptr; //�����ͺ��� ����
	ptr = &a; //& : "address of" a, ���� a�� �ּ�(���� a�� ���� �Ҵ��� �޸��� ù��° �ּ�)
	*ptr = 20; // *ptr : "data of" ptr, �����ͺ��� ptr�� ����Ű�� ���� ������
	printf("a=%d\n",a);

	return 0;
}

//������غ���	a, &a, &ptr, 
// ������ - ���µ� �K�� �߿���