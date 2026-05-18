#include <stdio.h>
#include <string.h>

int main() {
    // Please write your code here.

    char str[201];

    fgets(str,201,stdin);

    for(int i = 0; i < strlen(str); i++){
        if(str[i] == ' ') str[i] = '\n';
    }

    printf("%s", str);
    return 0;
}