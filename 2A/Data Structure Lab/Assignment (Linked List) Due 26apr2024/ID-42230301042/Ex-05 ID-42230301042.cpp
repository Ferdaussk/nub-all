/*
Write a C++ program that reverses a doubly linked list
Original List: 1 3 4 7 9
Reversed list:
9 7 4 3 1
*/
#include <iostream>

using namespace std;

// Node structure for a doubly linked list
struct Node {
    int data;
    Node* prev;
    Node* next;

    // Constructor
    Node(int value) : data(value), prev(nullptr), next(nullptr) {}
};

// Function to insert a new node at the end of a doubly linked list
void insert(Node*& head, Node*& tail, int data) {
    Node* newNode = new Node(data);
    if (head == nullptr) {
        head = tail = newNode;
    } else {
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
    }
}

// Function to print a doubly linked list
void printList(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

// Function to reverse a doubly linked list
Node* reverseList(Node* head) {
    Node* current = head;
    Node* newHead = nullptr;

    while (current != nullptr) {
        // Swap prev and next pointers of the current node
        Node* nextNode = current->next;
        current->next = current->prev;
        current->prev = nextNode;

        // Move to the next node
        newHead = current; // Track the new head of the reversed list
        current = nextNode;
    }

    return newHead; // Return the new head of the reversed list
}

// Function to delete all nodes of a doubly linked list
void deleteList(Node*& head) {
    Node* current = head;
    while (current != nullptr) {
        Node* next = current->next;
        delete current;
        current = next;
    }
    head = nullptr;
}

int main() {
    // Create a doubly linked list
    Node* head = nullptr;
    Node* tail = nullptr;
    insert(head, tail, 1);
    insert(head, tail, 3);
    insert(head, tail, 4);
    insert(head, tail, 7);
    insert(head, tail, 9);

    cout << "Original List: ";
    printList(head);

    // Reverse the doubly linked list
    Node* reversedHead = reverseList(head);

    cout << "Reversed List: ";
    printList(reversedHead);

    // Delete the original list and reversed list
    deleteList(reversedHead);

    return 0;
}
