#include <stdio.h>



int f1(x,y);
int f2(x, a, b);

int main_p()
{	
	int (*ft)(int x, int y);//함수 포인터 선언
	
	ft = f1;

	int result = f2(f1, 10, 20);
	
	printf("%d", result);
	

}

int f1(int x,int y) {
	return x + y;
}

int f2(int (*fp)(),int a,int b) {
	return fp(a, b);
}

