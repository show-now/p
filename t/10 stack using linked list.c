#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

typedef struct Node {
    int data;
    struct Node* link;
} NODE;

NODE* top = NULL;

void push(int value) {
    NODE* newNode;
    newNode = (NODE*)malloc(sizeof(NODE));
    if (newNode == NULL) {
        printf("Heap Overflow\n");
        return;
    }

    newNode->data = value;
    newNode->link = top;
    top = newNode;
    printf("Pushed: %d\n", value);
}

void pop() {
    NODE* temp;
    if (top == NULL) {
        printf("Stack Underflow\n");
        return;
    }
    temp = top;
    printf("Popped: %d\n", top->data);
    top = top->link;
    free(temp);
}

void display() {
    NODE* temp;
    temp = top;
    if (temp == NULL) {
        printf("Stack is empty\n");
        return;
    }
    printf("Stack elements: ");
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->link;
    }
    printf("NULL\n");
}

void main() {
    int choice, value;
    clrscr();
    while (1) {
        printf("\n--- Stack Menu ---\n");
        printf("1. Push\n2. Pop\n3. Display\n4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("Enter value to push: ");
                scanf("%d", &value);
                push(value);
                break;
            case 2:
                pop();
                break;
            case 3:
                display();
                break;
            case 4:
                exit(0);
            default:
                printf("Invalid choice\n");
        }
    }
    getch();
}
