
//linked list 연습

#include <stdlib.h>
#include <stdio.h>

typedef struct node {
	int score;
	struct node* pNext; //요건 일단 받아들여보즈아
}Node;

typedef struct linkedlist {
	Node* pHead;
	Node* pTail;
	int nNode;
}LinkedList;


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
void printLL(LinkedList* pList){
	Node* ptr = pList->pHead;
	while (ptr != NULL){
		printf("scroe = %d\n", ptr->score); // 이런 구조 많이쓴다!
		ptr = ptr->pNext;
	}
}

//함수 : addHead()
//입력 : 연결리스트 구조체 포인터(LinkedList*) 새 노드 포인터
//출력 : 없음
//부수효과 : 연결리스트 헤드에 새 노드를 추가
void addHead(LinkedList* pList, Node* pNewNode){
	if(pList->pHead == NULL)
		pList -> pTail = pNewNode;

	pNewNode->pNext = pList->pHead;//#1 사진빨간글씨?
	pList->pHead = pNewNode;//#2
	pList->nNode++;
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
	LinkedList* pList;
	pList = (LinkedList*) malloc(sizeof(LinkedList)); //HEAP 영역에 메모리 할당받는거임.
	pList ->pHead = pList ->pTail =NULL; pList ->nNode = 0;
	addHead (pList, createNode(10));
	addHead (pList, createNode(20));
	addHead (pList, createNode(30));
	addHead (pList, createNode(40));
	//요거공부합시당... addHead랑! 더블포인터안쓰고 쓸력 이함수만든겨

	printLL(pList);

	return 0;
}










