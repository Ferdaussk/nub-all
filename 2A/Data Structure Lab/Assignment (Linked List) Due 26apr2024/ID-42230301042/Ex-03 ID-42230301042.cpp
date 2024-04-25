/*
Write a C++ program to remove duplicates from a doubly unsorted linked list.
Original Singly List:
1 2 3 3 4 
After removing duplicate elements from the said singly list:
1 2 3 4 
Original Singly List:
1 2 3 3 4 4 
After removing duplicate elements from the said singly list:
1 2 3 4 
*/
#include <iostream>
#include <unordered_set>

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
        newNode->prev = temp;
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

// Function to remove duplicates from a doubly linked list
void removeDuplicates(Node*& head) {
    if (head == nullptr || head->next == nullptr)
        return; // Empty list or single node list

    unordered_set<int> seen;
    Node* current = head;

    while (current != nullptr) {
        if (seen.find(current->data) != seen.end()) {
            // Duplicate found, remove current node
            Node* prevNode = current->prev;
            Node* nextNode = current->next;

            if (prevNode != nullptr)
                prevNode->next = nextNode;
            if (nextNode != nullptr)
                nextNode->prev = prevNode;

            Node* toDelete = current;
            current = nextNode;

            delete toDelete;
        } else {
            // Not a duplicate, add to the set and move to next node
            seen.insert(current->data);
            current = current->next;
        }
    }
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
    // Create and test doubly linked lists

    // Test case 1: "1 2 3 3 4"
    Node* list1 = nullptr;
    insert(list1, 1);
    insert(list1, 2);
    insert(list1, 3);
    insert(list1, 3);
    insert(list1, 4);

    cout << "Original Singly List: ";
    printList(list1);

    removeDuplicates(list1);

    cout << "After removing duplicate elements from the said singly list: ";
    printList(list1);

    deleteList(list1);

    // Test case 2: "1 2 3 3 4 4"
    Node* list2 = nullptr;
    insert(list2, 1);
    insert(list2, 2);
    insert(list2, 3);
    insert(list2, 3);
    insert(list2, 4);
    insert(list2, 4);

    cout << "\nOriginal Singly List: ";
    printList(list2);

    removeDuplicates(list2);

    cout << "After removing duplicate elements from the said singly list: ";
    printList(list2);

    deleteList(list2);

    return 0;
}
