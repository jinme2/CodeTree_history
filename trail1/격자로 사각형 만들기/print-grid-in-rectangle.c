#include <stdio.h>
#define MAX 10

int main() {
    // Please write your code here.

    int N;
    scanf("%d", &N);

    int matrix[MAX][MAX];

    for(int i = 0; i < 10; i++){
        matrix[0][i] = 1;
        matrix[i][0] = 1;
    }

    for(int i = 1; i < N; i++){
        for(int j = 1; j < N; j++){
            matrix[i][j] = matrix[i-1][j] + matrix[i][j-1] + matrix[i-1][j-1];
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