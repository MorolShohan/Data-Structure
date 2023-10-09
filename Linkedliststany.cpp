#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

class LinkedList
{
    Node *head=NULL,*current=NULL;
public:

    Node* createNode(int value)
    {
        Node *temp=new Node();
        temp->data=value;
        temp->next=NULL;
        return temp;
    }
    void insertAtFirst(int value)
    {
//        Node *temp=new Node();
//        temp->data=value;
//        temp->next=NULL;

        Node *temp=createNode(value);
        if(head==NULL)
        {
            head=temp;
            current=temp;
        }
        else
        {
            temp->next=head;
            head=temp;
        }
    }

    void insertAtLast(int value)
    {
//        Node *temp=new Node();
//        temp->data=value;
//        temp->next=NULL;
        Node *temp=createNode(value);
        if(head==NULL)
        {
            head=temp;
            current=temp;
        }
        else
        {
            current->next=temp;
            current=current->next;
        }
    }

    void insertAfterValue(int value,int searchValue)
    {
//        Node *temp=new Node();
//        temp->data=value;
//        temp->next=NULL;
        Node *temp=createNode(value);
        if(head==NULL)
        {
            head=temp;
            current=temp;
        }
        else
        {
            Node *p=head;
            while(p!=NULL)
            {
                if(p->data==searchValue)
                {
                    temp->next=p->next;
                    p->next=temp;
                    break;
                }
                else
                {
                    p=p->next;
                }
            }
        }
    }

    void deleteFromFirst()
    {
        Node *p=head;
        head=head->next;
        delete p;
    }

    void deleteFromLast()
    {
        Node *temp=head,*p;
        while(temp->next->next!=NULL)
        {
            temp=temp->next;
        }
        p=temp->next;
        temp->next=NULL;
        current=temp;
        delete p;
    }
    void displayElements()
    {
        Node *p=head;
        while(p!=NULL)
        {
            cout<<p->data<<" ";
            p=p->next;
        }
        cout<<endl;
    }
};

int main()
{
    LinkedList l;
    l.insertAtFirst(10);
    l.insertAtFirst(5);
    l.insertAtLast(20);
    l.insertAtLast(22);
    l.displayElements();
    l.insertAfterValue(30,10);
    l.displayElements();
    l.insertAfterValue(15,22);
    l.displayElements();
    //l.deleteFromFirst();
    //l.displayElements();
    //l.deleteFromFirst();
    l.deleteFromLast();
    l.deleteFromLast();
    l.displayElements();
    l.insertAtLast(100);
    l.displayElements();
    return 0;
}

