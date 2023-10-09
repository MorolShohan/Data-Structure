#include <iostream>
using namespace std;

class Node
{
public:
    string data;
    Node *next;
};

class LinkedList
{
    Node *head=NULL,*current=NULL;
public:

    Node* createNode(string value)
    {
        Node *temp=new Node();
        temp->data=value;
        temp->next=NULL;
        return temp;
    }
    void insertAtFirst(string value)
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

    void insertAtLast(string value)
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

    void insertAfterValue(string value,string searchValue)
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
    l.insertAtFirst("IP -->");
    l.insertAtFirst("OOP1-->");
    l.insertAtLast("DS-->");
    l.insertAtLast("ALGO-->");
    l.insertAtLast("TOC-->");
   l.displayElements();
   // l.insertAfterValue(30,10);
   // l.displayElements();
   // l.insertAfterValue(15,22);
   // l.displayElements();
    //l.deleteFromFirst();
    //l.displayElements();
    //l.deleteFromFirst();
   l.deleteFromLast();
   // l.deleteFromLast();
   // l.displayElements();
  ////  l.insertAtLast(100);
   l.displayElements();
    return 0;
}
