#include <stdio.h>


int allTimer[2000001];//��� �ð������� �迭�� �ְڴ�. -> �޸� �Ѱ趧���� heap������ ���� -> ù��° Ǯ�̿� ����
int n, c, t, cnt, time[2000001];// -> �ι��� Ǯ�̿� ����
void m1();//ù���� Ǯ��
void m2();//�ι��� Ǯ��

int main_1773() 
{
	//m1();
	//m2();

}

void m1_1773()
{	//ù���� ���

	int person;//���� �Ͷ߸� �ο���
	int timer;//������ ����Ǵ� �ð�

	scanf("%d %d", &person, &timer);

	//int cycleArr[101];//������ �Ͷ߸��� ��� �л����� �ֱ⿡���� ������ �迭�� ����ִ´�.

	for (int i = 0; i < person; i++) {
		int temp_cycle;//�� �л����� ���� �ֱ�
		scanf("%d", &temp_cycle);
		//cycleArr[i] = tempCycle;
		for (int j = 1; j * temp_cycle <= timer; j++) {
			allTimer[j * temp_cycle] = 1;//�ڽ��� �ֱ⿡ ǥ���ϱ�
		}
	}

	int total_fire_count = 0;//��ü������ ������ ���� Ƚ��

	for (int i = 1; i <= timer; i++) {
		if (allTimer[i] == 1) {
			total_fire_count++;
		}
	}

	printf("%d", total_fire_count);
}

void m2_1773()
{//�ι��� ���

	scanf("%d %d", &n, &c);//n�� �л������ c�� ��ü �ð��� ���Ѵ�

	while (n--) {
		scanf("%d", &t);//�л������� �ֱ⸦ �޾ƿ´�.
		
		if (time[t]) continue;	//t��°�� 1�� �ִٴ°� �̹� t�� ����� �����Ѵٴ� ���̹Ƿ� 
								//t�� ����� �ڸ��� ��� 1�� ������Ƿ� ���� �� ���� �ʿ䰡 ����.

		for (int i = 1; i * t <= c; i++)
			time[i * t] = 1;
	}

	for (int i = 1; i <= c; i++) {
		cnt += time[i];//�迭���� ���ڸ� ��� �����ش�. -> ��ü ���� Ƚ���� �ɰ��̴�.
	}
	
	printf("%d", cnt);


}
