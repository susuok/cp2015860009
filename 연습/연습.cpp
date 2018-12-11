#include <stdlib.h>
#include <stdio.h>

typedef struct node {
	int score;
	struct node* pNext;
}Node;

//�Լ� : avreageLL() + ������
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

int main () {
	double test;
	test = 10.0/4; //1. (10/4)-> 2,5 �� ��ȯ
	printf("test=%f\n", test); //����� 2.0 integer ������ integer �̱⶧��.
	test = 10/4; //1.(10/4)->2�� ��ȯ.   2.������ 2�� double�� 2.0���� ��ȯ   3. 10��ſ� 10.0 ������ 2.5���´� ��? 10.0���ξ��� �Ǽ���
	printf("test=%f\n", test);
	test = ((double)10)/4; //������(int) 10�� �Ǽ���(double) 10.0���� ��ȯ
	printf("test=%f\n", test);

	return 0;
}










