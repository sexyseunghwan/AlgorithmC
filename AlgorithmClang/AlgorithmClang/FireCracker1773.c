#include <stdio.h>


int allTimer[2000001];//모든 시간정보를 배열에 넣겠다. -> 메모리 한계때문에 heap영역에 저장 -> 첫번째 풀이와 연관
int n, c, t, cnt, time[2000001];// -> 두번쨰 풀이와 연관
void m1();//첫번쨰 풀이
void m2();//두번쨰 풀이

int main_1773() 
{
	//m1();
	//m2();

}

void m1_1773()
{	//첫번쨰 방법

	int person;//폭죽 터뜨릴 인원수
	int timer;//폭죽이 진행되는 시간

	scanf("%d %d", &person, &timer);

	//int cycleArr[101];//폭죽을 터뜨리는 모든 학생들의 주기에대한 정보를 배열에 집어넣는다.

	for (int i = 0; i < person; i++) {
		int temp_cycle;//각 학생들의 폭죽 주기
		scanf("%d", &temp_cycle);
		//cycleArr[i] = tempCycle;
		for (int j = 1; j * temp_cycle <= timer; j++) {
			allTimer[j * temp_cycle] = 1;//자신의 주기에 표시하기
		}
	}

	int total_fire_count = 0;//전체적으로 폭죽이 터진 횟수

	for (int i = 1; i <= timer; i++) {
		if (allTimer[i] == 1) {
			total_fire_count++;
		}
	}

	printf("%d", total_fire_count);
}

void m2_1773()
{//두번쨰 방법

	scanf("%d %d", &n, &c);//n은 학생명수를 c는 전체 시간을 뜻한다

	while (n--) {
		scanf("%d", &t);//학생마다의 주기를 받아온다.
		
		if (time[t]) continue;	//t번째에 1이 있다는건 이미 t의 약수가 존재한다는 것이므로 
								//t의 배수의 자리에 모두 1을 찍었으므로 굳이 또 찍을 필요가 없다.

		for (int i = 1; i * t <= c; i++)
			time[i * t] = 1;
	}

	for (int i = 1; i <= c; i++) {
		cnt += time[i];//배열내에 숫자를 모두 더해준다. -> 전체 폭죽 횟수가 될것이다.
	}
	
	printf("%d", cnt);


}
