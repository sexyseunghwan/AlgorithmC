#include <stdio.h>

int gcd(int a, int b);

int main_5618()
{
	/*
	
	����
	�ڿ��� n���� �־�����. �� �ڿ����� ������� ��� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.

	�Է�
	ù° �ٿ� n�� �־�����. n�� 2 �Ǵ� 3�̴�. ��° �ٿ��� ������� ���ؾ� �ϴ� �ڿ��� n���� �־�����. ��� �ڿ����� 108 �����̴�.

	���
	�Է����� �־��� n�� ���� ������� �� �ٿ� �ϳ��� �����ϴ� ������� ����Ѵ�.

	���� �Է� 1
	2
	75 125
	���� ��� 1
	1
	5
	25

	*/
	int n;
	scanf("%d", &n);

	if (n == 2) {
		int n1, n2;
		scanf("%d %d", &n1, &n2);
		int gcd1 = gcd(n1, n2);

		for (int i = 1; i <= gcd1; ++i) {
			if (gcd1 % i == 0) {
				printf("%d\n", i);
			}
		}
	}
	else {
		int n1, n2, n3;
		scanf("%d %d %d", &n1, &n2, &n3);
		int gcd1 = gcd(n1, n2);
		int gcd2 = gcd(gcd1, n3);

		for (int i = 1; i <= gcd2; ++i) {
			if (gcd2 % i == 0) {
				printf("%d\n", i);
			}
		}
	}

	return 0;
}

int gcd(int a, int b) {
	if (b == 0) {
		return a;
	}
	else {
		return gcd(b, a % b);
	}
}