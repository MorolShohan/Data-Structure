#include<iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

class LinkedList {
    Node* head;
public:
    LinkedList();
    Node* get_new_node(int);
    void insert(int);
    bool search(int);
    void Delete(int);
    int getCount();
    void swap(int, int);
    void display();
};
LinkedList::LinkedList() {
    head = NULL;
}
Node* LinkedList::get_new_node(int data) {
    Node* newNode = new Node();
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}
void LinkedList::insert(int data) {

    Node* newNode = get_new_node(data);
    if(head == NULL) {
        head = newNode;
        return;
    }
    Node* temp = head;
    while(temp->next != NULL) {
        temp= temp->next;
    }

    temp->next = newNode;
}
bool LinkedList::search(int x) {
    Node* current = head;
    while (current != NULL) {
        if (current->data == x)
            return true;
        current = current->next;
    }
    return false;
}
void LinkedList::Delete(int data) {
    Node* temp = head;
    if(temp->data == data) {
        head = head->next;
        delete temp;
        return;
    }
    while(temp->next != NULL && temp->next->data != data) {
        temp = temp->next;
    }
    Node* nodeToBeDelete = temp->next;
    temp->next = nodeToBeDelete->next;
    delete nodeToBeDelete;
}
int LinkedList::getCount() {
    // Time complexity of size is O(N)
    int list_size = 0;
    Node* temp = head;
    while(temp != NULL) {
        list_size++;
        temp = temp->next;
    }
    return list_size;
}
void LinkedList::swap(int data, int position) {
    if(position == 0) {
        if(head!=NULL) {
            head->data = data;
        }else {
            cout << "list is empty\n";
        }
    }else if(position == 1) {
        if(head == NULL) {
            cout << "list is empty\n";
            return;
        }
        Node* temp = head;
        while(temp->next != NULL) {
            temp = temp->next;
        }
        temp->data = data;
    }else {
        cout << "invalid position\n";
    }
}
void LinkedList::display() {
    Node* temp = head;
    while(temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << "\n";
}
