#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <conio.h>

int prec(char c) {
    if (c == '^')
        return 3;
    else if (c == '*' || c == '/')
        return 2;
    else if (c == '+' || c == '-')
        return 1;
    else
        return -1;
}

int isRightAssociative(char op) {
    return op == '^';
}

void infixToPostfix(char* exp) {
    int len, j, top, i;
    char *result, *stack, c;

    len = strlen(exp);
    result = (char*)malloc((len + 1) * sizeof(char));
    stack = (char*)malloc(len * sizeof(char));
    j = 0;
    top = -1;

    for (i = 0; i < len; i++) {
        c = exp[i];

        if (isalnum(c)) {
            result[j++] = c;
        } else if (c == '(') {
            stack[++top] = c;
        } else if (c == ')') {
            while (top != -1 && stack[top] != '(') {
                result[j++] = stack[top--];
            }
            if (top != -1)
                top--;
        } else {
            while (top != -1 && 
                   (prec(c) < prec(stack[top]) || 
                   (prec(c) == prec(stack[top]) && !isRightAssociative(c))) &&
                   stack[top] != '(') {
                result[j++] = stack[top--];
            }
            stack[++top] = c;
        }
    }

    while (top != -1) {
        if (stack[top] != '(')
            result[j++] = stack[top];
        top--;
    }

    result[j] = '\0';
    printf("Postfix: %s\n", result);

    free(result);
    free(stack);
}

int main() {
    char exp[100];
    clrscr();
    printf("Enter infix expression: ");
    scanf("%s", exp);
    infixToPostfix(exp);
    getch();
    return 0;
}