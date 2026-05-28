#include <stdio.h>

int main() {
    // Please write your code here. 
    int a,b;
    scanf("%d %d", &a, &b);

    int min;
    (a > b) ? (min = b) : (min = a);

    int max_min = 1;
    for(int i = 2; i <= min; i++){
        if(a % i == 0 && b % i == 0) max_min = i;
    }

    printf("%d", (a*b)/max_min);
    return 0;
}