#include <stdio.h>
#include <string.h>
//void insertElement(int* arr, int ele){
//	while(ele>0)
//		if (arr[ele-1] > arr[ele])
//			swapElement(arr,ele-1,ele);
//		else
//			break;
//}

int main () {
	char c; //character (����)��
	c = 'A'; //c=65
	printf("c= %d\n",c);
	printf("c= %c\n",c);

	char a[] = {'h','e','l','l','o'};

	printf("%d\n",a[0]);
	printf("%c\n",a[1]);
	printf("%c\n",a[2]);
	printf("%c\n",a[3]);
	printf("%c\n",a[4]);

	char b[] = "hello"; //���ڿ��� (string)
	printf("%s\n",b);
	printf("the length of the string is %d\n", strlen(b)); //Ȩ�� ���������� ���� 4����.�ڡڡ�

	char str1[50] = "hello"; 
	char* str2 = "world";
	printf("%s\n", strcat(str1,str2)); //50�� ĭ���� üũ

	strcat(str1, str2);
	printf("%s\n",str1);
	strcpy(str1, str2); //2 �� 1�� ����ȴ�? 
	printf("%s \n", str1); // �� ��ĭ���� world �ƴ�¡? �������� null�� ����?

	return 0;
}

// ASC|| �ڵ�, insertElemnt ����.���µ��� �ڡڡ�