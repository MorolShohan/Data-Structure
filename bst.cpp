#include<iostream>
using namespace std;

class BST
{
    struct node
{
    int data;
    node *left, *right;
};

node *root;

node* insert(int x, node* t)
{
    if(t == NULL)
    {
        t = new node;
        t->data =x;
        t->left = t->right = NULL;
    }
    else if (x < t->data)
    {
        t->left = insert(x, t->left);
    }

    else if(x > t-> data)
    {
        t-> right = insert(x, t->right);
    }

    return t;
}

node* remove(int x, node* t)
{
    return t;
}

void inorder(node *t)
{
    if(t ==NULL)
    {
        return;
    }
    inorder(t->left);
    cout<< t->data <<endl;
    inorder(t->right);
}

public:
    BST()
    {
        root = NULL;
    }
void insert(int x)
{
    root = insert(x, root);
}

void display()
{

    inorder(root);
}
};


int main()
{
    BST t;
    t.insert(10);
    t.insert(7);
    t.insert(12);
    t.insert(4);
    t.insert(8);

    t.display();

    return 0;
}
