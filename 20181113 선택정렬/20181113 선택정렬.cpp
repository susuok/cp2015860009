#include <stdio.h>
//�Լ� : findMinIndex()
//�Է� : �迭(�迭�̸�,�迭����)
//��� : �ּҰ��� �ε���
//�μ�ȿ�� : ����
int findMinIndex(int* arr, int length){
	int minindex=0;
	for(int count=1; count < length; count++){
		if (arr[minindex] > arr[count])
			minindex = count;
	}
	
	return minindex;
}
//�Լ� : findmin()
//�Է� : �迭(�迭�̸�, �迭����)
//��� : �迭 �ּҰ�
int findMin(int* arr, int length) {
	int min=arr[0];
	for(int count=1; count < length; count++){
		if (min > arr[count])
			min = arr[count];
	}
	return min;
}
//�Լ� : swapElemnt
//�Է� : �迭, �ΰ��� �ε���
//��� : ����
//�μ�ȿ�� : �迭�� ������ �ٲ�
void swapElement(int* arr,int j, int i){
	int temp = arr[i];
	arr[i] = arr[j];
	arr[j] = temp;

}
//�Լ� : selectionSort()
//�Է� : �迭
//��� : ����
//�μ�ȿ�� : �迭�� ���ĵʤ�
void selectionSort(int* arr, int length){
	int count=0;
	while(count < length){
	swapElement(arr , findMinIndex(arr,length), count);
	count++;
	}
}
int main () {
	int a[] = {30,35,15,27,40};
	selectionSort(a,5);
	
	printf("%d\n", a[0]);
	printf("%d\n", a[1]);
	printf("%d\n", a[2]);
	printf("%d\n", a[3]);
	printf("%d\n", a[4]);

	return 0;
}

//����