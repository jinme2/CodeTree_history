#include <stdio.h>
#include <string.h>

int main() {
    // Please write your code here.
    char str[2][101];

    for(int i = 0; i < 2; i++){
        fgets(str[i], 101, stdin);
    }

    for(int i = 0; i < 2; i++){
        for(int j = 0; j < strlen(str[i]) - 1; j++){
            if(str[i][j] == ' ') continue;
            printf("%c", str[i][j]);
        }
    }
    return 0;
}