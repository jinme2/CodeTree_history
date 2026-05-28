#include <stdio.h>

void makeSqeare(int N){
    int count = 1;
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            if(i != 0 && j % N == 0) printf("\n");
            printf("%d ", count++);
            if(count == 10) count = 1;
        }
    }
}

int main() {
    int N;
    scanf("%d", &N);
    // Please write your code here.
    makeSqeare(N);
    return 0;
}