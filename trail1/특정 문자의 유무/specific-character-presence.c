#include <stdio.h>
#include <string.h>

int finder(char* s, char* c){
    for(int i = 0; i < strlen(s)-1; i++){
        int flag = 0;
        for(int j = 0; j < 2; j++){
            if(s[i+j] != c[j]){
                flag = 1;
            }
        }
        if (!flag) return 1;
    }
    return 0;
}

int main() {
    // Please write your code here.
    char ee[] = "ee";
    char ab[] = "ab";

    char s[21];
    scanf("%s", s);

    int ee_flag = finder(s, ee);
    int ab_flag = finder(s, ab);

    if(ee_flag) printf("Yes "); else printf("No ");
    if(ab_flag) printf("Yes"); else printf("No");
    
    return 0;
}