#include <stdio.h>

int main() {
    int a[5], i, max, min;

    printf("input Five points\n");
    scanf("%d %d %d %d %d", &a[0], &a[1], &a[2], &a[3], &a[4]);

    max=min=a[0];
    
    for (i=1; i<5; i++) {
        if (a[i]>max){
            max=a[i];
        }
        if (a[i]<min){
            min=a[i];
        }    
    }

    printf("Max: %d\nMin: %d\n", max, min);

    return 0;
}