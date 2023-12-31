#include <bits/stdc++.h>
using namespace std;

class BST
{
    int data;
    BST *left, *right;

public:
    BST();
    BST(int);

    BST* Insert(BST*,int);
    BST* Delete(BST*, int);
    BST* findSuccessor(BST*);
    bool Search(BST*,int);
    void inorder(BST*);
    void level(BST*,int);

};

BST bst, *root = NULL;

BST::BST():data(0),left(NULL),right(NULL)
{
}

BST* BST::findSuccessor(BST* root)
{
    BST* tmp = NULL;
    if(root->left == NULL) return root;
    tmp = findSuccessor(root->left);
    return tmp;
}

BST* BST::Delete(BST* root, int deldata)
{
    if(!root) return root;

    if(deldata < root->data)
        root->left = Delete(root->left, deldata);
    else if(deldata > root->data)
        root->right = Delete(root->right, deldata);
    else
    {
        if(root->right == NULL && root->left == NULL)
            return NULL;
        else if(root->right == NULL && root->left != NULL)
        {
            BST* tmp = root->left;
            free(root);
            return tmp;
        }
        else if(root->left == NULL && root->right != NULL)
        {
            BST* tmp = root->right;
            free(root);
            return tmp;
        }
        else
        {
            BST* smallest = findSuccessor(root->right);
            root->data = smallest->data;
            root->right = Delete(root->right,smallest->data);
        }
    }
    return root;

}


BST::BST(int value)
{
    data = value;
    left = right = NULL;
}

BST* BST::Insert(BST* root, int value)
{
    if(!root) return new BST(value);

    if(value > root->data)
        root->right = Insert(root->right,value);
    else root->left = Insert(root->left, value);
    return root;
}

void BST::inorder(BST* root)
{
    if(!root) return;

    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

bool BST::Search(BST* root,int data)
{
    if(root == NULL) return false;
    if(root->data == data) return true;

    if(data < root->data)
        return Search(root->left,data);
    else
        return Search(root->right,data);
}

void BST::level(BST* root,int lvl)
{
    if(lvl==1)
    {
        cout << root->data << " ";
        return;
    }

    level(root->left,lvl-1);
    level(root->right,lvl-1);

}
// Linked List portion
struct linkedList
{
    int data;
    linkedList *next;
};
void ll_insert(linkedList** head_ref,int data)
{
    linkedList *newNode = new linkedList();
    newNode->data = data;
    newNode->next = *head_ref;
    *head_ref = newNode;
}

void ll_Delete(linkedList** head_ref, int key)
{
    linkedList* temp = *head_ref;
    linkedList* prev = NULL;

    if (temp != NULL && temp->data == key)
    {
        *head_ref = temp->next;
        delete temp;
        return;
    }
      else
    {
    while (temp != NULL && temp->data != key)
    {
        prev = temp;
        temp = temp->next;
    }

    if (temp == NULL)
        return;

    prev->next = temp->next;

    delete temp;
    }
}

void ll_search(linkedList* head,int data)
{
    while(head != NULL)
    {
        if(head->data == data)
        {
            cout << data << " is found" << endl;
            return;
        }
        head = head->next;
    }
    cout << data << " not found!!" << endl;
}

void ll_print(linkedList* head)
{
    while(head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << "\n";
}
void getCount(linkedList *head)
{
    int i = 0;
    while(head != NULL)
    {
        i++;
        head = head->next;
    }
    cout << "getCount : " << i << endl;
}

// mixed
void convert(linkedList** head)
{
    if(!root) root = bst.Insert(root,(*head)->data);
    *head = (*head)->next;
    while(*head != NULL)
    {
        bst.Insert(root,(*head)->data);
        *head = (*head)->next;
    }
}
int main()
{
	linkedList *head = NULL;
	ll_insert(&head,80);
	ll_insert(&head,60);
	ll_insert(&head,70);
	ll_insert(&head,40);
	ll_insert(&head,20);
	ll_insert(&head,30);
	ll_insert(&head,50);
	ll_insert(&head,50);

    cout << "Linked list : ";
    ll_print(head);
    ll_Delete(&head,50);
    cout << "Updated Linked list : ";
    ll_print(head);

    cout << "Search Linked list : ";
    ll_search(head,8);

    getCount(head);


    cout << "\n\nBST " << endl;
    convert(&head);

    bst.Insert(root,90);

    cout << "Inorder : ";
    bst.inorder(root);
    cout << "\n";

    cout << "BST deleting 90 " << endl;
    bst.Delete(root,20);

    cout << "After deletion Inorder : ";
    bst.inorder(root);
    cout << "\n";

    if(bst.Search(root,30)) cout << "Found in bst" << endl;
    else cout << "Not found in bst" << endl;

}
