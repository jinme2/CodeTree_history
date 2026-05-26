#include <stdio.h>
#include <string.h>

int main() {
    // Please write your code here.
    char str[21];
    scanf("%s", str);

    int len = strlen(str);
    char fir = str[0];

    for(int i = 0; i < len; i++){
        str[i] = str[i+1];
    }

    str[len-1] = fir;

    printf("%s", str);

    return 0;
}