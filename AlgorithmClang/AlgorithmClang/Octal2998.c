#include <stdio.h>
#include <string.h>

/*
����
â���̴� ���� ���� ������ �����ϰ� �ִ�. â���̴� ���� 2������ �����, ������ 8������ �����. 
����, 2���� ���� 8���� ���� ��ȯ�Ϸ��� �Ѵ�.

â���̰� ����� ����� ������ ����.

2������ ���̰� 3���� ������ ������ �� ���� ���� �տ� 0�� ���δ�.
�� ����, 3�ڸ��� �׷��� ������.
�Ʒ��� ǥ�� ������ 8������ �ٲ۴�.
2������ �־����� ��, â���̰� ����� ����� �̿��� 8������ �ٲٴ� ���α׷��� �ۼ��Ͻÿ�.

000	0
001	1
010	2
011	3
100	4
101	5
110	6
111	7

�Է�
ù° �ٿ� 2������ �־�����. �� ���� 100�ڸ� �̳��̰�, ù ��° �ڸ��� 1�̴�.

���
ù° �ٿ� 8������ ����Ѵ�.

���� �Է� 1
1010

���� ��� 1
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

	int len = strlen(input);//�Է��� ����

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
	char input_num[200];//�ԷµǴ� ������


	scanf("%s", &input_num);

	//�Ҷ����� �޸� �Ҵ��� ���� ����� �ϴ°ǰ�??



	while (strlen(input_num) % 3 != 0) {

		int str_len = strlen(input_num);
		strcat(input_num, "0");

		for (int i = str_len; i > 0; --i) {
			input_num[i] = input_num[i - 1];
		}

		input_num[0] = '0';

	}//�ڸ��� ������ֱ�


	char answer[35] = "";//�������� ���̵ȴ�.

	int final_strlen = strlen(input_num);//�������� ������ ����


	for (int i = 0; i < final_strlen; i = i + 3) {
		int temp = 0;
		int digit = 100;//�ڸ��� ������ ���� ������ ����

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