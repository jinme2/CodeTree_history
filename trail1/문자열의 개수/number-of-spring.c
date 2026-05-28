#include <stdio.h>
#include <string.h>

int main() {
    // Please write your code here.
    char s[201];
    char matrix[200][201] = {0, };
    int count = 0;

    while(1){
        scanf("%s", s);
        if(strcmp(s, "0") == 0) break;

        if(count < 200 && count % 2 == 0) strcpy(matrix[count], s);
        count++;
    }

    printf("%d\n", count);

    for(int i = 0; i < count; i++){
        if(i % 2 == 0)
            printf("%s\n", matrix[i]);
    }
    return 0;
}