// This file is written by Thanh Nguyen and do not follow any official documentation
// Therefore this file can contain some errors, please consider it before using it

// Created by Thanh Nguyen 16/2/2022
#include <iostream>
using namespace std;

class Node {
    public:
    int data;
    Node *next;
};

class LinkedList {
    public:
    Node *head = NULL;
    int listSize = 0; // Keep track of the size of list when insert or delete a Node

    // Return the size of the list
    int getSize() {
        return listSize;
    }

    // Add Node to the beginning of the list
    void insertAtBegin(int data) {
        listSize++;
        Node *tmp = new Node;
        tmp->data = data;
        tmp->next = head;
        head = tmp;
    }

    // Add Node to the end of the list
    void insertAtEnd(int data) {
        listSize++;
        Node *tmp = new Node;
        tmp->next = NULL;
        tmp->data = data;

        Node *itr = head;
        while (itr->next != NULL) itr = itr->next;
        itr->next = tmp;
    }

    // Insert Node at given position
    void insertNode(int data, int pos) {
        listSize++;
        Node *tmp1 = new Node;
        tmp1->data = data;
        tmp1->next = NULL;

        if (pos == 1) {
            tmp1->next = head;
            head = tmp1;
            return;
        }

        Node *itr = head;
        for (int i = 0; i < pos - 2; i++) itr = itr->next;

        tmp1->next = itr->next;
        itr->next = tmp1;
    }

    // Delete Node at given position
    void deleteNode(int data, int pos) {
        listSize--;
        Node *tmp1 = head;
        if (pos == 1) {
            head = tmp1->next;
            delete tmp1;
            return;
        }

        for (int i = 0; i < pos - 2; i++) tmp1 = tmp1->next;
        Node *tmp2 = tmp1->next;
        tmp1->next = tmp2->next;
        delete tmp2;
    }

    // Print the liked list (using loop)
    void printList() {
        Node *tmp = head;
        while (tmp != NULL) {
            cout << tmp->data << " ";
            tmp = tmp->next;
        }
        cout << endl;
    }
};

int main() {
    LinkedList lst;
    lst.insertAtBegin(1);
    lst.insertAtEnd(2);
    lst.insertNode(3, 3);
    cout << lst.getSize() << endl;
    lst.printList();
}