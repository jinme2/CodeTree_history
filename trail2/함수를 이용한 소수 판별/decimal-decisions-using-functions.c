#include <stdio.h>

int isprime(int n){
    for(int i = 2; i < n; i++){
        if(n % i == 0) return 0;
    }

    return n;
}

int main() {
    // Please write your code here.

    int a, b;
    scanf("%d %d", &a, &b);

    int sum = 0;
    for(int i = a; i <= b; i++){
        sum += isprime(i);
    }

    printf("%d", sum);
    return 0;
}