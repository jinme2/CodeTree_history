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
    int happy = 0;  // 행복한 수열의 개수를 counting

    if(m == 1){ // 연속된 개수가 1일 경우 
        printf("%d", n*2);  // 모두 행복한 수열이므로 n * 2
        return 0;
    }

    for(int i = 0; i < n; i++){ // 행 검사
        int count = 1;  // 행복한 행 수열 개수 counting
        int serial = grid[i][0];  // 연속된 숫자를 counting 하기 위해 이전 값 저장
        for(int j = 1; j < n; j++){
            if(serial == grid[i][j]) count++;  // 이전 값과 같으면 개수 증가
            else count = 1;  // 아니면 1로 초기화
            serial = grid[i][j];

            if(count >= m) { // 만약, 연속된 숫자가 조건 m에 맞으면 
                happy++;  // 행복한 수열 개수를 증가시키고 바로 break
                break;
            }
        }
    }

    for(int i = 0; i < n; i++){ // 열 검사
        int count = 1;  // 행복한 열 수열 개수 counting
        int serial = grid[0][i];  // 연속된 숫자를 counting 하기 위해 이전 값 저장
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
1. 접근방식
처음에는 배열 하나를 선언해서 숫자가 index가 되도록 만들었다.
해당 숫자가 나오면 해당 index의 값이 +1이 되도록.
그런데 문제는 연속된 숫자가 나오지 않았는데도 카운팅이 되기 때문에
통과가 되지 않았다.
따라서 이전 숫자와 경우로 연속된 숫자를 판단하도록 만듦.

2. 알고리즘
완전 탐색

3. 시간복잡도 
O(n^2) : 각 행(열)에 대하여 각각의 요소에 접근하야 하기 때문에 

4. 공간복잡도
O(n) : 2차원 배열을 사용하므로 입력 크기 n에 비례하여 증가
*/