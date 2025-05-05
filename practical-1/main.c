#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* createNode(int new_data) {
    struct Node* node = (struct Node*)malloc(sizeof(struct Node));
    node->data = new_data;
    node->next = NULL;
    return node;
}

void printList(struct Node* head) {

    // A loop that runs till head is NULL
    while (head != NULL) {

        // Printing data of current node
        printf("%d ", head->data);

        // Moving to the next node
        head = head->next;
    }
}

int main() {
    struct Node* head = createNode(10);
    head->next = createNode(20);
    head->next->next = createNode(30);
    head->next->next->next = createNode(40);

    printList(head);

    return 0;
}
