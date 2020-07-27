#include <stdio.h>
#include <string.h>
#include <limits.h>


/*
문제
길이가 N으로 같은 문자열 X와 Y가 있을 때, 두 문자열 X와 Y의 차이는 X[i] ≠ Y[i]인 i의 개수이다. 
예를 들어, X=”jimin”, Y=”minji”이면, 둘의 차이는 4이다.

두 문자열 A와 B가 주어진다. 이때, A의 길이는 B의 길이보다 작거나 같다. 
이제 A의 길이가 B의 길이와 같아질 때 까지 다음과 같은 연산을 할 수 있다.

A의 앞에 아무 알파벳이나 추가한다.
A의 뒤에 아무 알파벳이나 추가한다.
이때, A와 B의 길이가 같으면서, A와 B의 차이를 최소로 하는 프로그램을 작성하시오.

입력
첫째 줄에 A와 B가 주어진다. A와 B의 길이는 최대 50이고, A의 길이는 B의 길이보다 작거나 같고,
알파벳 소문자로만 이루어져 있다.

출력
A와 B의 길이가 같으면서, A와 B의 차이를 최소가 되도록 했을 때, 그 차이를 출력하시오.

예제 입력 1
adaabc aababbc

예제 출력 1
2



*/

int main_1170() {
	
	char voca1[51];//첫번째 단어 
	char voca2[51];//두번째 단어 -> 비교대상 단어 : 단어의 길이가 voca1 이상임

	scanf("%s %s", &voca1, &voca2);
	
	
	int min_count = INT_MAX;//서로 다른 단어의 최솟값

	
	for (int i = 0; i <= strlen(voca2) - strlen(voca1); ++i) {
		
		int dif_count = 0;//다른단어 개수 카운트

		for (int j = 0; j < strlen(voca1); ++j) {
			if (voca1[j] != voca2[i + j]) {
				dif_count++;//다른단어가 나오면 카운트 시켜준다.
			}
		}

		min_count = (dif_count <= min_count) ? dif_count : min_count;//여기서 최소값을 비교한다.

	}

	printf("%d", min_count);

}