#include <stdio.h>
//printArray()
//입력 : 배열
//출력 : 없음
//부수효과 : 화면에 배열의 값을 출력

// void printArray(int arr[], int len) 위아래. 이걸 써도 됨 ★★★★★ 근데 아래껄 쓸거야
void printArray(int* arr, int len) {
	for(int index=0; index<len; index++) {
		printf("array[%d] = %d\n", index, arr[index]);
	}
}
int main () {
	int a[3] = {10,20,30}; // 배열의 선언 : 배열이름 : a, 배열길이 : 3
	int* ptr;
	//배열의 이름만 사용하면 그 배열 첫 요소의 포인터값이 된다.
	ptr = a; // ==> ptr = &a[0];

	printf("a[0]= %d\n", *ptr);
	printf("a[0]= %d\n", a[0]);
	
	//포인터변수 이름을 배열 이름으로 사용 할 수 있따.	
	printf("a[0]= %d\n", ptr[0]);
	printf("a[1]= %d\n", ptr[1]);
	printf("a[2]= %d\n", ptr[2]);

	printArray(a,3);

	//     a=ptr; error (왼쪽 피연산자는 lvalue여야합니다.) 식이 수정할 수 있는 lvalue여야 합니다. 배열의 이름(a)은 값만 가지고 있다. 즉 rvalue이다.
    // 10=a[2]. error 위와 같은 이유

	return 0;
}