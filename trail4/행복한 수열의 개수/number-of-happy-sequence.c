#include <stdio.h>

int n, m;
int grid[101][101];

int main(){
    scanf("%d %d", &n, &m); // n 정방행렬, M개 이상 동일한 원소를 의미 
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            scanf("%d", &grid[i][j]);
        }
    }
    // Please write your code here.
    int happy = 0;

    if(m == 1){
        printf("%d", n*2);
        return 0;
    }

    for(int i = 0; i < n; i++){
        int count = 1;
        int serial = grid[i][0];
        for(int j = 1; j < n; j++){
            if(serial == grid[i][j]) count++;
            else count = 1;
            serial = grid[i][j];

            if(count >= m) {
                happy++;
                break;
            }
        }
    }

    for(int i = 0; i < n; i++){
        int count = 1;
        int serial = grid[0][i];
        for(int j = 1; j < n; j++){
            if(serial == grid[j][i]) count++;
            else count = 1;
            serial = grid[j][i];

            if(count >= m) {
                happy++;
                break;
            }  
        }
    }

    printf("%d", happy);
    return 0;
}

/*
처음에는 배열 하나를 선언해서 숫자가 index가 되도록 만들었다.
해당 숫자가 나오면 해당 index의 값이 +1이 되도록.
그런데 문제는 연속된 숫자가 나오지 않았는데도 카운팅이 되기 때문에
통과가 되지 않았다.
따라서 이전 숫자와 경우로 연속된 숫자를 판단하도록 만듦.
*/