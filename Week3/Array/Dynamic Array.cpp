#include <cs50.h>
#include<stdio.h>

float average(int length, int array[])

int main(void)
{
	//����ڷκ��� ������ �� �Է�
	int n = get_int("Scores: ");

	//���� �迭 ���� �� ����ڷκ��� �� �Է�
	int scores[n];
	for (int i = 0;i < n;i++)
	{
		scores[i] = get_int("Score %i:", i + 1);
	}

	//��� ���
	printf("Average: %0.1f\n", average(n, scores));
}

// ����� ����ϴ� �Լ�
float average(int length, int array[])
{
	int sum = 0;
	for (int = 0;i < length;i++)
	{
		sum += array[i];
	}
	return (float)sum / (float)length;
}