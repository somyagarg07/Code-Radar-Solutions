// Your code here...
#include <stdio.h>
int findMajority(int arr[], int n) {
    int count = 0, candidate = -1;
    for (int i = 0; i < n; i++) {
        if (count == 0) {
            candidate = arr[i];
            count = 1;
        } else {
            count += (arr[i] == candidate) ? 1 : -1;
        }
    }
    count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == candidate)
            count++;
    }
    if (count > n / 2)
        return candidate;
    else
        return -1;
}
int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int result = findMajority(arr, n);
    if(result != -1)
        printf("%d\n", result);
    else
        printf("-1\n"); 

    return 0;
}