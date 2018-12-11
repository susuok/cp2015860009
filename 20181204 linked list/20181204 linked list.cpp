
//linked list 연습

#include <stdlib.h>
#include <stdio.h>

typedef struct node {
	int score;
	struct node* pNext; //요건 일단 받아들여보즈아
}Node;


//함수 : avreageLL()
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

//함수 : printLL() 화면에 연결리스트의 score값을 출력
//입력 : 연결리스트 (연결리스트의 헤드노드 포인터)
//출력 : 없음
//부수효과 : 없음
void printLL(Node* ptr){
	while (ptr != NULL){
		printf("scroe = %d\n", ptr->score); // 이런 구조 많이쓴다!
		ptr = ptr->pNext;
	}
}

//함수 : addHead()
//입력 : 연결리스트, 새 노드
//출력 : 없음
//부수효과 : 연결리스트 헤드에 새 노드를 추가
void addHead(Node** ppHead, Node* pNewNode){
	pNewNode -> pNext = *ppHead;
	*ppHead = pNewNode;
}

//함수 creatNode()
//입력 : 성적
//출력 : 노드하나를 동적할당으로 생성하여 반환한다. 이때 scroe=입력, pNext = NULL로 한다.
//부수효과 : 없음
Node* createNode (int input) {
	Node* ptr;
	ptr = (Node*) malloc(sizeof(Node));
	ptr -> score = input;
	ptr -> pNext = NULL;
	return ptr;
}

//함수 : returnTail()
//입력 : 연결리스트 (연결리스트의 헤드노드 포인터)
//출력 : 마지막 노드의 포인터
//부수효과 : 없음
Node* returnTail(Node* ptr){
	if (ptr == NULL) //연결리스트에 노드가 없음
		return NULL; //헤드포인터가 널이라함은, 연결리스트에 아무것도 없다!

	while (ptr != NULL){
		if (ptr->pNext == NULL) //마지막노드라는 뜻
			return ptr;
		ptr = ptr->pNext;
	}
}

//함수 : addTail()
//입력 : 연결리스트, 추가하려는 노드 포인터
//출력 : 없음
//부수효과 : 추가하려는 노드가 연결리스트의 tail로 추가됨.
void addTail (Node* pHead, Node* pNode){
	if (pHead == NULL){
		printf("★★★error can't add a tail to empty linked list★★★ \n");
		return;
	}
	Node* pTail = returnTail(pHead);
	pTail -> pNext = pNode;
}

int main () {

	Node* pHead=NULL, *ptr; //헤드노드의 포인터. NULL 이면 연결리스트가 없다는 의미(로 약속하자.)
	//Node a,b;
	//a.score = 10;
	//b.score = 20;
	//a.pNext = &b;
	//b.pNext = NULL; //null 은 주소가 0?              <<<=== createNode 함수를 만들어서 코멘트처리
	//pHead = &a;

	pHead = createNode(11);

	//pHead -> pNext = createNode(20);

	ptr = createNode(20);
	addHead(&pHead,ptr); // 가능하게 해보자★★★ 20 11 100 순서로 나와야함
	printLL(pHead);
	addTail(pHead,createNode(100));

	printf("average = %f\n", averageLL(pHead));

	pHead = NULL;
	addTail(pHead,createNode(100)); //Tail 함수 예로, NULL 넣으면 함수가 터져요... 이줄이랑 바로윗줄이 그 예입니다... 조심하세요
	printf("average = %f\n", averageLL(pHead));

	return 0;
}
//상태도 think★★★

//노드가 여러개짜리인걸로 함수만들면, 쌍방향 링크드 리스트가능.




