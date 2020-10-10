#include <stdio.h>
#include <string.h>

void m1_10845();
void m2_10845();
int queue[10001];//�迭����

int main()
{
	/*
	����
	������ �����ϴ� ť�� ������ ����, �Է����� �־����� ����� ó���ϴ� ���α׷��� �ۼ��Ͻÿ�.

	����� �� ���� �����̴�.

	push X: ���� X�� ť�� �ִ� �����̴�.
	pop: ť���� ���� �տ� �ִ� ������ ����, �� ���� ����Ѵ�. ���� ť�� ����ִ� ������ ���� ��쿡�� -1�� ����Ѵ�.
	size: ť�� ����ִ� ������ ������ ����Ѵ�.
	empty: ť�� ��������� 1, �ƴϸ� 0�� ����Ѵ�.
	front: ť�� ���� �տ� �ִ� ������ ����Ѵ�. ���� ť�� ����ִ� ������ ���� ��쿡�� -1�� ����Ѵ�.
	back: ť�� ���� �ڿ� �ִ� ������ ����Ѵ�. ���� ť�� ����ִ� ������ ���� ��쿡�� -1�� ����Ѵ�.
	�Է�
	ù° �ٿ� �־����� ����� �� N (1 �� N �� 10,000)�� �־�����. ��° �ٺ��� N���� �ٿ��� ����� �ϳ��� �־�����. �־����� ������ 1���� ũ�ų� ����, 100,000���� �۰ų� ����. ������ �������� ���� ����� �־����� ���� ����.
	
	���
	����ؾ��ϴ� ����� �־��� ������, �� �ٿ� �ϳ��� ����Ѵ�.
	
	���� �Է� 1 
	15
	push 1
	push 2
	front
	back
	size
	empty
	pop
	pop
	pop
	size
	empty
	pop
	push 3
	empty
	front
	
	���� ��� 1 
	1
	2
	2
	0
	1
	2
	-1
	0
	1
	-1
	0
	3
	
	*/



	//m1_10845();
	m2_10845();

	
	return 0;
}

void m2_10845()
{
	int queue_index = 0;//queue �ε���
	int queue_size = 0;//queue ������
	int pop_index = 0;//pop index.. ����Ʈ ���� ó���ϱ� �����̴�.
	char command[11];//���ڼ���

	int input;
	scanf("%d", &input);

	for (int i = 0; i < input; ++i) {

		int value = 0;

		scanf("%s", &command);

		if (strcmp(command, "push") == 0) {
			scanf("%d", &value);
			queue[queue_index] = value;
			queue_index++;
			queue_size++;
		}
		else if (strcmp(command, "pop") == 0) {

			if (queue_size == 0) {
				printf("-1\n");
			}
			else {
				printf("%d\n", queue[pop_index]);

				pop_index++;
				queue_size--;
			}
		}
		else if (strcmp(command, "size") == 0) {
			printf("%d\n", queue_size);
		}
		else if (strcmp(command, "empty") == 0) {
			if (queue_size == 0) printf("1\n");
			else printf("0\n");
		}
		else if (strcmp(command, "front") == 0) {
			if (queue_size == 0) printf("-1\n");
			else printf("%d\n", queue[0]);
		}
		else {
			if (queue_size == 0) printf("-1\n");
			else printf("%d\n", queue[queue_index - 1]);
		}

	}
}


void m1_10845()
{
	int queue_index = 0;//queue �ε���
	int queue_size = 0;//queue ������
	char command[11];//���ڼ���

	int input;
	scanf("%d", &input);

	for (int i = 0; i < input; ++i) {

		int value = 0;

		scanf("%s", &command);

		if (strcmp(command, "push") == 0) {
			scanf("%d", &value);
			queue[queue_index] = value;
			queue_index++;
			queue_size++;
		}
		else if (strcmp(command, "pop") == 0) {

			if (queue_size == 0) {
				printf("-1\n");
			}
			else {
				printf("%d\n", queue[0]);

				//����Ʈ ó���� ������Ѵ�. -> �ش� ����Ʈ ó�������� �ð����⵵�� ������
				for (int i = 0; i < queue_size; i++) {
					queue[i] = queue[i + 1];
				}
				queue_size--;
				queue_index--;
			}
		}
		else if (strcmp(command, "size") == 0) {
			printf("%d\n", queue_size);
		}
		else if (strcmp(command, "empty") == 0) {
			if (queue_size == 0) printf("1\n");
			else printf("0\n");
		}
		else if (strcmp(command, "front") == 0) {
			if (queue_size == 0) printf("-1\n");
			else printf("%d\n", queue[0]);
		}
		else {
			if (queue_size == 0) printf("-1\n");
			else printf("%d\n", queue[queue_index - 1]);
		}

	}
}