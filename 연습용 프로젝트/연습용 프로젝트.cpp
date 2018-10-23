#include <stdio.h>
int main () {
	int a,b,c;
	a = 100;
	b = 75;
	if (a > b){
		while (b!=0){
			c = a%b;
			a = b;
			b = c;
		}
	}
	printf("%d\n", &b);
}