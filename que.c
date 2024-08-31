#include <stdio.h>
int front = -1, rear = -1;
int a[20], n;
void enqueue();
void dequeue();
void display();
    void main() {
    int opt;
    printf("Enter the size of the queue: ");
    scanf("%d", &n);
    
    do {
        printf("\nEnter your choice:");
        printf("\n1: Enqueue");
        printf("\n2: Dequeue");
        printf("\n3: Display");
        printf("\n4: Exit");
        printf("\nChoice: ");
        scanf("%d", &opt);
               switch (opt) {
                case 1:
                enqueue();
                break;
                case 2:
                dequeue();
                break;
                case 3:
                display();
                break;
                case 4:
                printf("Exiting \n");
                break;
                default:
                printf("Enter a valid option");
    }
    }          while (opt !=4);
    }

void enqueue() {
    int item;
        if (rear == n - 1) {
        printf("Queue overflow.");
    }   else {
        printf("Enter the element to be added: ");
        scanf("%d", &item);
        if (front == -1) {
            front = 0; 
    }
        rear++;
        a[rear] = item;
    }
    }

void dequeue() {
    if (front == -1 || front > rear) {
        printf("Queue underflow.");
    } else {
        printf("The deleted element is %d\n", a[front]);
        front++;
        if (front > rear) {
            front = rear = -1; 
    }
    }
    }

void display() {
    if (front == -1) {
        printf("Queue is empty.");
    } else {
        printf("The queue is: ");
        for (int i = front; i <= rear; i++) {
            printf("%d ", a[i]);
    }}
}
    
