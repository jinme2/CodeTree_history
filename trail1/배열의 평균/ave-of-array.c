#include <stdio.h>

int main() {
    // Please write your code here.
    int mat[2][4];

    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 4; j++){
            scanf("%d", &mat[i][j]);
        }
    }

    double total = 0;
    for(int i = 0; i < 2; i++){
        double aver = 0;
        for(int j = 0; j < 4; j++){
            aver += mat[i][j];
            total += mat[i][j];
        }
        printf("%.1f ", aver/4);
    }

    printf("\n");

    for(int i = 0; i < 4; i++){
        double aver = 0;
        for(int j = 0; j < 2; j++){
            aver += mat[j][i];
        }
        printf("%.1f ", aver/2);
    }

    printf("\n%.1f", total / 8);
    return 0;
}