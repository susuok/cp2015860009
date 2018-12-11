#include <stdio.h>
#include <math.h>
#include <stdlib.h>
//구조체 선언 : 기존의 데이터 타입으로 구성하여 새로운 데이터 타입을 선언한다.
/*
struct complex {
   double real; //멤버 변수(member variable)
   double imag; //상동(ditto)
}; //반드시 세미콜론으로 끝내야 한다.
*/

//데이터 타입의 별명 선언
typedef struct complex Complex;//자료형 struct complex 를 앞으로 Complex 라고도 부르겠다.

typedef struct complex{
   double real;
   double imag; 
} Complex;

typedef int myintType;//자료형 int를 앞으로 myintType 이라고도 부르겠다

//함수 printComplex()
//입력 : 복소수
//출력 : 없음
//부수효과 : 없음
void printComplex(Complex *ptr){//모든 경우 구조체의 포인터를 매개변수로 전달 받는다.
   printf("%f + j%f\n", ptr->real, ptr->imag);
}
//함수 : conjugate()
//입력 : 복소수(포인터)
//출력 : 없음
//부수효과 : 입력된 복소수가 켤레 복소수로 변환됨
void convertToconjugate(Complex* ptr){
   //허수부에 -1을 곱한다
   ptr->imag = -1*ptr->imag;
}
//함수 : returnConjugate()
//입력 : 복소수 포인터
//출력 : 복소수 변수
//부수효과 : 없음
Complex* returnConjugate(Complex* ptr) {
   //Complex temp;
   Complex* tempPtr;
   tempPtr = (Complex*) malloc(sizeof(Complex));//동작할당 (HEAP 공간에서 <16바이트>sizeof(Complex) 라는 공간을 확보)
                                     //처음 8바이트는 real, 다음 8바이트는 imag -> Complex
   tempPtr -> real = ptr->real; tempPtr -> imag = -1 * ptr->imag;
   return tempPtr;
}

int main() {
   myintType count = 10;
   Complex a,b;
   //구조체 변수선언
   //struct complex a;
   Complex* ptr;
   a.real = 10; //구조체 변수의 멤버변수 접근방법 ==> 구조체변수이름.멤버변수이름
   a.imag = 20; 
   printComplex(&a);
   ptr = returnConjugate(&a); printComplex(ptr);
   //convertToconjugate(&a); printComplex(&a);
   free(ptr); printComplex(ptr);

   //구조체 포인터 변수 선언
   //대부분 구조체는 포인터 변수를 사용하여 접근한다.
   ptr = &a;
   ptr->real = 100;//구조체 포인터 변수의 멤버변수 접근방법 ==> 구조체 변수이름->멤버변수이름
   ptr->imag = 200;
    //printComplex(ptr);

return 0;
}	