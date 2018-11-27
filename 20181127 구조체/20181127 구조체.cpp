#include <stdio.h>
//구조체 선언 : 기존의 타입으로 구성하여 새로운 데이터 타입을 선언한다.
struct complex {
	double real; //멤버 변수 (member variable)
	double imag; // 상동(ditto)
}; // 구조체선언은 ; 로 끝난다.
typedef struct complex Complex; //자료형 "struct complex"를 앞으로 "Complex" 라고 부르겠다.

//위의 두문장을 한문장으로 만들 수 있다. ↓↓↓↓↓

//typedef struct complex{
//}Complex;

//함수 conjugate()
//입력 : 복소수(포인터) 복소수는 왠만하면 포인터로 선언한다.
//출력 : 없음
//부수효과 : 입력된 복소수가 켤레 복소수로 변환됨
void convertToConjugate (Complex* ptr) {
	ptr-> imag = -1 * ptr->imag;
}

// 함수 returnConjugate()
//입력 : 복소수 포인터
//출력 : 복소수 변수
//부수효과 : 없음

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

//요녀석의 정체는 무엇인가.








//함수 printComplex()
//입력 : 복소수
//출력 : 없음
//부수효과 : 없음
void printComplex (Complex* ptr) { //모든 경우 구조체의 포인터를 매개변수로 전달 받는다
	
	printf("%f + j%f\n", ptr -> real, ptr -> imag);
}


//데이터 타입의 별칭 선언
typedef int myintType; // 자료형 "int"를 앞으로 "myintType" 라고도 부르겠드아.
int main () {
	myintType count = 10; // ==> int count = 10;
	//구조체 변수 선언
	struct complex a;
	Complex b;
	a.real = 10; //구조체변수의 멤버변수 접근방법 ==> 구조체변수이름. 멤버변수이름
	a.imag = 20;
	b.real = 15;
	b.imag = 16;

	

	printf("%f + j%f\n", a.real, a.imag);
	printf("%f + j%f\n", b.real, b.imag);
	

	//구조체 포인터 변수 선언
	//대부분 구조체는 포인터 변수를 사용하여 접근한다.
	Complex* ptr;
	ptr = &a;
	ptr -> real = 100; //구조체 포인터 변수 (ptr) 의 멤버변수 접근방법 ==> 구조체변수이름 -> 멤버변수이름
	ptr -> imag = 200;
	convertToConjugate(&a);
	
	printComplex(&a);
	//ptr = printComplex(&a); ★★★ 위의 정체모를것에 대한 함수호출. 왜 원하는 값이 안나오는지.
	b = returnConjugate(&a);
	printComplex(&b);


	return 0;
}

//복습하즈아 ★★★ 다음시간에 연관된거하는데 동적구조? 예습.