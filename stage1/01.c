//Double in place - write a function that takes an int pointer and doubles the value; main's variable must change | learns: pointers
#include <stdio.h>

int doubleNumber(int *number)
{

	*number = (*number * 2);
	return 0;

}

int main(void)
{
	int number;

	printf("Enter your number: ");
	scanf("%d", &number);

	doubleNumber(&number);
	printf("Doubled number is: %d\n", number);

	return 0;
}
