#include <stdio.h>

int main() {
    int numbers[6];

    printf("input 6 values: ");
    for (int i=0; i<6; i++) {
        scanf("%d", &numbers[i]);
    }

    for (int i=5; i>0; i--) {
        int max_idx=0;
        for (int j=1; j<=i; j++) {
            if(numbers[j]>numbers[max_idx]){
                max_idx=j;
            }
        }

        if (max_idx!=i) {
            int temp=numbers[i];
            numbers[i]=numbers[max_idx];
            numbers[max_idx]=temp;
        }
    }

    printf("result: ");
    for (int i=0; i<6; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    return 0;
}