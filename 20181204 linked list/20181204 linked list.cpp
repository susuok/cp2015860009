
//linked list ����

#include <stdlib.h>
#include <stdio.h>

typedef struct node {
	int score;
	struct node* pNext; //��� �ϴ� �޾Ƶ鿩�����
}Node;


//�Լ� : avreageLL()
//�Է� : ���Ḯ��Ʈ
//��� : ��� ������ ���
//�μ�ȿ�� : ����
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

//�Լ� : printLL() ȭ�鿡 ���Ḯ��Ʈ�� score���� ���
//�Է� : ���Ḯ��Ʈ (���Ḯ��Ʈ�� ����� ������)
//��� : ����
//�μ�ȿ�� : ����
void printLL(Node* ptr){
	while (ptr != NULL){
		printf("scroe = %d\n", ptr->score); // �̷� ���� ���̾���!
		ptr = ptr->pNext;
	}
}

//�Լ� : addHead()
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

//�Լ� : returnTail()
//�Է� : ���Ḯ��Ʈ (���Ḯ��Ʈ�� ����� ������)
//��� : ������ ����� ������
//�μ�ȿ�� : ����
Node* returnTail(Node* ptr){
	if (ptr == NULL) //���Ḯ��Ʈ�� ��尡 ����
		return NULL; //��������Ͱ� ���̶�����, ���Ḯ��Ʈ�� �ƹ��͵� ����!

	while (ptr != NULL){
		if (ptr->pNext == NULL) //����������� ��
			return ptr;
		ptr = ptr->pNext;
	}
}

//�Լ� : addTail()
//�Է� : ���Ḯ��Ʈ, �߰��Ϸ��� ��� ������
//��� : ����
//�μ�ȿ�� : �߰��Ϸ��� ��尡 ���Ḯ��Ʈ�� tail�� �߰���.
void addTail (Node* pHead, Node* pNode){
	if (pHead == NULL){
		printf("�ڡڡ�error can't add a tail to empty linked list�ڡڡ� \n");
		return;
	}
	Node* pTail = returnTail(pHead);
	pTail -> pNext = pNode;
}

int main () {

	Node* pHead=NULL, *ptr; //������� ������. NULL �̸� ���Ḯ��Ʈ�� ���ٴ� �ǹ�(�� �������.)
	//Node a,b;
	//a.score = 10;
	//b.score = 20;
	//a.pNext = &b;
	//b.pNext = NULL; //null �� �ּҰ� 0?              <<<=== createNode �Լ��� ���� �ڸ�Ʈó��
	//pHead = &a;

	pHead = createNode(11);

	//pHead -> pNext = createNode(20);

	ptr = createNode(20);
	addHead(&pHead,ptr); // �����ϰ� �غ��ڡڡڡ� 20 11 100 ������ ���;���
	printLL(pHead);
	addTail(pHead,createNode(100));

	printf("average = %f\n", averageLL(pHead));

	pHead = NULL;
	addTail(pHead,createNode(100)); //Tail �Լ� ����, NULL ������ �Լ��� ������... �����̶� �ٷ������� �� ���Դϴ�... �����ϼ���
	printf("average = %f\n", averageLL(pHead));

	return 0;
}
//���µ� think�ڡڡ�

//��尡 ������¥���ΰɷ� �Լ������, �ֹ��� ��ũ�� ����Ʈ����.




