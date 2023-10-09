#include<iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

class LinkedList{
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
    Node* newNode=new Node();
    newNode->data=data;
    newNode->next = NULL;
    return newNode;
}

void LinkedList::insert(int data) {
    Node* newNode=get_new_node(data);
    if(head == NULL) {
        head = newNode;
        return;
    }
    Node* temp = head;
    while(temp->next!=NULL) {
        temp= temp->next;
    }
    temp->next = newNode;
}

bool LinkedList::search(int x) {
    Node* current=head;
    while (current!=NULL) {
        if (current->data==x)
            return true;
        current=current->next;
    }
    return false;
}
void LinkedList::Delete(int data) {
    Node* temp=head;
    if(temp->data==data) {
        head=head->next;
        delete temp;
        return;
    }
    while(temp->next!=NULL && temp->next->data!=data) {
        temp=temp->next;
    }
    Node* nodeToBeDelete=temp->next;
    temp->next=nodeToBeDelete->next;
    delete nodeToBeDelete;
}
int LinkedList::getCount() {
    int list_size = 0;
    Node* temp = head;
    while(temp != NULL) {
        list_size++;
        temp = temp->next;
    }
    return list_size;
}
void LinkedList::swap(int data, int position) {
    if(position==0) {
        if(head!=NULL) {
            head->data = data;
        }else {
            cout << "list is empty\n";
        }
    }else if(position==1) {
        if(head == NULL) {
            cout << "list is empty\n";
            return;
        }
        Node* temp=head;
        while(temp->next!=NULL) {
            temp=temp->next;
        }
        temp->data=data;
    }else {
        cout << "invalid position\n";
    }
}
void LinkedList::display() {
    Node* temp = head;
    while(temp!=NULL) {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout << "\n";
}

struct BstNode {
    int data;
    BstNode* left;
    BstNode* right;
};

class BST {
public:
    BstNode* root;
    BST();
    BstNode* get_new_node(int);
    BstNode* insert(BstNode*, int);
    void inorder(BstNode*);
    bool search(BstNode*, int);
    BstNode* Delete(BstNode* , int);
    BstNode* find_min_node(BstNode*);
};
BST::BST() {
    root = NULL;
}

BstNode* BST::get_new_node(int data) {
    BstNode* newNode = new BstNode();
    newNode->data = data;
    newNode->left = newNode->right = NULL;
    return newNode;
}

BstNode* BST::insert(BstNode* root, int data) {
    if(root == NULL) {
        root = get_new_node(data);
    }else if(data <= root->data) {
        root->left = insert(root->left, data);
    }else {
        root->right = insert(root->right, data);
    }
    return root;
}
bool BST::search(BstNode* root, int data) {
    if(root == NULL) {
        return false;
    }
    if(root->data == data) {
        return true;
    }
    if(data <= root->data) {
        return search(root->left, data);
    }else {
        return search(root->right, data);
    }
}
BstNode* BST::find_min_node(BstNode* root) {
    while(root->left != NULL) root = root->left;
	return root;
}
BstNode* BST::Delete(BstNode* root, int data) {
    if(root == NULL) return root;
    else if(data < root->data) root->left = Delete(root->left, data);
    else if(data > root->data) root->right = Delete(root->right, data);
    else {
        if(root->left == NULL && root->right == NULL) {
			delete root;
			root = NULL;
		}
        else if(root->left == NULL) {
            BstNode* temp = root;
            root = root->right;
            delete temp;
        }else if(root->right == NULL) {
            BstNode* temp = root;
            root = root->left;
            delete temp;
        }
        else {
            BstNode* temp = find_min_node(root->right);
            root->data = temp->data;
            root->right = Delete(root->right, temp->data);
        }
    }
    return root;
}

void BST::inorder(BstNode* root) {
    if(root == NULL) return;
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

int main() {
    LinkedList ls;
    BST bst;
    int n = 7;

    cout << "Input " << n << " nodes for LinkedList & Binary Search Tree\n\n";
    for(int i=0; i<n; i++) {
        cout << "insert node [" << i+1 << "] : ";
        int data; cin >> data;
        ls.insert(data);
        bst.root = bst.insert(bst.root, data);
    }

    cout << "\nLinked list : ";
    ls.display();
    cout << "total nodes : " << ls.getCount() << "\n";
    cout << "After swapping 1st node with 999\n";
    ls.swap(58, 0);
    ls.display();
    cout << "After swapping last node with 1000\n";
    ls.swap(25, 1);
    ls.display();
    int x;
    cout << "enter a element to delete from linked list: ";
    cin >> x;
    ls.Delete(x);
}

