#include <stdio.h>
void test (int a) {
	a = 100;
}
void testPointer(int* ptr){
*ptr = 100;
}
int main () {
	int a = 10;
	test(a);
	printf("a = %d\n", a); // a = 10 ����. *&a �ص� 10���Ȥ� why? �������缭 ���µ��׸��鼭 �����غ����.

	//�����͸� �Ű����������� ���� �ڡڡڡڡ�
	testPointer(&a);
	printf("a = %d\n",a);
	return 0;
}