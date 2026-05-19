#include <stdio.h>
#include <string.h>

int main() {
    // Please write your code here.
    char str[1001];
    char sub[1001];

    scanf("%s %s", str, sub);

    int result = -1;
    int str_len = strlen(str);
    int sub_len = strlen(sub);

    for(int i = 0; i < str_len - sub_len + 1; i++){
        int flag = 0;
        for(int j = 0; j < sub_len; j++){
            if(str[i+j] == sub[j]){
                flag = 1;
            } else {
                flag = 0;
                break;
            }
        }
        if(flag){
            result = i;
            break;
        }
    }

    printf("%d", result);

    return 0;
}