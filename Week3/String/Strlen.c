#include <cs50.h>
#include <stdio.h>

int main(void)
{
	string s = get_string("Input: ");
	printf("Output: ");
	for (int i = 0, n = strlen(s); i < n; i++)
	{
		printf("%c\n", s[i]);
	}
}
