#include <stdio.h>

int main() {
    // Please write your code here.
    int matrix[5][5];

    for (int i = 0; i < 5; i++) {
        matrix[0][i] = 1;
        matrix[i][0] = 1;
    }

    for(int row = 1; row < 5; row++){
        for(int col = 1; col < 5; col++){
            matrix[row][col] = matrix[row-1][col] + matrix[row][col-1]; 
        }
    }

    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}