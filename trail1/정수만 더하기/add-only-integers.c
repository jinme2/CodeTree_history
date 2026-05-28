#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    // Please write your code here.
    char str[101];

    scanf("%s", str);
    int len = strlen(str);
    int sum = 0;

    for(int i = 0; i < len; i++){
        if(isdigit(str[i])){
            sum += str[i] - '0';
        }
    }

    printf("%d", sum);
    return 0;
}