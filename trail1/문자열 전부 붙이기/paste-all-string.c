#include <stdio.h>
#include <string.h>

int main() {
    // Please write your code here.
    int N;
    char str[10][101];
    char result[1001];

    scanf("%d", &N);
    for(int i = 0; i < N; i++){
        scanf("%s", str[i]);
        strcat(result, str[i]);
    }

    result[strlen(result)] = '\0';
    printf("%s", result);
    return 0;
}