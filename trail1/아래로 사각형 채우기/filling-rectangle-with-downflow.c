#include <stdio.h>

int main() {
    // Please write your code here.

    int N;
    scanf("%d", &N);

    int matrix [10][10] = {0, };
    int num = 1;

    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            matrix[j][i] = num++;
        }
    }

    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}