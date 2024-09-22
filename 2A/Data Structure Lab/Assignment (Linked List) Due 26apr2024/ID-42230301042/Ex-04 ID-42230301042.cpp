/*
Write a C++ program to merge two sorted doubly linked lists into a single sorted linked list.
Two sorted singly linked lists:
1 3 5 7 
2 4 6 
After merging the said two sorted lists:
1 2 3 4 5 6 7
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

// Function to merge two sorted doubly linked lists into a single sorted doubly linked list
Node* mergeSortedLists(Node* head1, Node* head2) {
    // Initialize a dummy node for the merged list
    Node* mergedHead = nullptr;
    Node* mergedTail = nullptr;

    // Pointers for iterating through both lists
    Node* curr1 = head1;
    Node* curr2 = head2;

    // Merge the two lists into a new sorted list
    while (curr1 != nullptr && curr2 != nullptr) {
        if (curr1->data <= curr2->data) {
            insert(mergedHead, mergedTail, curr1->data);
            curr1 = curr1->next;
        } else {
            insert(mergedHead, mergedTail, curr2->data);
            curr2 = curr2->next;
        }
    }

    // Append remaining nodes from list1 (if any)
    while (curr1 != nullptr) {
        insert(mergedHead, mergedTail, curr1->data);
        curr1 = curr1->next;
    }

    // Append remaining nodes from list2 (if any)
    while (curr2 != nullptr) {
        insert(mergedHead, mergedTail, curr2->data);
        curr2 = curr2->next;
    }

    return mergedHead;
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
    // Create two sorted doubly linked lists
    Node* list1Head = nullptr;
    Node* list1Tail = nullptr;
    insert(list1Head, list1Tail, 1);
    insert(list1Head, list1Tail, 3);
    insert(list1Head, list1Tail, 5);
    insert(list1Head, list1Tail, 7);

    Node* list2Head = nullptr;
    Node* list2Tail = nullptr;
    insert(list2Head, list2Tail, 2);
    insert(list2Head, list2Tail, 4);
    insert(list2Head, list2Tail, 6);

    cout << "Two sorted doubly linked lists:" << endl;
    cout << "List 1: ";
    printList(list1Head);
    cout << "List 2: ";
    printList(list2Head);

    // Merge the two sorted lists
    Node* mergedHead = mergeSortedLists(list1Head, list2Head);

    cout << "After merging the said two sorted lists:" << endl;
    cout << "Merged list: ";
    printList(mergedHead);

    // Delete the lists
    deleteList(list1Head);
    deleteList(list2Head);
    deleteList(mergedHead);

    return 0;
}
