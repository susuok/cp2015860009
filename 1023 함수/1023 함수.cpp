#include <stdio.h>

int gVar = 100; // 얘는 함수안에있는게 아니니 이 소스코드에서 전부 사용가능 = 전역변수(global variable)
//쓰지말것.

//함수 sum() 
//입력 : 두 정수
//출력 : 두 정수의 합
//부수효과 : 없음

int sum(int a, int b) //함수선언 [1. 함수이름 선언(sum) 2. 괄호안에있는거(a,b) 매개변수의 개수 선언 3. 매개변수들의 자료형 선언, 4. 반환값의 자료형] 
	//위 4가지는 함수 호출하기위해 필요한 정보
{
	static int c;  
	c = a+b; a=100; // +x 추가하면 error. 변수의 이름들은 유효한 범위가 있다. 함수유효범위
	return c;
	//a=100; 얘가 왜 반영이 안되는지 생각해보즈아 ★★★



} // 함수본체

//위에꺼 @@@함수정의@@@

//함수 : goodPrint()
//입력 : 없음
//출력 : 없음
//부수효과 : 화면에 good 출력
void goodPrint () {
	printf("good\n");


}





int main () {
	int x=10, y=20, z;
	z = sum(x, y); //함수호출★

	printf("z=%d\n", z);
	goodPrint();



	return 0;
}