#include <stdio.h>
#include <conio.h>

#define SIZE 10

int hashTable[SIZE];

void init()
{
    int i;
    for (i = 0; i < SIZE; i++)
    {
        hashTable[i] = -1;
    }
}

int hashFunction(int key)
{
    return (key % SIZE);
}

void insert(int key)
{
    int index;
    index = hashFunction(key);

    while (hashTable[index] != -1)
    {
        index = (index + 1) % SIZE;
    }

    hashTable[index] = key;
    printf("Inserted %d at index %d\n", key, index);
}

void search(int key)
{
    int index;
    int start;

    index = hashFunction(key);
    start = index;

    while (hashTable[index] != -1)
    {
        if (hashTable[index] == key)
        {
            printf("Element %d found at index %d\n", key, index);
            return;
        }

        index = (index + 1) % SIZE;

        if (index == start)
            break;
    }

    printf("Element %d not found\n", key);
}

void display()
{
    int i;

    printf("\nHash Table:\n");

    for (i = 0; i < SIZE; i++)
    {
        if (hashTable[i] == -1)
            printf("Index %d: Empty\n", i);
        else
            printf("Index %d: %d\n", i, hashTable[i]);
    }
}

void main()
{
    init();

    insert(23);
    insert(43);
    insert(13);
    insert(27);

    display();

    search(43);
    search(99);

    getch();
}
