#include <stdio.h>

void calculator(int a, int b, char c){
    switch(c){
        case '+':
            printf("%d %c %d = %d", a, c, b, a+b);
            break;
        case '-':
            printf("%d %c %d = %d", a, c, b, a-b);
            break;
        case '/':
            printf("%d %c %d = %d", a, c, b, a/b);
            break;
        case '*':
            printf("%d %c %d = %d", a, c, b, a*b);
            break;
        default:
            printf("False");
            break;
    }
}

int main() {
    // Please write your code here.
    int a, b;
    char c;

    scanf("%d %c %d", &a, &c, &b);

    calculator(a, b, c);
    return 0;
}