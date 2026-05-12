#include <stdio.h>
#include <limits.h>

int main() {
    // Please write your code here.
    int N; // 제한조건 : 3 <= N <= 100
    scanf("%d", &N);

    int dot[N][2];
    for(int i = 0; i < N; i++){
        scanf("%d %d", &dot[i][0], &dot[i][1]);
    }

    int min_rectangle = INT_MAX;

    for(int i = 0; i < N; i++){
        int x_min = 40000;
        int x_max = 1;
        int y_min = 40000;
        int y_max = 1; // 제한조건 : 1 <= x, y <= 40,000

        for(int j = 0; j < N; j++){
            if(i == j) continue;

            if(x_min >= dot[j][0]) x_min = dot[j][0];
            if(x_max <= dot[j][0]) x_max = dot[j][0];
            if(y_min >= dot[j][1]) y_min = dot[j][1];
            if(y_max <= dot[j][1]) y_max = dot[j][1];
        }
        int vol_rectangle = (x_max - x_min) * (y_max - y_min);
        if(min_rectangle > vol_rectangle) min_rectangle = vol_rectangle;
    }
    printf("%d", min_rectangle);
    return 0;
}