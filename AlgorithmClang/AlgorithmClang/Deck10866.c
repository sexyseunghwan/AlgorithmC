#include <stdio.h>
#include <string.h>



/*
	����
	������ �����ϴ� ��(Deque)�� ������ ����, �Է����� �־����� ����� ó���ϴ� ���α׷��� �ۼ��Ͻÿ�.
	
	����� �� ���� �����̴�.
	
	push_front X: ���� X�� ���� �տ� �ִ´�.
	push_back X: ���� X�� ���� �ڿ� �ִ´�.
	pop_front: ���� ���� �տ� �ִ� ���� ����, �� ���� ����Ѵ�. ����, ���� ����ִ� ������ ���� ��쿡�� -1�� ����Ѵ�.
	pop_back: ���� ���� �ڿ� �ִ� ���� ����, �� ���� ����Ѵ�. ����, ���� ����ִ� ������ ���� ��쿡�� -1�� ����Ѵ�.
	size: ���� ����ִ� ������ ������ ����Ѵ�.
	empty: ���� ��������� 1��, �ƴϸ� 0�� ����Ѵ�.
	front: ���� ���� �տ� �ִ� ������ ����Ѵ�. ���� ���� ����ִ� ������ ���� ��쿡�� -1�� ����Ѵ�.
	back: ���� ���� �ڿ� �ִ� ������ ����Ѵ�. ���� ���� ����ִ� ������ ���� ��쿡�� -1�� ����Ѵ�.
	�Է�
	ù° �ٿ� �־����� ����� �� N (1 �� N �� 10,000)�� �־�����. ��° �ٺ��� N���� �ٿ��� ����� �ϳ��� �־�����. 
	�־����� ������ 1���� ũ�ų� ����, 100,000���� �۰ų� ����. ������ �������� ���� ����� �־����� ���� ����.
	
	���
	����ؾ��ϴ� ����� �־��� ������, �� �ٿ� �ϳ��� ����Ѵ�.
	
	���� �Է� 1
	15
	push_back 1
	push_front 2
	front
	back
	size
	empty
	pop_front
	pop_back
	pop_front
	size
	empty
	pop_back
	push_front 3
	empty
	front
	
	���� ��� 1
	2
	1
	2
	0
	2
	1
	-1
	0
	1
	-1
	0
	3
	
	���� �Է� 2
	22
	front
	back
	pop_front
	pop_back
	push_front 1
	front
	pop_back
	push_back 2
	back
	pop_front
	push_front 10
	push_front 333
	front
	back
	pop_back
	pop_back
	push_back 20
	push_back 1234
	front
	back
	pop_back
	pop_back
	
	���� ��� 2
	-1
	-1
	-1
	-1
	1
	1
	2
	2
	333
	10
	10
	333
	20
	1234
	1234
	20
*/

int deck[10003];//deck

int main()
{
	int cycle;//��� ����� �����Ұ�����.
	scanf("%d", &cycle);

	int deck_size = 0;//deck�� ������
	//int deck_cursor = 0;//deck �� index

	for (int i = 0; i < cycle; ++i) {

		char inputs[11];
		scanf("%s", &inputs);
		
		if (strcmp(inputs, "push_front") == 0) {
			
			int input_num;
			scanf("%d", &input_num);

			
			if (deck_size == 0) {
				deck[0] = input_num;
			}
			//������ ����Ʈ�� �ʿ���.
			else {
				for (int j = deck_size-1; j >= 0; --j) {
					deck[j + 1] = deck[j];
				}
				deck[0] = input_num;
			}
			deck_size++;

		}
		else if (strcmp(inputs, "push_back") == 0) {
			int input_num;
			scanf("%d", &input_num);
			
			if (deck_size == 0) {
				deck[0] = input_num;
			}
			else {
				deck[deck_size] = input_num;
			}
			deck_size++;

		}
		else if (strcmp(inputs, "pop_front") == 0) {

			if (deck_size == 0) {
				printf("-1\n");
			}
			else {

				printf("%d\n", deck[0]);

				//����Ʈ ó���� ���ָ� �ȴ�.
				for (int j = 0; j < deck_size; j++) {
					deck[j] = deck[j + 1];
				}
				deck_size--;
			}
		}
		else if (strcmp(inputs, "pop_back") == 0) {

			if (deck_size == 0) {
				printf("-1\n");
			}
			else {
				printf("%d\n", deck[deck_size - 1]);
				deck_size--;
			}
		}
		else if (strcmp(inputs, "size") == 0) {
			printf("%d\n", deck_size);
		}
		else if (strcmp(inputs, "empty") == 0) {
			if (deck_size == 0) printf("1\n");
			else printf("0\n");
		}
 		else if (strcmp(inputs, "front") == 0) {
			if (deck_size == 0) printf("-1\n");
			else printf("%d\n", deck[0]);
		}
		else if (strcmp(inputs, "back") == 0) {
			if (deck_size == 0) printf("-1\n");
			else printf("%d\n", deck[deck_size - 1]);
		}
	}
	return 0;
}







