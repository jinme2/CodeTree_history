#include <stdio.h>
#define MAX 100

int main() {
    // Please write your code here.
    char str[101];

    fgets(str, 101, stdin);  // \0을 포함한 크기

    for(int i = 2; i < 10; i++){
        printf("%c", str[i]);
    }
    return 0;
}