#include <stdio.h>

int main() {
    // Please write your code here.
    int N;
    scanf("%d", &N);

    int dp[15][15];

    for(int i = 0; i < N; i++){
        dp[0][i] = 1;
        dp[i][0] = 1;
    }

    for(int row = 1; row < N; row++){
        for(int col = 1; col < N; col++){
            dp[row][col] = dp[row-1][col] + dp[row][col-1];
        }
    }

    int max = N - 1;

    for(int i = 0 ; i <= max; i++){
        for(int row = 0; row < N; row++){
            int col = i - row;

            if(col >= 0 && col < N) printf("%d ", dp[row][col]);
        }
        printf("\n");
    }


    return 0;
}