#include <stdio.h>
#include <string.h>

void m1_10845();
void m2_10845();
int queue[10001];//배열선언

int main()
{
	/*
	문제
	정수를 저장하는 큐를 구현한 다음, 입력으로 주어지는 명령을 처리하는 프로그램을 작성하시오.

	명령은 총 여섯 가지이다.

	push X: 정수 X를 큐에 넣는 연산이다.
	pop: 큐에서 가장 앞에 있는 정수를 빼고, 그 수를 출력한다. 만약 큐에 들어있는 정수가 없는 경우에는 -1을 출력한다.
	size: 큐에 들어있는 정수의 개수를 출력한다.
	empty: 큐가 비어있으면 1, 아니면 0을 출력한다.
	front: 큐의 가장 앞에 있는 정수를 출력한다. 만약 큐에 들어있는 정수가 없는 경우에는 -1을 출력한다.
	back: 큐의 가장 뒤에 있는 정수를 출력한다. 만약 큐에 들어있는 정수가 없는 경우에는 -1을 출력한다.
	입력
	첫째 줄에 주어지는 명령의 수 N (1 ≤ N ≤ 10,000)이 주어진다. 둘째 줄부터 N개의 줄에는 명령이 하나씩 주어진다. 주어지는 정수는 1보다 크거나 같고, 100,000보다 작거나 같다. 문제에 나와있지 않은 명령이 주어지는 경우는 없다.
	
	출력
	출력해야하는 명령이 주어질 때마다, 한 줄에 하나씩 출력한다.
	
	예제 입력 1 
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
	
	예제 출력 1 
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