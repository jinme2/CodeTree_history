#include <stdio.h>
#include <string.h>

int main() {
    // Please write your code here.
    char str[1001];
    int q;
    scanf("%s %d",str, &q);
    int len = strlen(str);
    
    for(int i = 0; i < q; i++){
        int num;
        scanf("%d", &num);
        char temp;
        char dest[len];

        switch(num){
            case 1:
                temp = str[0];
                for(int j = 0; j < len-1; j++){
                    str[j] = str[j+1];
                }
                str[len-1] = temp;
                break;
            case 2:
                temp = str[len-1];
                for(int j = len-1; j > 0; j--){
                    str[j] = str[j-1];
                }
                str[0] = temp;
                break;
            case 3:
                for(int j = 0; j < len; j++){
                    dest[len -1 - j] = str[j];
                }
                for(int j = 0; j < len; j++){
                    str[j] = dest[j];
                }
                break;
        }
        printf("%s\n", str);
    }


    return 0;
}