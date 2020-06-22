#include <stdio.h>

int gcd(int a, int b);

int main_5618()
{
	/*
	
	문제
	자연수 n개가 주어진다. 이 자연수의 공약수를 모두 구하는 프로그램을 작성하시오.

	입력
	첫째 줄에 n이 주어진다. n은 2 또는 3이다. 둘째 줄에는 공약수를 구해야 하는 자연수 n개가 주어진다. 모든 자연수는 108 이하이다.

	출력
	입력으로 주어진 n개 수의 공약수를 한 줄에 하나씩 증가하는 순서대로 출력한다.

	예제 입력 1
	2
	75 125
	예제 출력 1
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