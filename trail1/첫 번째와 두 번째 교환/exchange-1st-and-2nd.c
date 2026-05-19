#include <stdio.h>
#include <string.h>

int main() {
    // Please write your code here.
    char str[21];

    scanf("%s", str);

    char fir = str[0];
    char sec = str[1];

    for(int i = 0; i < strlen(str); i++){
        if(i > 0){
            if(str[i] == fir) {
                str[i] = sec;
                continue;
            }
            if(str[i] == sec){
                str[i] = fir;
                continue;
            }

        } else {
            str[i] = sec;
        }
    }

    printf("%s", str);
    return 0;
}