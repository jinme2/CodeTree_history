#include <stdio.h>

int main() {
    // Please write your code here.
    int N, M;
    scanf("%d %d", &N, &M);

    int arry[100][100] = { 0, };
    int max_diagonal = (N-1) + (M-1);

    int num = 1;

    for(int diagonal = 0; diagonal <= max_diagonal; diagonal++){
        for(int i = 0; i < N; i++){
            int j = diagonal - i;

            if(j >=0 && j < M) arry[i][j] = num++;
        }
    }
    
    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            printf("%d ", arry[i][j]);
        }
        printf("\n");
    }
    return 0;
}