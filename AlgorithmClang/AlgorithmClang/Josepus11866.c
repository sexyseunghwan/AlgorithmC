#include <stdio.h>

int num_arr[1001];//�������� ����.
int main_11866_0()
{
	
	int n, k;//n �� ������, k�� �° �似Ǫ�� ������ �Ǻ�

	scanf("%d %d", &n, &k);
	
	//�ʱ� ���� ����
	for (int i = 0; i < n; ++i) {
		num_arr[i] = i + 1;
	}
 	
	int total_count = 0;//��ü ī��Ʈ
	int index = 0;//�ʱ���� �ε���
	int count = 0;//k�� �ɶ����� ī��Ʈ
	int new_index = 0;//������ ����� ������ �ε���.
	
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