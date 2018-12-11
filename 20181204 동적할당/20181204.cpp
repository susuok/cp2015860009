#include <stdio.h>
#include <math.h>
#include <stdlib.h>
//����ü ���� : ������ ������ Ÿ������ �����Ͽ� ���ο� ������ Ÿ���� �����Ѵ�.
/*
struct complex {
   double real; //��� ����(member variable)
   double imag; //��(ditto)
}; //�ݵ�� �����ݷ����� ������ �Ѵ�.
*/

//������ Ÿ���� ���� ����
typedef struct complex Complex;//�ڷ��� struct complex �� ������ Complex ��� �θ��ڴ�.

typedef struct complex{
   double real;
   double imag; 
} Complex;

typedef int myintType;//�ڷ��� int�� ������ myintType �̶�� �θ��ڴ�

//�Լ� printComplex()
//�Է� : ���Ҽ�
//��� : ����
//�μ�ȿ�� : ����
void printComplex(Complex *ptr){//��� ��� ����ü�� �����͸� �Ű������� ���� �޴´�.
   printf("%f + j%f\n", ptr->real, ptr->imag);
}
//�Լ� : conjugate()
//�Է� : ���Ҽ�(������)
//��� : ����
//�μ�ȿ�� : �Էµ� ���Ҽ��� �ӷ� ���Ҽ��� ��ȯ��
void convertToconjugate(Complex* ptr){
   //����ο� -1�� ���Ѵ�
   ptr->imag = -1*ptr->imag;
}
//�Լ� : returnConjugate()
//�Է� : ���Ҽ� ������
//��� : ���Ҽ� ����
//�μ�ȿ�� : ����
Complex* returnConjugate(Complex* ptr) {
   //Complex temp;
   Complex* tempPtr;
   tempPtr = (Complex*) malloc(sizeof(Complex));//�����Ҵ� (HEAP �������� <16����Ʈ>sizeof(Complex) ��� ������ Ȯ��)
                                     //ó�� 8����Ʈ�� real, ���� 8����Ʈ�� imag -> Complex
   tempPtr -> real = ptr->real; tempPtr -> imag = -1 * ptr->imag;
   return tempPtr;
}

int main() {
   myintType count = 10;
   Complex a,b;
   //����ü ��������
   //struct complex a;
   Complex* ptr;
   a.real = 10; //����ü ������ ������� ���ٹ�� ==> ����ü�����̸�.��������̸�
   a.imag = 20; 
   printComplex(&a);
   ptr = returnConjugate(&a); printComplex(ptr);
   //convertToconjugate(&a); printComplex(&a);
   free(ptr); printComplex(ptr);

   //����ü ������ ���� ����
   //��κ� ����ü�� ������ ������ ����Ͽ� �����Ѵ�.
   ptr = &a;
   ptr->real = 100;//����ü ������ ������ ������� ���ٹ�� ==> ����ü �����̸�->��������̸�
   ptr->imag = 200;
    //printComplex(ptr);

return 0;
}	