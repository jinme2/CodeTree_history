#include <stdio.h>

int main() {
    // Please write your code here.
    int N;
    scanf("%d", &N);

    int matrix[10][10] = {0, };
    int num = 1;
    int flag = 0;

    for(int row = N-1; row >= 0; row--){
        if(flag == 1){
            for(int col = 0; col < N; col++){
                matrix[col][row] = num++;
                flag = 0;
            }

        } else {
            for(int col = N-1; col >= 0; col--){
                matrix[col][row] = num++;
                flag = 1;
            }
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