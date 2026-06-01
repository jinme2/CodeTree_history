#include <stdio.h>
#include <stdbool.h>

bool isPrime(int n){
    for(int i = 2; i < n; i++){
        if(n % i == 0) return false;
    }
    return true;
}

int main() {
    // Please write your code here.
    int a, b;
    scanf("%d %d",&a, &b);
    int result = 0;

    for(int i = a; i <= b; i++){
        if(isPrime(i)){
            int n_100, n_10, n_1;
            int sum = 0;

            n_100 = i / 100;
            n_10 = i / 10;
            n_1 = i % 10;

            sum = n_100 + n_10 + n_1;

            if(sum % 2 == 0) result++;
        }
    }

    printf("%d", result);
    return 0;
}