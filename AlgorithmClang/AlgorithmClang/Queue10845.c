#include <stdio.h>
#include <string.h>

void m1_10845();
void m2_10845();
int queue[10001];//배열선언

int main()
{
	
	//m1_10845();
	m2_10845();

	
	return 0;
}

void m2_10845()
{
	int queue_index = 0;//queue 인덱스
	int queue_size = 0;//queue 사이즈
	int pop_index = 0;//pop index.. 쉬프트 없이 처리하기 위함이다.
	char command[11];//문자선언

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
	int queue_index = 0;//queue 인덱스
	int queue_size = 0;//queue 사이즈
	char command[11];//문자선언

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

				//쉬프트 처리를 해줘야한다. -> 해당 쉬프트 처리때문에 시간복잡도가 증가함
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