#include <stdio.h>

int re(int n){
    int sum = 0;
    for(int i = 1; i <= n; i++){
        sum += i;
    }
    return sum/10;
}

int main() {
    // Please write your code here.
    int n;
    scanf("%d", &n);

    printf("%d", re(n));
    return 0;
}