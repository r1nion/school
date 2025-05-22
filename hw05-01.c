#include <stdio.h>

int main() {
    int score[3][4];
    int max[4] = {0};

    for (int i = 0; i < 3; i++) {
        printf("input No.%d\n", i + 1);
        for (int j = 0; j < 4; j++) {
            scanf("%d", &score[i][j]);
            if (i == 0 || score[i][j] > max[j]) {
                max[j] = score[i][j];
            }
        }
    }

    printf("English: %d\n", max[0]);
    printf("Math: %d\n", max[1]);
    printf("Physics: %d\n", max[2]);
    printf("Experiment: %d\n", max[3]);

    return 0;
}