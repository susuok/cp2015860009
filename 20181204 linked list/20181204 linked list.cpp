
//linked list 연습

#include <stdlib.h>
#include <stdio.h>

typedef struct node {
	int score;
	struct node* pNext; //요건 일단 받아들여보즈아
}Node;

//함수printLL() 화면에 연결리스트의 score값을 출력
//입력 : 연결리스트 (연결리스트의 헤드노드 포인터)
//출력 : 없음
//부수효과 : 없음
void printLL(Node* ptr){
	while (ptr != NULL){
		printf("scroe = %d\n", ptr->score); // 이런 구조 많이쓴다!
		ptr = ptr->pNext;
	}
}

//함수 addHead()
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

int main () {
	Node* pHead=NULL, *ptr; //헤드노드의 포인터. NULL 이면 연결리스트가 없다는 의미(로 약속하자.)
	//Node a,b;
	//a.score = 10,
	//b.score = 20;      
	//a.pNext = &b; 
	//b.pNext = NULL; //null 은 주소가 0?              <<<=== createNode 함수를 만들어서 코멘트처리
	//pHead = &a;
	pHead = createNode(10);
	//pHead -> pNext = createNode(20);
	ptr = createNode(20);
	addHead(&pHead,ptr); // 가능하게 해보자★★★
	printLL(pHead);

	return 0;
}

//상태도 think★★★