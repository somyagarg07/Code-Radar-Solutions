// Your code here...
#include <stdio.h>

int main() {
    int n, i, isSorted = 1;
    scanf("%d", &n);
    int arr[n];
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    for(i = 0; i < n - 1; i++) {
        if(arr[i] > arr[i + 1]) {
            isSorted = 0;
            break;
        }
    }
    if(isSorted) {
        printf("Sorted\n");
    } else {
        printf("Not Sorted\n");
    }
    return 0;
}