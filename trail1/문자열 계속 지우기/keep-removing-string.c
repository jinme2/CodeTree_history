#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main() {
    // Please write your code here.
    char s[101];
    char c[101];

    scanf("%s %s", s, c);

    int s_len = strlen(s);
    int c_len = strlen(c);

    while(true){
        int idx = -1;

        for(int i = 0; i < s_len - c_len + 1; i++){
            bool is_same = true;
            for(int j = 0; j < c_len; j++){
                if(s[i+j] != c[j]){
                    is_same = false;
                    break;
                }
            }
            if(is_same) {
                idx = i;
                break;
            }
        }
        if(idx == -1) break;

        for(int i = idx + c_len; i < s_len; i++){
            s[i - c_len] = s[i];
        }

        s[s_len - c_len] = '\0';
        s_len = strlen(s);
    }
    printf("%s\n", s);
    return 0;
}