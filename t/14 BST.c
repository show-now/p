#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};

struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->left = newNode->right = NULL;
    return newNode;
}

struct Node* insert(struct Node* root, int data) {
    if (root == NULL)
        return createNode(data);

    if (data < root->data)
        root->left = insert(root->left, data);
    else if (data > root->data)
        root->right = insert(root->right, data);

    return root;
}

void inorder(struct Node* root) {
    if (root != NULL) {
        inorder(root->left);
        printf("%d ", root->data);
        inorder(root->right);
    }
}

void preorder(struct Node* root) {
    if (root != NULL) {
        printf("%d ", root->data);
        preorder(root->left);
        preorder(root->right);
    }
}

void postorder(struct Node* root) {
    if (root != NULL) {
        postorder(root->left);
        postorder(root->right);
        printf("%d ", root->data);
    }
}

void main() {
    struct Node* root = NULL;
    int elements[] = {2, 5, 1, 3, 9, 0, 63};
    int n = sizeof(elements) / sizeof(elements[0]);
    int i;

    clrscr();

    for (i = 0; i < n; i++) {
        root = insert(root, elements[i]);
    }

    printf("In-Order Traversal: ");
    inorder(root);
    printf("\n");

    printf("Pre-Order Traversal: ");
    preorder(root);
    printf("\n");

    printf("Post-Order Traversal: ");
    postorder(root);
    printf("\n");

    getch();
}