#include <stdio.h>
#include <string.h>

int main() {
    // Please write your code here.

    int a, b;

    scanf("%d %d", &a, &b);

    char result[1001];
    sprintf(result, "%d", a+b);

    int len = strlen(result);
    int count = 0;

    for(int i = 0; i < len; i++){
        if(result[i] == '1') count++;
    }

    printf("%d", count);
    return 0;
}