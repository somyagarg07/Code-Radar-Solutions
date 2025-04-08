// Your code here...
#include <stdio.h>

void sortDescending(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] < arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
int main() {
    int n;
    scanf("%d", &n);
    if (n < 2) {
        printf("-1\n"); 
        return 0;
    }
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    sortDescending(arr, n);
    int first = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] != first) {
            printf("%d\n", arr[i]);
            return 0;
        }
    }
    printf("-1\n"); 
    return 0;
}