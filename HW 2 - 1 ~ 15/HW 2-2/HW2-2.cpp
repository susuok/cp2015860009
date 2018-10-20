#include <stdio.h>
int main () {
 int a;  
   printf("첫번째 정수를 입력하시오: \n");
   scanf("%d" , &a);
    printf("입력받은 a = %d\n", a);
   int b;
   printf("두번째 정수를 입력하시오: \n");
   scanf("%d" , &b);
   printf("입력받은 b = %d\n", b);
   int c;
   printf("세번째 정수를 입력하시오: \n");
   scanf("%d" , &c);
   printf("입력받은 c = %d\n", c);
   int d;
   printf("네번째 정수를 입력하시오: \n");
   scanf("%d" , &d);
   printf("입력받은 d = %d\n", d);
   int e;
   printf("다섯번째 정수를 입력하시오: \n");
   scanf("%d" , &e);
   printf("입력받은 e = %d\n", e);
   int f;
   printf("여섯번째 정수를 입력하시오: \n");
   scanf("%d" , &f);
   printf("입력받은 f = %d\n", f);
   int g;
   printf("일곱번째 정수를 입력하시오: \n");
   scanf("%d" , &g);
   printf("입력받은 g = %d\n", g);
   int h;
   printf("여덟번째 정수를 입력하시오: \n");
   scanf("%d" , &h);
   printf("입력받은 h = %d\n", h);
   int i;
   printf("아홉번째 정수를 입력하시오: \n");
   scanf("%d" , &i);
   printf("입력받은 i = %d\n", i);
   int j;
   printf("열번째 정수를 입력하시오: \n");
   scanf("%d" , &j);
   printf("입력받은 j = %d\n", j);

   int sum = 0;
   {
      sum = a+b+c+d+e+f+g+h+i+j;
   }
   printf("총 합은 %d\n", sum);

	return 0;
}