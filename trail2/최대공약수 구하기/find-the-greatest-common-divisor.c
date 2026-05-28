#include <stdio.h>

int main() {
    // Please write your code here.
    int a, b;
    scanf("%d %d", &a, &b);

    int min;
    (a > b) ? (min = b) : (min = a);

    int result = 1;

    for(int i = 2; i <= min; i++){
        if(a % i == 0 && b % i == 0) result = i;
    }

    printf("%d", result);
    return 0;
}