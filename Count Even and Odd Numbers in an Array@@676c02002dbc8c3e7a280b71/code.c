// Your code here...
#include <stdio.h>

void countOddEven(int a[], int n, int *oddCount, int *evenCount) {
    *oddCount = 0;
    *evenCount = 0;

    for (int i = 0; i < n; i++) {
        if (a[i] % 2 == 0)
            (*evenCount)++;
        else
            (*oddCount)++;
    }
}

int main(void) {
    int n;
    scanf("%d", &n);
    int a[n]; 
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    int oddCount, evenCount;
    countOddEven(a, n, &oddCount, &evenCount);
    printf("%d ", evenCount);
    printf("%d ", oddCount);

    return 0;
}