#include <stdio.h>


//void stick1();
//void stick2();

int main_1094() 
{	
	//stick1();
	//stick2();


	return 0;
}

void stick1() {

	int input = 0;//입력할 숫자
	int sum = 0;//총합
	int count = 0;//더해줄 정수의 개수
	int number = 64;//64로부터 시작해서 줄여나갈것임.

	scanf("%d", &input);
	
	if (input == 64) {
		count++;
	}
	else {
		
		while (1) {

			number /= 2;

			if (number + sum <= input) {
				count++;
				sum += number;
			}

			if (sum == input) break;

		}
	}

	printf("%d", count);


}

void stick2() {

	int input = 0;
	int answer = 0;

	scanf("%d", &input);

	while (input > 0) {
		
		if (input % 2 == 1) answer++;

		input /= 2;

	}

	printf("%d", answer);

}