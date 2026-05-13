#include <stdio.h>
#include <limits.h>

int main() {
    // Please write your code here.
    int N; // 1<= N <= 100
    scanf("%d", &N);

    int arry [N][3];
    for(int i = 0; i < N; i++){
        scanf("%d %d %d", &arry[i][0], &arry[i][1], &arry[i][2]);
    }

    int max_count = INT_MIN;
    for(int i = 1; i <= 3; i++){ // 1~3번째 컵을 각각 선택하는 경우
        int count = 0;  // 조약돌을 찾은 개수
        int current_position = i;

        for(int j = 0; j < N; j++){
            int a = arry[j][0];
            int b = arry[j][1];
            int c = arry[j][2];

            if(current_position == a){
                current_position = b;
            } else if(current_position == b){
                current_position = a;
            }

            if(current_position == c) count++;
        }
        if(max_count < count) max_count = count;
    }

    printf("%d", max_count);

    return 0;
}

/*
1. 접근 방식
처음에는 문제에서 "N번에 걸쳐 a번 종이컵과 b번 종이컵을 교환한 뒤"라고 나와서 N번 a와 b의 컵 위치를 바꾸는 줄로 이해하고
홀수, 짝수 나눠서 생각했는데, 홀짝으로 나누는 게 아니라 총 N번 반복한다는 것을 나중에 알게 됨.
컵을 선택했을 때 나올 수 있는 점수의 최대값을 찾아야 하므로 
완전 탐색을 이용해 한 컵에서 나올 수 있는 모든 값을 계산 후, 그 중 최대값을 출력함.

선택한 컵 = 돌의 위치를 받아
a와 b의 위치를 교환하고 마지막에 교환한 위치와 c가 동일하면 count를 1 더함.

2. 사용 알고리즘
- 완전 탐색

3. 시간 복잡도
- O(3*N) : 3개의 종이컵에서 각각 나올 수 있는 경우의 수이므로 3*N

4. 공간 복잡도
- O(N) : 2차원 배열을 사용했는데 각 입력은 N에 비례하므로.
*/