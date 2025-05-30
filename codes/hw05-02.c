#include <stdio.h>

int main() {
    int board[5][5] = {0};
    int clear = 0, check;
    int x, y, i, j,count=0;

    while (clear == 0) {
        for (i = 0; i < 5; i++) {
            for (j = 0; j < 5; j++) {
                if (board[i][j] == 0)
                    printf("□ ");
                else
                    printf("■ ");
            }
            printf("\n");
        }

        printf("\n(x,y)=(1~5,1~5) : ");

        while (1) {
            if (scanf("%d,%d", &x, &y) != 2) {
                while (getchar() != '\n');
                printf("error\n");
                continue;
            }

            if (x >= 1 && x <= 5 && y >= 1 && y <= 5) break;
            printf("error\n");
        }

        x--;
        y--;

        board[y][x] = 1 - board[y][x];
        if (x != 0) board[y][x - 1] = 1 - board[y][x - 1];
        if (x != 4) board[y][x + 1] = 1 - board[y][x + 1];
        if (y != 0) board[y - 1][x] = 1 - board[y - 1][x];
        if (y != 4) board[y + 1][x] = 1 - board[y + 1][x];

        check = 0;
        for (i = 0; i < 5; i++) {
            for (j = 0; j < 5; j++) {
                check += board[i][j];
            }
        }

        if (check == 25) clear = 1;
        count++;
    }

    printf("clear: %d\n",count);
    return 0;
}