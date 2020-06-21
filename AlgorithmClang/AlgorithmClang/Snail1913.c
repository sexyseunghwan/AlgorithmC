#include <stdio.h>


/*

Ȧ���� �ڿ��� N(3��N��999)�� �־�����, ������ ���� 1���� N2������ �ڿ����� ������ ������� N * N�� ǥ�� �þ���� �� �ִ�.

9	2	3
8	1	4
7	6	5


25	10	11	12	13
24	9	2	3	14
23	8	1	4	15
22	7	6	5	16
21	20	19	18	17
N�� �־����� ��, �̷��� ǥ�� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.���� N2 ������ �ڿ����� �ϳ� �־����� ��, �� ��ǥ�� �Բ� ����Ͻÿ�.���� ��� N = 5�� ��� 6�� ��ǥ��(4, 3)�̴�.


�Է�
ù° �ٿ� Ȧ���� �ڿ��� N�� �־�����. ��° �ٿ��� ��ġ�� ã���� �ϴ� N2 ������ �ڿ����� �ϳ� �־�����.

���
N���� �ٿ� ���� ǥ�� ����Ѵ�. �� �ٿ� N���� �ڿ����� �� ĭ�� �� ����ϸ� �Ǹ�, �ڸ����� ���� �ʿ䰡 ����. N+1��° �ٿ��� �Է¹��� �ڿ����� ��ǥ�� ��Ÿ���� �� ������ �� ĭ �� ����Ѵ�.

���� �Է� 1
7
35

���� ��� 1
49 26 27 28 29 30 31
48 25 10 11 12 13 32
47 24 9 2 3 14 33
46 23 8 1 4 15 34
45 22 7 6 5 16 35
44 21 20 19 18 17 36
43 42 41 40 39 38 37
5 7

*/

int n;
int matrix[1001][1001];

int main_1913()
{
	int prow[] = { 1,0,-1,0 };
	int pcol[] = { 0,1,-0,-1 };
	int flag = 0;


	int want_num;

	int row = 1;
	int col = 1;

	int f_row = 1;
	int f_col = 1;

	scanf("%d", &n);
	scanf("%d", &want_num);

	int number = n * n - 1;

	matrix[1][1] = n * n;

	for (int i = 1; i < n * n; ++i) {
		if (matrix[row + prow[flag % 4]][col + pcol[flag % 4]] != 0
			|| row + prow[flag % 4] > n || row + prow[flag % 4] < 1
			|| col + pcol[flag % 4] > n || col + pcol[flag % 4] < 1) {

			flag++;
			row += prow[flag % 4];
			col += pcol[flag % 4];
			matrix[row][col] = number;
			if (want_num == number) {
				f_row = row;
				f_col = col;
			}
			number--;

		}
		else {
			row += prow[flag % 4];
			col += pcol[flag % 4];
			matrix[row][col] = number;
			if (want_num == number) {
				f_row = row;
				f_col = col;
			}
			number--;

		}
	}


	for (int i = 1; i <= n; ++i) {
		for (int j = 1; j <= n; ++j) {
			printf("%d ", matrix[i][j]);
		}
		printf("\n");
	}

	printf("%d %d", f_row, f_col);


	return 0;
}

