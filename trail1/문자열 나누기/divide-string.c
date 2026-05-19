#include <stdio.h>
#include <string.h>

int main() {
    // Please write your code here.
    int N;
    scanf("%d", &N);

    char result[10001];

    for(int i = 0; i < N; i++){
        char s_tmp[1001];
        int num;
        scanf("%d", &num);

        sprintf(s_tmp, "%d", num);
        strcat(result, s_tmp);
    }

    result[strlen(result)] = '\0';
    for(int i = 0; result[i] != '\0'; i++){
        if(i % 5 == 0 && i != 0) printf("\n");
        printf("%c", result[i]);
    }

    return 0;
}