#include <stdio.h>

char quitprompt(void)
{
	char quit;

	while (1) {
		printf("Quit? (Y/n): ");
		if ((scanf(" %c", &quit)) != 1)
			quit = 'y';
		if (!(quit == 'Y' || quit == 'y' || quit == 'N' || quit == 'n'))
			printf("Invalid. Options: (Y/n).\n");
		else
			break;
	}
	return quit;
}

int main(void)
{
	float num1 = 0;
	float num2 = 0;
	char opr;
	char quit = 'n';

	printf("==========\nc calculator\n==========\n");

	while (!(quit == 'Y' || quit == 'y')) {

		printf("Number 1: ");
		scanf("%f", &num1);

		printf("Number 2: ");
		scanf("%f", &num2);

		printf("Opr: Options: \"*\", \"/\", \"+\", \"-\"\n");

		printf("Opr: ");
		scanf(" %c", &opr);

		if (opr == '*') {
			printf("%.2f * %.2f = %.2f\n", num1, num2, num1 * num2);
			quit = quitprompt();
		}

		else if (opr == '+') {
			printf("%.2f + %.2f = %.2f\n", num1, num2, num1 + num2);
			quit = quitprompt();

		}

		else if (opr == '-') {
			printf("%.2f - %.2f = %.2f\n", num1, num2, num1 - num2);
			quit = quitprompt();
		}

		else if (opr == '/') {
			if (num2 == 0)
				printf("Warn: num2 (denominator) is 0.\n");
			printf("%.2f / %.2f = %.2f\n", num1, num2, num1 / num2);
			quit = quitprompt();
		}

		else {
			if (num2 == 0)
				printf("Warn: num2 (denominator) is 0.\n");
			printf("Invalid opr. All calculations:\n%.2f * %.2f = %.2f\n%.2f + %.2f = %.2f\n%.2f - %.2f = %.2f\n%.2f / %.2f = %.2f\n",
			num1, num2, num1 * num2, num1, num2, num1 + num2, num1, num2, num1 - num2, num1, num2, num1 / num2);
			quit = quitprompt();
		}

	}

	return 0;
}
