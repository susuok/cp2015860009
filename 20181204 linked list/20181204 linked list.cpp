
//linked list ����

#include <stdlib.h>
#include <stdio.h>

typedef struct node {
	int score;
	struct node* pNext; //��� �ϴ� �޾Ƶ鿩�����
}Node;

//�Լ�printLL() ȭ�鿡 ���Ḯ��Ʈ�� score���� ���
//�Է� : ���Ḯ��Ʈ (���Ḯ��Ʈ�� ����� ������)
//��� : ����
//�μ�ȿ�� : ����
void printLL(Node* ptr){
	while (ptr != NULL){
		printf("scroe = %d\n", ptr->score); // �̷� ���� ���̾���!
		ptr = ptr->pNext;
	}
}

//�Լ� addHead()
//�Է� : ���Ḯ��Ʈ, �� ���
//��� : ����
//�μ�ȿ�� : ���Ḯ��Ʈ ��忡 �� ��带 �߰�
void addHead(Node** ppHead, Node* pNewNode){
	pNewNode -> pNext = *ppHead;
	*ppHead = pNewNode;
}

//�Լ� creatNode() 
//�Է� : ����
//��� : ����ϳ��� �����Ҵ����� �����Ͽ� ��ȯ�Ѵ�. �̶� scroe=�Է�, pNext = NULL�� �Ѵ�.
//�μ�ȿ�� : ����
Node* createNode (int input) {
	Node* ptr;
	ptr = (Node*) malloc(sizeof(Node));
	ptr -> score = input;
	ptr -> pNext = NULL;
	return ptr;
}

int main () {
	Node* pHead=NULL, *ptr; //������� ������. NULL �̸� ���Ḯ��Ʈ�� ���ٴ� �ǹ�(�� �������.)
	//Node a,b;
	//a.score = 10,
	//b.score = 20;      
	//a.pNext = &b; 
	//b.pNext = NULL; //null �� �ּҰ� 0?              <<<=== createNode �Լ��� ���� �ڸ�Ʈó��
	//pHead = &a;
	pHead = createNode(10);
	//pHead -> pNext = createNode(20);
	ptr = createNode(20);
	addHead(&pHead,ptr); // �����ϰ� �غ��ڡڡڡ�
	printLL(pHead);

	return 0;
}

//���µ� think�ڡڡ�