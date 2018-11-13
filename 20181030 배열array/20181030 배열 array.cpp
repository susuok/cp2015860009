#include <stdio.h>
//함수 printArray
//입력 : 배열
//출력 : 없음
//부수효과 : 화면에 모든 요소를 출력
//배열로 함수만들기ㅇㅇ...

void printArray(int arr[], int length) {
	int count = 0;
	while(count<length){
		printf("a[%d] = %d\n", count, arr[count]); // index 에 변수도 넣을 수 있다.
		count++;
	}
}

int main () {
	int len = 4;
	//int a[4]; 
	//배열선언 실제 길이가 4(n)이니 index는 3(n-1) 까지
	//1. 배열의 이름 : a
	//2. 각 요소의 자료형 : int
	//3. 배열의 길이 : 4

	//a[0] = 20; //index 는 0부터 시작
	//a[1] = 200;
	//a[2] = 2000;
	//a[3] = 20000;
	int a[4] = {2,20,200,2000}; //배열 초기화 방법★★★(구글링,PDF)

	printArray(a,len); //배열을 매개변수로 (배열의 이름a, 배열의 길이 len)
	
	printf("%d\n", a[100]);

	int arr[] = {3,30,300};//길이 3의 배열 생성
	int count = 0;
	while(count<len){
		printf("a[%d] = %d\n", count, a[count]); // index 에 변수도 넣을 수 있다.
		count++;
	}

	//배열을 매개변수로 함수에 던지는 방법

	return 0;
}
// 컴파일 시켜보고 왜그런지 함 생각해보자.★★★★★★★★★
//배열로 함수만드는거 직접해보기. 배열먼저만들고,