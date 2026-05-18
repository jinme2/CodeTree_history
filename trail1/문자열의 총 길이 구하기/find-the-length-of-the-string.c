#include <stdio.h>
#include <string.h>

int main() {
    // Please write your code here.

    char str[10][200];
    int len = 0;

    for(int i = 0; i < 10; i++){
        scanf("%s", str[i]);
        len += strlen(str[i]);
    }

    printf("%d", len);
    return 0;
}