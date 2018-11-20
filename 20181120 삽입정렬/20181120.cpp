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
	char c; //character (문자)형
	c = 'A'; //c=65
	printf("c= %d\n",c);
	printf("c= %c\n",c);

	char a[] = {'h','e','l','l','o'};

	printf("%d\n",a[0]);
	printf("%c\n",a[1]);
	printf("%c\n",a[2]);
	printf("%c\n",a[3]);
	printf("%c\n",a[4]);

	char b[] = "hello"; //문자열임 (string)
	printf("%s\n",b);
	printf("the length of the string is %d\n", strlen(b)); //홈피 강의일정에 종류 4가지.★★★

	char str1[50] = "hello"; 
	char* str2 = "world";
	printf("%s\n", strcat(str1,str2)); //50개 칸만들어서 체크

	strcat(str1, str2);
	printf("%s\n",str1);
	strcpy(str1, str2); //2 가 1로 저장된다? 
	printf("%s \n", str1); // 왜 빈칸띄우고 world 아니징? 마지막에 null로 정리?

	return 0;
}

// ASC|| 코드, insertElemnt 연습.상태도도 ★★★