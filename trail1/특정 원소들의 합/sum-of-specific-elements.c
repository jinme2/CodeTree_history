#include <stdio.h>

int main() {
    // Please write your code here.

    int arry[4][4];
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            scanf("%d", &arry[i][j]);
        }
    }

    int sum = 0;
    for(int i = 0; i < 4; i++){
        for(int j = 0; j <= i; j++){
            sum += arry[i][j];
        }
    }

    printf("%d", sum);
    return 0;
}