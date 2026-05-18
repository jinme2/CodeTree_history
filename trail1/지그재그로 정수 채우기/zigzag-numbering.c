#include <stdio.h>

int main() {
    // Please write your code here.
    int N, M;
    scanf("%d %d", &N, &M);

    int matrix[100][100] = {0, };
    int num = 0;

    for(int col = 0; col < M; col++){
        if(col % 2 == 0){
            for(int row = 0; row < N; row++){
                matrix[row][col] = num++;
            }
        } else {
            for(int row = N-1; row >= 0; row--){
                matrix[row][col] = num++;
            }
        }
    }

    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}