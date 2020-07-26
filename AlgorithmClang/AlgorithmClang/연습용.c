#include <stdio.h>



int main_123()
{	
	
	char a[10] = "101";

	printf("%d", a[0] - '0');


}

int f1(int x,int y) {
	return x + y;
}

int f2(int (*fp)(),int a,int b) {
	return fp(a, b);
}

