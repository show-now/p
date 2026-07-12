#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

#define N 10

int Queue[N], Front = 0, Rear = -1, Item;

void Qinsert() {
    if (Rear == N - 1) {
        printf("\nQueue Overflow");
    } else {
        printf("\nEnter an item: ");
        scanf("%d", &Item);
        Rear++;
        Queue[Rear] = Item;
    }
}

void Qdelete() {
    if (Rear < Front) {
        printf("\nQueue Underflow");
    } else {
        printf("\nDeleted item is: %d", Queue[Front]);
        Front++;
        if (Rear < Front) {
            Front = 0;
            Rear = -1;
        }
    }
}

void Qdisplay() {
    int i;
    if (Rear < Front) {
        printf("\nNo elements in the Queue");
    } else {
        printf("\nQueue:\n");
        for (i = Front; i <= Rear; i++) {
            printf("%d\t", Queue[i]);
        }
        printf("\nFront element is: %d", Queue[Front]);
        printf("\nRear element is: %d", Queue[Rear]);
    }
}

void main() {
    int ch;

    clrscr();

    while (1) {
        printf("\n\nQueue implementation using array");
        printf("\n1. Insert into queue");
        printf("\n2. Delete from queue");
        printf("\n3. Display queue");
        printf("\n4. Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &ch);

        switch (ch) {
            case 1:
                Qinsert();
                Qdisplay();
                break;
            case 2:
                Qdelete();
                Qdisplay();
                break;
            case 3:
                Qdisplay();
                break;
            case 4:
                exit(0);
            default:
                printf("\nInvalid input");
        }
    }

    getch();
}
