#include <stdio.h>
#include <math.h>



/*
����
â���̴� ȭ������ ������ �ٴڿ� ������.

����̴� �ٴ��� �������� ���� ���� â���̸� �ſ� ȥ�´�.

�����̴� ��ó���� �ڽ��� �߰��ߴ�.

����̴� �����̰� �߰��� �ڽ��� ����̿��� �־���.

����̴� �ڽ��� ���� ������ ��� ��ƿ���� ���״�.

������, �ڽ��� ���� �ʴ� ���ɵ� �ִ�.

�̷� ������ �ڽ��� ���� �ʰ� ����̿��� �� ���̴�.

������ �ڽ��� ������, �ڽ��� �ظ鿡 ������ ��� ��ƾ� �Ѵ�.

�ڽ��� ũ��� ������ ���̰� �־����� ��, ������ �ڽ��� �� �� �ִ��� �������� ���ϴ� ���α׷��� �ۼ��Ͻÿ�. 
â���̴� ������ �ϳ��� �˻��Ѵ�.

�Է�
ù° �ٿ� ���� ������ ���� N�� �ڽ��� ���� ũ�� W�� ���� ũ�� H�� �־�����. (1 �� N �� 50, 1 �� W, H �� 100)

���� N�� �ٿ��� ������ ���̰� �־�����. ���̴� 1���� ũ�ų� ���� 1000���� �۰ų� ���� �ڿ����̴�.

���
�Է����� �־����� ������ ���ɿ� ���ؼ�, �ڽ��ȿ� �� �� ������ "DA" ������ "NE"�� ����Ѵ�.

���� �Է� 1
5 3 4
3
4
5
6
7
���� ��� 1
DA
DA
DA
NE
NE


*/


int total_matches[1001];

void m1_3034();
void m2_3034();

int main() 
{	

	//m1_3034();
	m2_3034();

	
	
}

void m1_3034() 
{
	//ù��° Ǯ��
	
	int matches_count;//������ ����
	int match_w;//������ ���α���
	int match_h;//������ ���α���

	scanf("%d %d %d", &matches_count, &match_w, &match_h);

	int max_length_square = match_w * match_w + match_h * match_h;//������ �� �� �ִ� �ִ� ���� ����
	double max_length = pow(max_length_square, 0.5);//������ �� �� �ִ� �ִ���� ������


	for (int i = 0; i < matches_count; ++i) {
		int temp;
		scanf("%d", &temp);

		if (temp <= max_length) total_matches[i] = 1;

	}

	for (int i = 0; i < matches_count; ++i) {
		if (total_matches[i] == 1) printf("DA\n");
		else printf("NE\n");
	}

}

void m2_3034()
{
	//�ι�° Ǯ��

	int matches_count;//������ ����
	int match_w;//������ ���α���
	int match_h;//������ ���α���

	scanf("%d %d %d", &matches_count, &match_w, &match_h);

	while(matches_count--) {
		int temp;// ������ ���� : �������� �Է��� ���̹Ƿ�
		scanf("%d", &temp);
		
		temp* temp <= match_w * match_w + match_h * match_h ? puts("DA") : puts("NE");

	}


}