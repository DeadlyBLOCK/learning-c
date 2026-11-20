#include <stdio.h>

int main(void)
{
	char board[3][3] = {
	{'*', '*', '*'},
	{'*', '*', '*'},
	{'*', '*', '*'}
	};
	int y = -1;
	int x = -1;

	printf("     *|*|*\n     -+-+-\n     *|*|*\n     -+-+-\n     *|*|*\n C-Tic-Tac-Toe\n");

	while (1) {

		printf("Player 1: Place it where? y pos: ");
		scanf("%d", &y);
		printf("Player 1: Place it where? x pos: ");
		scanf("%d", &x);

		if (x > 3 || x < 1 || y > 3 || y < 1) {
			printf("Invalid Range!\n");
			return 1;
		}

		x--;
		y--;

		if (board[y][x] == '*') {
			board[y][x] = '1';
		}

		else {
			printf("Square already taken or invalid.\n");
			return 1;
		}

		for (int i = 0; i < 3; i++) {
			for (int j = 0; j < 3; j++) {
				printf("%c", board[i][j]);
				if (j != 2)
					printf("|");
			}
			if (i != 2)
				printf("\n-+-+-\n");
		}

		if ((board[0][0] == '1' && board[0][1] == '1' && board[0][2] == '1') || (board[1][0] == '1' && board[1][1] == '1' && board[1][2] == '1') || (board[2][0] == '1' && board[2][1] == '1' && board[2][2] == '1') || (board[0][0] == '1' && board[1][0] == '1' && board[2][0] == '1') || (board[0][1] == '1' && board[1][1] == '1' && board[2][1] == '1') || (board[0][2] == '1' && board[1][2] == '1' && board[2][2] == '1') || (board[0][0] == '1' && board[1][1] == '1' && board[2][2] == '1') || (board[0][2] == '1' && board[1][1] == '1' && board[2][0] == '1')) {  
			printf("\np1 takes the w.\n");
			return 0;
		}


		printf("\n");

		printf("Player 2: Place it where? y pos: ");
		scanf("%d", &y);
		printf("Player 2: Place it where? x pos: ");
		scanf("%d", &x);

		if (x > 3 || x < 1 || y > 3 || y < 1) {
			printf("Invalid Range!\n");
			return 1;
		}

		x--;
		y--;

		if (board[y][x] == '*') {
			board[y][x] = '2';
		}

		else {
			printf("Square already taken or invalid.\n");
			return 1;
		}

		for (int i = 0; i < 3; i++) {
			for (int j = 0; j < 3; j++) {
				printf("%c", board[i][j]);
				if (j != 2)
					printf("|");
			}
			if (i != 2)
				printf("\n-+-+-\n");
		}

		if ((board[0][0] == '2' && board[0][1] == '2' && board[0][2] == '2') || (board[1][0] == '2' && board[1][1] == '2' && board[1][2] == '2') || (board[2][0] == '2' && board[2][1] == '2' && board[2][2] == '2') || (board[0][0] == '2' && board[1][0] == '2' && board[2][0] == '2') || (board[0][1] == '2' && board[1][1] == '2' && board[2][1] == '2') || (board[0][2] == '2' && board[1][2] == '2' && board[2][2] == '2') || (board[0][0] == '2' && board[1][1] == '2' && board[2][2] == '2') || (board[0][2] == '2' && board[1][1] == '2' && board[2][0] == '2')) {  
			printf("\np2 takes the w.\n");
			return 0;
		}

                printf("\n");

	}


	return 0;
}
