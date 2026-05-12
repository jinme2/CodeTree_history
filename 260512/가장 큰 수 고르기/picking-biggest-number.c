#include <stdio.h>
#include <limits.h>

int main() {
    // Please write your code here.
    int arr[10];

    for(int i = 0; i < 10; i++){
        scanf("%d", &arr[i]);
    }

    int max_val = INT_MIN;
    for(int i = 0; i < 10; i++){
        if(arr[i] > max_val) max_val = arr[i];
    }
    printf("%d", max_val);
    return 0;
}