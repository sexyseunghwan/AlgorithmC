#include <stdio.h>

int arr[1001];//전역변수 지정.
int main_11866_1() {
	
	int n, k, count = 0;

	scanf("%d %d", &n, &k);

	printf("<");

	int real_num = 1;

	for (int i = 1; i <= n; i++) {
		
		count = 0;

		while (1) {
			
			
			if (arr[real_num] == 0) count++;

			//카운트가 k가 되었을 경우에.
			if (count == k) {
				arr[real_num] = 1;

				if (i == n) printf("%d>", real_num);
				else printf("%d, ", real_num);

				break;
			}
			real_num++;

			if (real_num > n) real_num %= n;
			
		}

	}

	return 0;
}