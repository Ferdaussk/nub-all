/*
Write a C++ program to check if a singly linked list is a palindrome or not.
Original Singly List:
1 2 3 4 5 
The linked list is not a palindrome. 
Original Singly List:
1 2 2 1 
The linked list is a palindrome. 
Original Singly List:
MADAM 
The linked list is a palindrome.
*/
#include <iostream>
#include <stack>

using namespace std;

// Node structure for a singly linked list
struct Node {
    char data;
    Node* next;

    // Constructor
    Node(char value) : data(value), next(nullptr) {}
};

// Function to insert a new node at the end of a linked list
void insert(Node*& head, char data) {
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

// Function to print a linked list
void printLinkedList(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

// Function to check if a linked list is a palindrome
bool isPalindrome(Node* head) {
    if (head == nullptr || head->next == nullptr)
        return true; // Empty list or single node list is considered a palindrome

    stack<char> stack;
    Node* slow = head;
    Node* fast = head;

    // Push first half of the list onto stack
    while (fast != nullptr && fast->next != nullptr) {
        stack.push(slow->data);
        slow = slow->next;
        fast = fast->next->next;
    }

    // If the length of the list is odd, skip the middle element
    if (fast != nullptr) {
        slow = slow->next;
    }

    // Compare the remaining half of the list with the elements popped from stack
    while (slow != nullptr) {
        if (slow->data != stack.top()) {
            return false;
        }
        stack.pop();
        slow = slow->next;
    }

    return true;
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
    // Create and test singly linked lists

    // Test case 1: "1 2 3 4 5"
    Node* list1 = nullptr;
    insert(list1, '1');
    insert(list1, '2');
    insert(list1, '3');
    insert(list1, '4');
    insert(list1, '5');

    cout << "Original Singly List: ";
    printLinkedList(list1);

    if (isPalindrome(list1)) {
        cout << "The linked list is a palindrome." << endl;
    } else {
        cout << "The linked list is not a palindrome." << endl;
    }

    deleteLinkedList(list1);

    // Test case 2: "1 2 2 1"
    Node* list2 = nullptr;
    insert(list2, '1');
    insert(list2, '2');
    insert(list2, '2');
    insert(list2, '1');

    cout << "\nOriginal Singly List: ";
    printLinkedList(list2);

    if (isPalindrome(list2)) {
        cout << "The linked list is a palindrome." << endl;
    } else {
        cout << "The linked list is not a palindrome." << endl;
    }

    deleteLinkedList(list2);

    // Test case 3: "MADAM"
    Node* list3 = nullptr;
    insert(list3, 'M');
    insert(list3, 'A');
    insert(list3, 'D');
    insert(list3, 'A');
    insert(list3, 'M');

    cout << "\nOriginal Singly List: ";
    printLinkedList(list3);

    if (isPalindrome(list3)) {
        cout << "The linked list is a palindrome." << endl;
    } else {
        cout << "The linked list is not a palindrome." << endl;
    }

    deleteLinkedList(list3);

    return 0;
}
