/*
Write a C++ program to merge two sorted singly linked lists into a single sorted linked list.
Two sorted singly linked lists:
1 3 5 7
2 4 6 
After merging the said two sorted lists:
1 2 3 4 5 6 7 
*/

#include <iostream>

using namespace std;

// Node structure for a singly linked list
struct Node {
    int data;
    Node* next;
    
    // Constructor
    Node(int value) : data(value), next(nullptr) {}
};

// Function to insert a new node at the end of a linked list
void insert(Node*& head, int data) {
    Node* newNode = new Node(data);
    if (head == nullptr) {
        head = newNode;
    } else {
        Node* temp = head;
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

// Function to merge two sorted linked lists into a single sorted linked list
Node* mergeSortedLists(Node* l1, Node* l2) {
    if (l1 == nullptr) return l2;
    if (l2 == nullptr) return l1;

    Node* merged = nullptr;
    Node* tail = nullptr;

    while (l1 != nullptr && l2 != nullptr) {
        if (l1->data <= l2->data) {
            if (merged == nullptr) {
                merged = tail = l1;
            } else {
                tail->next = l1;
                tail = tail->next;
            }
            l1 = l1->next;
        } else {
            if (merged == nullptr) {
                merged = tail = l2;
            } else {
                tail->next = l2;
                tail = tail->next;
            }
            l2 = l2->next;
        }
    }

    // Append remaining nodes from l1 or l2 (if any)
    if (l1 != nullptr) tail->next = l1;
    if (l2 != nullptr) tail->next = l2;

    return merged;
}

// Function to print a linked list
void printLinkedList(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

// Function to delete all nodes of a linked list
void deleteLinkedList(Node*& head) {
    Node* current = head;
    while (current != nullptr) {
        Node* next = current->next;
        delete current;
        current = next;
    }
    head = nullptr;
}

int main() {
    // Create two sorted linked lists
    Node* list1 = nullptr;
    Node* list2 = nullptr;

    insert(list1, 1);
    insert(list1, 3);
    insert(list1, 5);
    insert(list1, 7);

    insert(list2, 2);
    insert(list2, 4);
    insert(list2, 6);

    cout << "First sorted linked list: ";
    printLinkedList(list1);

    cout << "Second sorted linked list: ";
    printLinkedList(list2);

    // Merge two sorted linked lists
    Node* mergedList = mergeSortedLists(list1, list2);

    cout << "Merged sorted linked list: ";
    printLinkedList(mergedList);

    // Delete the linked lists
    deleteLinkedList(list1);
    deleteLinkedList(list2);
    deleteLinkedList(mergedList);

    return 0;
}
