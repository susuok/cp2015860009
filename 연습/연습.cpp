#include <stdlib.h>
#include <stdio.h>

typedef struct node {
	int score;
	struct node* pNext;
}Node;

//함수 : avreageLL() + 순서도
//입력 : 연결리스트
//출력 : 노드 성적의 평균
//부수효과 : 없음
double averageLL(Node* ptr){
	int sum=0, count=0;
	double average;
	while(ptr != NULL) {
		sum += ptr-> score;
		count++;
		ptr = ptr->pNext;
	}
	average = ((double)sum)/count;
	return average;
}

int main () {
	double test;
	test = 10.0/4; //1. (10/4)-> 2,5 를 반환
	printf("test=%f\n", test); //결과값 2.0 integer 나누기 integer 이기때문.
	test = 10/4; //1.(10/4)->2를 반환.   2.정수형 2를 double형 2.0으로 변환   3. 10대신에 10.0 넣으면 2.5나온다 왜? 10.0으로쓰면 실수형
	printf("test=%f\n", test);
	test = ((double)10)/4; //정수형(int) 10을 실수형(double) 10.0으로 변환
	printf("test=%f\n", test);

	return 0;
}










