#include <stdio.h>
#include <string.h>

char input_num[1001];//�Է¼���

/*
����
���� ���� N�� ������ ��Ʈ�� ���Ϸ��� N�� �̷�� �ִ� ��� �ڸ����� ���ؾ� �Ѵ�. 
�̶�, ���� ���� �� �ڸ� ���ڶ��, �� ���� N�� ������ ��Ʈ�� �ȴ�. 
�� �ڸ� �̻� ������ ��쿡�� �ٽ� �� ���� �̷�� �ִ� ��� �ڸ����� ���ؾ� �ϸ�, �� �ڸ� ���ڰ� �� �� ���� �ݺ��Ѵ�.

24�� ������ ��Ʈ�� ���غ���. 2+4=6�̴�. 6�� �� �ڸ� �����̱� ������, 24�� ������ ��Ʈ�� 6�� �ȴ�. 
39�� ��쿡�� 3+9=12�̱� ������, �� �� �� ���ؾ� �Ѵ�. ����, 1+2=3�� ������ ��Ʈ�� �ȴ�.

���� ���� N�� �־����� ��, �� ���� ������ ��Ʈ�� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.

�Է�
�� �ٿ� �ϳ��� ���� ������ �־�����. �Է��� ������ ���� 0���� ��Ÿ����.  
���� �ִ� 1000�ڸ��̴�.

���
�Է����� �־��� ���� ������ ������ ��Ʈ�� �� �ٿ� �ϳ��� �־��� ������� ����Ѵ�.

���� �Է� 1
24
39
0
���� ��� 1
6
3

*/

int main() {

	//ù��° Ǯ��
	
	while (1) {
		scanf("%s", &input_num);//���� �Է¹ޱ�
		int sum = 0;//��ü ���Ѱ�

		for (int i = 0; i < strlen(input_num); ++i) {
			sum += input_num[i] - '0';//���ڷ� ��ȯ -> �ƽ�Ű �ڵ带 ��ȯ�ϴ°�
		}

		if (sum != 0) {

			while (sum > 9) {
				int sum2 = sum;
				sum = 0;

				for (; sum2 > 0; sum2 /= 10) {
					sum += sum2 % 10;
				}
			}

			printf("%d\n", sum);

		}
		else {
			//���Ѱ��� 0 �̸� �����ش�
			break;
		}
	}
}