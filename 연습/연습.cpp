#include <stdio.h>
void insertSort( int *data, int n )
{
  int i, j, remember;
  for ( i = 1; i < n; i++ )
  {
    remember = data[(j=i)];
    while ( --j >= 0 && remember < data[j] ){
        data[j+1] = data[j];
        data[j] = remember;
    }
  }
}

int main () {
	int a[] = {534,2,54,16345,4254};
	insertSort(a,5);

	printf("%d\n", a[0]);
	printf("%d\n", a[1]);
	printf("%d\n", a[2]);
	printf("%d\n", a[3]);
	printf("%d\n", a[4]);
	return 0;
}

//insertSort 연습해보자 상태도도. 빡셀수도있음.