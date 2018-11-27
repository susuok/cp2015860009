#include <stdio.h>
//����ü ���� : ������ Ÿ������ �����Ͽ� ���ο� ������ Ÿ���� �����Ѵ�.
struct complex {
	double real; //��� ���� (member variable)
	double imag; // ��(ditto)
}; // ����ü������ ; �� ������.
typedef struct complex Complex; //�ڷ��� "struct complex"�� ������ "Complex" ��� �θ��ڴ�.

//���� �ι����� �ѹ������� ���� �� �ִ�. ������

//typedef struct complex{
//}Complex;

//�Լ� conjugate()
//�Է� : ���Ҽ�(������) ���Ҽ��� �ظ��ϸ� �����ͷ� �����Ѵ�.
//��� : ����
//�μ�ȿ�� : �Էµ� ���Ҽ��� �ӷ� ���Ҽ��� ��ȯ��
void convertToConjugate (Complex* ptr) {
	ptr-> imag = -1 * ptr->imag;
}

// �Լ� returnConjugate()
//�Է� : ���Ҽ� ������
//��� : ���Ҽ� ����
//�μ�ȿ�� : ����

Complex returnConjugate(Complex *ptr){
	Complex temp;
	temp.real = ptr-> real;
	temp.imag =  -1 * ptr-> imag;
	return temp;
}


//Complex* returnConjugate(Complex *ptr){
//	Complex temp;
//	temp.real = ptr-> real;
//	temp.imag =  -1 * ptr-> imag;
//	return &temp;
//}

//��༮�� ��ü�� �����ΰ�.








//�Լ� printComplex()
//�Է� : ���Ҽ�
//��� : ����
//�μ�ȿ�� : ����
void printComplex (Complex* ptr) { //��� ��� ����ü�� �����͸� �Ű������� ���� �޴´�
	
	printf("%f + j%f\n", ptr -> real, ptr -> imag);
}


//������ Ÿ���� ��Ī ����
typedef int myintType; // �ڷ��� "int"�� ������ "myintType" ��� �θ��ڵ��.
int main () {
	myintType count = 10; // ==> int count = 10;
	//����ü ���� ����
	struct complex a;
	Complex b;
	a.real = 10; //����ü������ ������� ���ٹ�� ==> ����ü�����̸�. ��������̸�
	a.imag = 20;
	b.real = 15;
	b.imag = 16;

	

	printf("%f + j%f\n", a.real, a.imag);
	printf("%f + j%f\n", b.real, b.imag);
	

	//����ü ������ ���� ����
	//��κ� ����ü�� ������ ������ ����Ͽ� �����Ѵ�.
	Complex* ptr;
	ptr = &a;
	ptr -> real = 100; //����ü ������ ���� (ptr) �� ������� ���ٹ�� ==> ����ü�����̸� -> ��������̸�
	ptr -> imag = 200;
	convertToConjugate(&a);
	
	printComplex(&a);
	//ptr = printComplex(&a); �ڡڡ� ���� ��ü�𸦰Ϳ� ���� �Լ�ȣ��. �� ���ϴ� ���� �ȳ�������.
	b = returnConjugate(&a);
	printComplex(&b);


	return 0;
}

//��������� �ڡڡ� �����ð��� �����Ȱ��ϴµ� ��������? ����.