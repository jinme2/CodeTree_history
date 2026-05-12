#include <stdio.h>
#include <limits.h>
#include <stdlib.h>

int main() {
    // Please write your code here.
    int n;
    scanf("%d", &n);

    int arr[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    int max_val = INT_MAX;

    for(int i = 0; i < n; i++){
        int diff = 0;
        for(int j = 0; j < n; j++){
            diff += (arr[j] * abs(i-j-1));
        }
        if(max_val > diff) max_val = diff;
    }

    printf("%d", max_val);

    return 0;
}