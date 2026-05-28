#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    // Please write your code here.
    char str[101];

    scanf("%s", str);
    int len = strlen(str);

    for(int i = 0; i < len; i++){
        if(isalpha(str[i]) || isdigit(str[i])){
            printf("%c", tolower(str[i]));
        }
    }
    return 0;
}