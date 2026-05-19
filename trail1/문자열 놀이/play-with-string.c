#include <stdio.h>
#include <string.h>

char fir, sec;

int main() {
    // Please write your code here.
    char s[101];
    int q;

    scanf("%s %d", s, &q);

    for(int i = 0; i < q; i++){
        int n;
        scanf("%d", &n);

        if(n == 1){
            int fir, sec;
            scanf(" %d %d", &fir, &sec);

            char temp = s[fir-1];
            s[fir-1] = s[sec-1];
            s[sec-1] = temp;

            printf("%s\n", s);

        } else if(n==2){

            char fir, sec;
            scanf(" %c %c", &fir, &sec);

            int len = strlen(s);
            for(int j = 0; j < len; j++){
                if(s[j] == fir) s[j] = sec;
            }
            printf("%s\n", s);
        }
    }
    return 0;
}