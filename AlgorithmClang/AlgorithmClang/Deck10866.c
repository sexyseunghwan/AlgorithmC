#include <stdio.h>
#include <string.h>



/*
	문제
	정수를 저장하는 덱(Deque)를 구현한 다음, 입력으로 주어지는 명령을 처리하는 프로그램을 작성하시오.
	
	명령은 총 여덟 가지이다.
	
	push_front X: 정수 X를 덱의 앞에 넣는다.
	push_back X: 정수 X를 덱의 뒤에 넣는다.
	pop_front: 덱의 가장 앞에 있는 수를 빼고, 그 수를 출력한다. 만약, 덱에 들어있는 정수가 없는 경우에는 -1을 출력한다.
	pop_back: 덱의 가장 뒤에 있는 수를 빼고, 그 수를 출력한다. 만약, 덱에 들어있는 정수가 없는 경우에는 -1을 출력한다.
	size: 덱에 들어있는 정수의 개수를 출력한다.
	empty: 덱이 비어있으면 1을, 아니면 0을 출력한다.
	front: 덱의 가장 앞에 있는 정수를 출력한다. 만약 덱에 들어있는 정수가 없는 경우에는 -1을 출력한다.
	back: 덱의 가장 뒤에 있는 정수를 출력한다. 만약 덱에 들어있는 정수가 없는 경우에는 -1을 출력한다.
	입력
	첫째 줄에 주어지는 명령의 수 N (1 ≤ N ≤ 10,000)이 주어진다. 둘째 줄부터 N개의 줄에는 명령이 하나씩 주어진다. 
	주어지는 정수는 1보다 크거나 같고, 100,000보다 작거나 같다. 문제에 나와있지 않은 명령이 주어지는 경우는 없다.
	
	출력
	출력해야하는 명령이 주어질 때마다, 한 줄에 하나씩 출력한다.
	
	예제 입력 1
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
	
	예제 출력 1
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
	
	예제 입력 2
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
	
	예제 출력 2
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
	int cycle;//명령 몇번을 수행할것인지.
	scanf("%d", &cycle);

	int deck_size = 0;//deck의 사이즈
	//int deck_cursor = 0;//deck 의 index

	for (int i = 0; i < cycle; ++i) {

		char inputs[11];
		scanf("%s", &inputs);
		
		if (strcmp(inputs, "push_front") == 0) {
			
			int input_num;
			scanf("%d", &input_num);

			
			if (deck_size == 0) {
				deck[0] = input_num;
			}
			//오른쪽 쉬프트가 필요함.
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

				//쉬프트 처리를 해주면 된다.
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







