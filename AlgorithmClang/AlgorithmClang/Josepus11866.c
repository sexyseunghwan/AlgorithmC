#include <stdio.h>

int num_arr[1001];//전역변수 지정.
int main_11866_0()
{
	
	int n, k;//n 은 사람명수, k는 몇변째 요세푸스 수인지 판별

	scanf("%d %d", &n, &k);
	
	//초기 순열 생성
	for (int i = 0; i < n; ++i) {
		num_arr[i] = i + 1;
	}
 	
	int total_count = 0;//전체 카운트
	int index = 0;//초기순열 인덱스
	int count = 0;//k가 될때까지 카운트
	int new_index = 0;//답으로 도출될 수열의 인덱스.
	
	printf("<");
	while (total_count != n) {

		index %= n;
		
		if (num_arr[index] != 0) count++;

		if (count == k) {

			if (total_count == n - 1) printf("%d", num_arr[index]);
			else printf("%d, ", num_arr[index]);


			num_arr[index] = 0;
			total_count++;
			count = 0;
			new_index++;

		}

		index++;
	}
	printf(">");

	return 0;
}