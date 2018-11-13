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
	printf("a = %d\n", a); // a = 10 나옴. *&a 해도 10나옴ㅋ why? 순서맞춰서 상태도그리면서 생각해보즈아.

	//포인터를 매개변수값으로 전달 ★★★★★
	testPointer(&a);
	printf("a = %d\n",a);
	return 0;
}