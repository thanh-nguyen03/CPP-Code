#include <iostream>
#include <math.h>
#include <algorithm>
#include <string>
using namespace std;

typedef long long ll;
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));

struct Node {
    int data;
    Node *next;
};

Node *head; 
// We have to use pointer and access Node by derefferencing it
// because the Node is in the Heap part of the memory and we cannot access it by name 

// Insert Node at the beginning of the list
// Time Complexity: O(1)
void insertNodeAtTheBeggining(int x) {
    Node *tmp = new Node;
    tmp->data = x;
    tmp->next = head; // The head is currently point the first Node -> tmp->next is now the address of the previous first Node
    head = tmp; // Set the head pointer to point to the new first Node
}

// Insert Node at n-th position of the list
// Time Complexity: O(n)
void insertNodeAtNthPosition(int x, int n) {
    // This function will only run perfectly if n is a valid index of the linked list
    Node *tmp1 = new Node;
    tmp1->data = x;
    tmp1->next = NULL;

    // If we want to insert to the beginning of the list
    if (n == 1) {
        tmp1->next = head;
        head = tmp1;
        return;
    }

    Node *itr = head;
    for (int i = 0; i < n - 2; i++) { // we want to get to the n - 1 Node to start add the new Node
        itr = itr->next; // We use itr pointer to run through the next node
    }
    tmp1->next = itr->next; // Set the new Node to point to the next Node in the right order
    itr->next = tmp1;
    // In this function we do not modify the head pointer 
    // therefore it now still point to the first Node of the list
}

//Delete a Node at N-th position
// Time Complexity: O(n)
void DeleteNode(int n) {
    Node *tmp1 = head;

    // If we want to delte the first Node
    if (n == 1) {
        head = tmp1->next; // Set the head to point to the new first Node
        delete tmp1;
        return;
    }

    for (int i = 0; i < n - 2; i++) tmp1 = tmp1->next; // Make tmp1 to point to the (n - 1)-th Node

    Node *tmp2 = tmp1->next; // Create tmp2 which point to the n-th Node
    tmp1->next = tmp2->next; // Link the (n - 1)-th Node to the (n + 1)-th Node
    delete tmp2;

    // In this function we have the new operator: delete
    // Delete will free the space of the variable
    // Therefore, we will not get waste memory for deleted Node
}

// Reverse the linked list with iterative method
// Time Complexity: O(n)
void reverseLinkedListIteratively() {
    Node *curr, *next, *prev;
    curr = head;
    prev = NULL;
    while (curr != NULL) {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    head = prev; // After the while loop the prev will point the new first Node of the list
}

// Reverse the linked list with recursion method
// Time Complexity: O(n)
void reverseLinkedListRecursion(Node *p) {
    if (p->next == NULL) {
        head = p;
        return;
    }
    reverseLinkedListRecursion(p->next);
    Node *q = p->next;
    q->next = p;
    p->next = NULL;
}

// Print the whole linked list using loop
// Time Complexity: O(n)
void printLinkedList() {
    Node *tmp = head;
    while (tmp != NULL) { // The last element of the list is point to NULL
        cout << tmp->data << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

// Print the whole linked list using recursion
// Time Complexity: O(n)
void printRecursion(Node *itr) {
    if (itr == NULL) return;
    cout << itr->data << " ";
    printRecursion(itr->next);
}

// Print the whole linked list in reverse order using recursion
// Time Complexity: O(n)
void printReverseRecursion(Node *itr) {
    if (itr == NULL) return;
    printReverseRecursion(itr->next);
    cout << itr->data << " ";
}


// The code in main function will change between commits
int main() {
    head = NULL; // the linked list is empty by default

    // Add element to the list -> {1, 2, 3, 4, 5}
    for (int i = 1; i <= 5; i++) {
        insertNodeAtNthPosition(i, i);
    }

    printRecursion(head);
    cout << endl;
    printReverseRecursion(head);
}