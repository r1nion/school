#include <stdio.h>

int main() {
    int num[6];

    printf("input 6 values: ");
    for (int i=0; i<6; i++) {
        scanf("%d", &num[i]);
    }

    for (int i=5; i>0; i--) {
        int max=0;
        for (int j=1; j<=i; j++) {
            if(num[j]>num[max]){
                max=j;
            }
        }

        if (max!=i) {
            int tmp=num[i];
            num[i]=num[max];
            num[max]=tmp;
        }
    }

    printf("result: ");
    for (int i=0; i<6; i++) {
        printf("%d ", num[i]);
    }
    printf("\n");

    return 0;
}