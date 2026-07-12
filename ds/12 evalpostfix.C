#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

#define MAX 100

int stack[MAX];
int top = -1;

void push(int elem) {
    if (top == MAX - 1) {
        printf("Stack Overflow\n");
        return;
    }
    top++;
    stack[top] = elem;
}

int pop() {
    int elem;
    if (top == -1) {
        printf("Stack Underflow\n");
        return 0;
    }
    elem = stack[top];
    top--;
    return elem;
}

void main() {
    char postfix[MAX], ch;
    int i = 0, op1, op2, result;

    clrscr();
    printf("Program to evaluate postfix expression.\n");
    printf("Enter the postfix expression: ");
    scanf("%s", postfix);

    while ((ch = postfix[i]) != '\0') {
        if (isdigit(ch)) {
            push(ch - '0');
        } else {
            op2 = pop();
            op1 = pop();
            switch (ch) {
                case '+':
                    result = op1 + op2;
                    break;
                case '-':
                    result = op1 - op2;
                    break;
                case '*':
                    result = op1 * op2;
                    break;
                case '/':
                    result = op1 / op2;
                    break;
                case '^':
                    result = pow(op1, op2);
                    break;
                default:
                    printf("Invalid character encountered: %c\n", ch);
                    getch();
                    return;
            }
            push(result);
        }
        i++;
    }

    printf("Result of the postfix expression is: %d\n", pop());
    getch();
}