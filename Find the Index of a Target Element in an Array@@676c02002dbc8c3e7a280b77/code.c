// Your code here...
#include <stdio.h>

int findIndex(int arr[], int n, int target) {
    for(int i = 0; i < n; i++) {
        if(arr[i] == target)
            return i; 
    }
    return -1; 
}
int main() {
    int n, target;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &target);
    int index = findIndex(arr, n, target);
    if(index != -1)
        printf("%d\n", index);
    else
        printf("-1\n");
    return 0;
}