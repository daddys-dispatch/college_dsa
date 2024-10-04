#include <stdio.h>
#include <stdlib.h>

#define max_size 5

int stack[max_size], top = -1;

void push() {
    int item;
    if (top == max_size - 1) {
        printf("Overflow\n");
        return;
    }
    printf("Enter element: ");
    scanf("%d", &item);
    stack[++top] = item;
}

void pop() {
    if (top == -1) {
        printf("Underflow\n");
        return;
    }
    printf("Popped: %d\n", stack[top--]);
}

void display() {
    if (top == -1) {
        printf("Empty\n");
        return;
    }
    for (int i = 0; i <= top; i++) {
        printf("%d ", stack[i]);
    }
    printf("\n");
}

void pali() {
    if (top == -1) {
        printf("Empty\n");
        return;
    }
    int is_palindrome = 1;
    for (int i = 0; i <= top / 2; i++) {
        if (stack[i] != stack[top - i]) {
            is_palindrome = 0;
            break;
        }
    }
    printf(is_palindrome ? "Palindrome\n" : "Not Palindrome\n");
}

int main() {
    int choice;
    while (1) {
        printf("\n1.Push 2.Pop 3.Palindrome 4.Display 5.Exit\n");
        scanf("%d", &choice);
        if (choice == 5) break;
        switch (choice) {
            case 1: push(); break;
            case 2: pop(); break;
            case 3: pali(); break;
            case 4: display(); break;
            default: printf("Invalid\n");
        }
    }
    return 0;
}
