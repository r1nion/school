#include <stdio.h>

int main() {
    int numbers[6];

    printf("input 6 values: ");
    for (int i = 0; i < 6; i++) {
        scanf("%d", &numbers[i]);
    }

    for (int i = 5; i > 0; i--) {
        int max = 0;
        for (int j = 1; j <= i; j++) {
            if (numbers[j] > numbers[max]) {
                max = j;
            }
        }

        if (max != i) {
            int tmp = numbers[i];
            numbers[i] = numbers[max];
            numbers[max] = tmp;
        }
    }

    printf("result: ");
    for (int i = 0; i < 6; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    return 0;
}