#include <stdio.h>
#include <stdlib.h>
typedef struct Node {
    int data;
    struct Node* next;
} Node;
int countNodes(Node* head) {
    int count = 0;
    Node* current = head;
    while (current != NULL) {
        count++;
        current = current->next;
    }
    return count;
}
int main() {
    Node* head = NULL;
        for (int i = 1; i <= 5; i++) {
        Node* newNode = (Node*)malloc(sizeof(Node));
        newNode->data = i;
        newNode->next = head;
        head = newNode;
    }
    int numberOfNodes = countNodes(head);
    printf("Number of nodes in the linked list: %d\n", numberOfNodes);
    Node* current = head;
    while (current != NULL) {
        Node* temp = current;
        current = current->next;
        free(temp);
    }
    return 0;
}

