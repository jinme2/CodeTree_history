#include <stdio.h>
#include <string.h>

int main() {
    // Please write your code here.
    char ee[] = "ee";
    char eb[] = "eb";

    char s[21];
    scanf("%s", s);

    int ee_count = 0;
    int eb_count = 0;

    for(int i = 0; i < strlen(s)-1; i++){
        if(s[i] == ee[0] && s[i+1] == ee[1]) ee_count++;
        if(s[i] == eb[0] && s[i+1] == eb[1]) eb_count++;
    }

    printf("%d %d", ee_count, eb_count);
    return 0;
}