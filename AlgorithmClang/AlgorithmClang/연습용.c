#include <stdio.h>



int main_ringaringaring()
{	
	
	//char arr[2][2];
		
	//char* a = "asd";

	char s1[3] = "NE";
	char* p1;
	
	char s_arr[10];

	s_arr[0] = s1;

	printf("%c", s_arr[0]);

	//printf("%s", s1);
	
	//printf()











	/*char str1[3] = "ab";
	char str2[3] = "cd";
	char str3[3] = "ef";
	*/
	//int a = 123;
	
	//printf("%p\n", a);
	//printf("%p", &a);
	/*
	int arr[3];
	arr[0] = 1;
	arr[1] = 10;
	arr[2] = 100;

	printf("%d", *(arr + 1));
	*/

	//char* c_arr[] = {*str1,*str2};

	//printf("%s\n", c_arr[0]);
	//printf("%s\n", c_arr[1]);

	
	//printf("%p", c_arr[0]);
	//printf("%p", str1);
	
	//printf("%s", str);
	
	/*char* s1 = "apple";
	printf("%s", s1);
	*/

	


}

int f1(int x,int y) {
	return x + y;
}

int f2(int (*fp)(),int a,int b) {
	return fp(a, b);
}

