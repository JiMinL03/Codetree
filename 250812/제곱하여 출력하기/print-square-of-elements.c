#include <stdio.h>
#include <stdlib.h>
int main() {
    // Please write your code here.
    int n;
    scanf("%d", &n);
    int *arr;
    arr= (int*)malloc(sizeof(int) * n);
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    for(int i=0; i<n; i++){
        printf("%d ", arr[i]*arr[i]);
    }
    return 0;
}