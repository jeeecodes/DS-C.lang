#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* link;
};

struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (newNode == NULL) {
        printf("Memory allocation failed.\n");
        exit(1);
    }
    newNode->data = data;
    newNode->link = NULL;
    return newNode;
}

void insertFront(struct Node** head, int data) {
    struct Node* newNode = createNode(data);
    newNode->link = *head;
    *head = newNode;
}

void insertRan(struct Node** head, int data) {
    int pos, i = 1;
    struct Node* newNode = createNode(data);
    struct Node* temp = *head;

    printf("Enter the position after which you want to insert the value: ");
    scanf("%d", &pos);

    if (pos == 0) {  
        insertFront(head, data);
        return;
    }

    while (i < pos && temp != NULL) {
        temp = temp->link;
        i++;
    }

    if (temp == NULL) {  
        temp = *head;
        while (temp && temp->link != NULL) {
            temp = temp->link;
        }
        if (temp) {
            temp->link = newNode;  
        } else {
            *head = newNode;
        }
    } else {
        newNode->link = temp->link;
        temp->link = newNode;
    }
}

void insertEnd(struct Node** head, int data) {
    struct Node* newNode = createNode(data);
    if (*head == NULL) {
        *head = newNode;
        return;
    }
    struct Node* ptr = *head;
    while (ptr->link != NULL) {
        ptr = ptr->link;
    }
    ptr->link = newNode;
}

void deleteFront(struct Node** head) {
    if (*head == NULL) {
        printf("The list is empty.\n");
        return;
    }

    struct Node* temp = *head;
    *head = (*head)->link;
    printf("Node with value %d deleted from the beginning.\n", temp->data);
    free(temp);
}

void deleteNode(struct Node** head, int key) {
    struct Node* ptr = *head;
    struct Node* prev = NULL;

    if (ptr != NULL && ptr->data == key) {
        *head = ptr->link;
        printf("Node with value %d deleted.\n", ptr->data);
        free(ptr);
        return;
    }

    while (ptr != NULL && ptr->data != key) {
        prev = ptr;
        ptr = ptr->link;
    }

    if (ptr == NULL) {
        printf("Key %d not found in the list.\n", key);
        return;
    }

    prev->link = ptr->link;
    printf("Node with value %d deleted.\n", ptr->data);
    free(ptr);
}

void deleteEnd(struct Node** head) {
    if (*head == NULL) {
        printf("The list is empty.\n");
        return;
    }

    struct Node* temp = *head;
    struct Node* prev = NULL;

    if (temp->link == NULL) {
        printf("Node with value %d deleted from the end.\n", temp->data);
        free(temp);
        *head = NULL;
        return;
    }

    while (temp->link != NULL) {
        prev = temp;
        temp = temp->link;
    }

    prev->link = NULL;
    printf("Node with value %d deleted from the end.\n", temp->data);
    free(temp);
}

void traverse(struct Node* head) {
    struct Node* ptr = head;
    int count = 0;
    if (ptr == NULL) {
        printf("The list is empty.\n");
        return;
    }
    while (ptr != NULL) {
        printf("%d -> ", ptr->data);
        ptr = ptr->link;
        count++;
    }
    printf("NULL\n");
    printf("Number of nodes: %d\n", count);
}

void clearList(struct Node** head) {
    struct Node* current = *head;
    struct Node* nextNode;
    while (current != NULL) {
        nextNode = current->link;
        free(current);
        current = nextNode;
    }
    *head = NULL;
}

int main() {
    struct Node* head = NULL;
    int choice, value;

    do {
        printf("\n/////////=Linked List Operation//////////\n");
        printf("1. TO INSERT AT BEGINNING\n");
        printf("2. TO INSERT AT RANDOM SPACE\n");
        printf("3. TO INSERT AT THE END\n");
        printf("4. TO DELETE FROM FRONT\n");
        printf("5. TO DELETE RANDOM \n");
        printf("6. DELETE FROM THE END\n");
        printf("7. DISPLAY\n");
        printf("8. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
        case 1:
            printf("Enter value to insert: ");
            scanf("%d", &value);
            insertFront(&head, value);
            printf("%d inserted.\n", value);
            break;
        case 2:
            printf("Enter value to insert: ");
            scanf("%d", &value);
            insertRan(&head, value);
            printf("%d inserted.\n", value);
            break;
        case 3:
            printf("Enter value to insert: ");
            scanf("%d", &value);
            insertEnd(&head, value);
            printf("%d inserted.\n", value);
            break;
        case 4:
            deleteFront(&head);
            break;
        case 5:
            printf("Enter value to delete: ");
            scanf("%d", &value);
            deleteNode(&head, value);
            break;
        case 6:
            deleteEnd(&head);
            break;
        case 7:
            printf("Linked List: ");
            traverse(head);
            break;
        case 8:
            clearList(&head);
            printf("Exiting...\n");
            exit(0);
        default:
            printf("Invalid choice\n");
        }
    }while(choice!=8);
    return 0;
}
