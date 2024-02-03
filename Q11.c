#include <stdio.h>
#include<stdlib.h>
struct Node{
    int key;
    struct Node*next;
};
struct Node* insertSorted(struct Node* head, int key) {
    if (head == NULL || key <= head->key) {
        struct Node* newNode = malloc(sizeof(struct Node));
        newNode-> key = key;
        newNode-> next = head;
        return newNode;
    } else {
        head->next = insertSorted(head->next, key);
        return head;
    }
}

void insertNode(struct Node** head, int key) {
    if (*head == NULL || key <= (*head)->key) {
        struct Node* newNode = malloc(sizeof(struct Node));
        newNode->key = key;
        newNode->next = *head;
        *head = newNode;
    } else {
        insertNode(&((*head)->next), key);
    }
}

struct Node* insertionSort(struct Node* head) {
    if (head == NULL || head->next == NULL) {
        return head; // Already sorted or empty list
    } else {
        struct Node* rest = head->next;
        head->next = NULL;
        return insertSorted(insertionSort(rest), head->key);
    }
} 

//Printing the Elements of the Linked List
void printList(struct Node* head) {
    while (head) {
        printf("%d ", head->key);
        head = head->next;
    }
    printf("\n");
}

int main()
{
    struct Node* start = NULL;
     int n, key;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the elements:\n");
    for (int i = 0; i < n; ++i) {
        scanf("%d", &key);
        insertNode(&start, key);
    }

    // Sort the linked list using purely recursive insertion sort
    start = insertionSort(start);

    printf("Sorted Linked List: ");
    printList(start);
    return 0;
}