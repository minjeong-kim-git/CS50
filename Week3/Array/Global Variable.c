# include <cs50.h>
# include <stdio.h>

const int N = 3;

int main(void)
{
	//���� �迭 ���� �� �� ����
	int scores[N];
	scores[0] = 72;
	scores[1] = 73;
	scores[2] = 33;

	//Print Averages
	printf("Average: %i\n", scores[0] + scores[1] + scores[2] / 3)
}