#include <stdio.h>
#include <string.h>

/*
문제
창영이는 여러 가지 진법을 공부하고 있다. 창영이는 어제 2진법을 배웠고, 오늘은 8진법을 배웠다. 
이제, 2진법 수를 8진법 수로 변환하려고 한다.

창영이가 사용한 방법은 다음과 같다.

2진수의 길이가 3으로 나누어 떨어질 때 까지 수의 앞에 0을 붙인다.
그 다음, 3자리씩 그룹을 나눈다.
아래의 표를 참고해 8진수로 바꾼다.
2진수가 주어졌을 때, 창영이가 사용한 방법을 이용해 8진수로 바꾸는 프로그램을 작성하시오.

000	0
001	1
010	2
011	3
100	4
101	5
110	6
111	7

입력
첫째 줄에 2진수가 주어진다. 이 수는 100자리 이내이고, 첫 번째 자리는 1이다.

출력
첫째 줄에 8진수를 출력한다.

예제 입력 1
1010

예제 출력 1
12


*/

void m1();
void m2();

int main_2998() 
{
	m1();
	//m2();
}

void m1() 
{
	char input[105];
	int num[105];

	scanf("%s", &input);

	int len = strlen(input);//입력한 길이

	int s = len - 1;
	int j = 0;

	while (s > 1) {

		num[j++] = (input[s] - '0') * 1 + (input[s - 1] - '0') * 2 + (input[s - 2] - '0') * 4;
		
		s -= 3;

	}

	if (s == 1) {
		num[j++] = (input[s] - '0') * 1 + (input[s - 1] - '0') * 2;
	}
	else if (s == 0) {
		num[j++] = (input[s] - '0') * 1;
	}

	for (int i = j - 1; i >= 0; i--) {
		printf("%d", num[i]);
	}


	return 0;
}



void m2()
{
	char input_num[200];//입력되는 이진수


	scanf("%s", &input_num);

	//할때마다 메모리 할당을 직접 해줘야 하는건가??



	while (strlen(input_num) % 3 != 0) {

		int str_len = strlen(input_num);
		strcat(input_num, "0");

		for (int i = str_len; i > 0; --i) {
			input_num[i] = input_num[i - 1];
		}

		input_num[0] = '0';

	}//자릿수 만들어주기


	char answer[35] = "";//최종적인 답이된다.

	int final_strlen = strlen(input_num);//최종적인 숫자의 길이


	for (int i = 0; i < final_strlen; i = i + 3) {
		int temp = 0;
		int digit = 100;//자리수 지정을 위해 정수를 선언

		for (int j = i; j < i + 3; j++) {

			temp += (input_num[j] - '0') * digit;

			digit /= 10;
		}

	}



	/*for (int i = 0; i < final_strlen; i = i + 3) {
		char temp[] = "";
		for (int j = i; j < i + 3; j++) {
			strcat(temp, input_num[j]);
		}
		printf("%s\n", temp);
	}*/

}