#include <stdio.h>
#include <string.h>
#include <limits.h>

int main() {
    // Please write your code here.
    char str[3][21];

    for(int i = 0 ; i < 3; i++){
        scanf("%s", str[i]);
    }

    int len[3] = {0, };
    int min = INT_MAX;
    int max = INT_MIN;

    for(int i = 0; i < 3; i++){
        len[i] = strlen(str[i]);
        if(min > len[i]) min = len[i];
        if(max < len[i]) max = len[i];
    }

    printf("%d", max - min);
    return 0;
}