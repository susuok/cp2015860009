#include <stdio.h>
void nafla(int *a){
	*a=100;
}
int main () {
	int a=10;
	nafla(&a);

	printf("%d\n",a);

	return 0;
}