#include <stdio.h>

int main() {
    // Please write your code here.

    int a[5];

    for(int i = 0; i < 5; i++){
        scanf("%d", &a[i]);
    }

    for(int i = 0; i < 5; i++){
        printf("%c ", (char)a[i]);
    }
    return 0;
}