#include <stdio.h>
#include <conio.h>

#define MAX 10

void initializeMatrix(int matrix[MAX][MAX], int vertices) {
    int i, j;
    for (i = 0; i < vertices; i++) {
        for (j = 0; j < vertices; j++) {
            matrix[i][j] = 0;
        }
    }
}

void addEdge(int matrix[MAX][MAX], int u, int v) {
    matrix[u][v] = 1;
    matrix[v][u] = 1;
}

void displayMatrix(int matrix[MAX][MAX], int vertices) {
    int i, j;
    printf("\nAdjacency Matrix:\n");
    for (i = 0; i < vertices; i++) {
        for (j = 0; j < vertices; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

void main() {
    int matrix[MAX][MAX];
    int vertices, edges;
    int u, v, i;

    clrscr();

    printf("Enter the number of vertices: ");
    scanf("%d", &vertices);

    initializeMatrix(matrix, vertices);

    printf("Enter the number of edges: ");
    scanf("%d", &edges);

    for (i = 0; i < edges; i++) {
        printf("Enter edge (u v): ");
        scanf("%d%d", &u, &v);
        addEdge(matrix, u, v);
    }

    displayMatrix(matrix, vertices);

    getch();
}