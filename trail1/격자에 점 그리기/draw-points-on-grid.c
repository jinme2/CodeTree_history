#include <stdio.h>

int main() {
    // Please write your code here.
    int N, M;
    int matrix[9][9] = { 0, };

    scanf("%d %d", &N, &M);

    for(int i = 0; i < M; i++){
        int r, c;
        scanf("%d %d", &r, &c);
        matrix[r-1][c-1] = i+1;
    }

    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}