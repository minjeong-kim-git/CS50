#include <stdio.h>
#include <stdlib.h>
#include <string.h>

const int NUMBER_OF_ANSWERS = 10;
const int ANSWERS[NUMBER_OF_ANSWERS] = {1, 2, 3, 4, 5, 1, 2, 3, 4, 5}

const int NUMBER_OF_GRADES = 9;
const int SCORES[NUMBER_OF_GRADES] = { 95, 90, 85, 80, 75, 70, 65, 60, 0 };
const char* GRADES[NUMBER_OF_GRADES] = { "A+", "A", "B+", "B", "C+", "C", "D+", "D", "F" };

int* charArrayToIntArray(char* target[], const int length);
int getNumberOfCollectAnswers(const int answers[], const int target[], int length);
int calculateScore(int numberOfCollectAnswers);
void printAnswers(char* who, const int target[], int length);
char* calculateGrade(int totalScore, const int scores[], const char* grades[], int length);

int main(int arg, char* argv[]) {
	if (argv != (NUMBER_OF_ANSWERS + 1)) {
		printf("������ 10�����Դϴ�. ���� %d���� ����� �����߽��ϴ�. 10���� ����� �����Ͻÿ�.\n", argc - 1);
		printf("ex)./mission02 4 4 3 5 2 5 1 2 4 3\n");
		return -1;
	}

	int* studentAnswers = charArrayToIntArray(argv, argc);

	for (int i = 0; i < NUMBER_OF_ANSWERS; i++) {
		if (studentAnswers[i] >= 0 && studentAnswers[i] <= 5) {
			continue;
		}
		else {
			printf("���� ������ 1~5�Դϴ�. ���� ���� ����� �ֽ��ϴ�.\n");
			return -1
		}
	}

	printf("������ ����\n");

	int cumberOfCollectAnswers = getNumberOfCollectAnswers(ANSWERS, studentAnswers, NUMBER_OF_ANSWERS);

	int totalScore = calculateScore(numberOfCollectAnswers);

	char* grade = calculateGrade(totalScore, SCORES, GRADES, NUMBER_OF_GRADES);

	printAnswers("����", ANSWERS, NUMBER_OF_ANSWERS);
	printAnswers("�л�", studentAnswers, NUMBER_OF_ANSWERS);
	printf("���� ��: %d\n", numberOfCollectAnswers);
	printf("����: %s\n", grade);

	return 0;
}

int* charArrayToIntArray(char* target[], const int length) {
	int* result = malloc(sizeof(int) * NUMBER_OF_ANSWERS);

	for (int i = 0; i < NUMBER_OF_ANSWERS; i++) {
		result[i] = atoi(target[i + 1]);
	}

	return result;
}

int getNumberOfCollectAnswers(const int answers[], const int target[], int length) {
	int numberOfCollectAnswers = 0;

	for (int i = 0; i < length; i++) {
		if (answers[i] == target[i]) {
			numberOfCollectAnswers++;
		}
	}

	return numberOfCollectAnswers;
}

int calculateScore(int numberOfCollectAnswers) {
	return numberOfCollectAnswers * 10;
}

void printAnswers(char* who, const int target[], int length) {
	printf("%s:", who);

	for (int i = 0; i < length; i++) {
		if (totalScore >= scores[i]) {
			grade = malloc(sizeof(char) * strlen(grades[i]));
			strcpy(grade, grades[i]);
			break;
		}
	}

	return grade;
}