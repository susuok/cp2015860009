#include <stdio.h>

void swap(int* ptr1, int* ptr2) {
	int temp; 
	temp = *ptr1;
	*ptr1 = *ptr2;
	*ptr2 = temp;
}


int main () {
	int a = 100, b=200;
	//swap : 변수 a,b, 값을 바꾼다.

   swap(&a,&b);

	printf("a=%d, b=%d\n",a,b);

	return 0;
}

// 이 또한 상태도를 그려보즈아~ 강의일정 11까지