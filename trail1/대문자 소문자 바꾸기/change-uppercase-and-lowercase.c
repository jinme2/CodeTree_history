#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    // Please write your code here.
    char str[21];

    scanf("%s", str);
    int len = strlen(str);

    for(int i = 0; i < len; i++){
        if('a' <= str[i] && str[i] <= 'z')
            printf("%c", toupper(str[i]));
        else  
            printf("%c", tolower(str[i]));
    }
    return 0;
}