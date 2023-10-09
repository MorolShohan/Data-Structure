#include <iostream>

using namespace std;

struct Node
{
    int data;
    Node *nextNode;
};

Node *firstNode, *currentNode, *newNode, *prevNode;

void createLinkedList()
{
    int n, data;

    cout<<"Enter the number of Nodes: ";
    cin>>n;

    for(int i = 1; i<=n; i++)       //(6)
    {
        newNode = new (Node);       //(1)

        //(2)
        cout<<"Enter the element of Node "<<i<<": ";
        cin>>data;

        newNode->data = data;
        newNode->nextNode = NULL;
        //----
        if(firstNode == NULL)   //(3)
        {
            //(4)
            firstNode = newNode;
            currentNode = newNode;
            //---
        }
        else
        {
            //(5)
            currentNode->nextNode = newNode;
            currentNode = newNode;
            //---
        }
    }
}

void printList()
{
    currentNode = firstNode;

    while(currentNode != NULL)
    {
        cout<<currentNode->data<<"-->";
        currentNode = currentNode->nextNode;
    }
    cout<<endl;
}

bool searchElement(int element)
{
    bool flag = false;
    currentNode = firstNode;

    while(currentNode != NULL)
    {
        if(currentNode->data == element)
        {
            flag = true;
            break;
        }
        else
        {
            currentNode = currentNode->nextNode;
        }
    }
    return flag;
}

void insertAtFirst()
{
     newNode = new (Node);

     cout<<"Enter the Data for First Node: ";
     cin>>newNode->data;
     newNode->nextNode = NULL;

     newNode->nextNode = firstNode;
     firstNode = newNode;

}

void insertAtLast()
{
     newNode = new (Node);

     cout<<"Enter the Data for Last Node: ";
     cin>>newNode->data;
     newNode->nextNode = NULL;

     currentNode = firstNode;

     while(currentNode->nextNode != NULL)
     {
         currentNode = currentNode->nextNode;
     }

     currentNode->nextNode = newNode;
}

void insertSomewhereInMiddle()
{
    int prevElement;

    cout<<"Enter the previous element: ";
    cin>>prevElement;

    bool found = searchElement(prevElement);

    if(found)
    {
         newNode = new (Node);

         cout<<"Enter the Data for a Node after "<<prevElement<<" : ";
         cin>>newNode->data;
         newNode->nextNode = NULL;

         newNode->nextNode = currentNode->nextNode;
         currentNode->nextNode = newNode;
    }
    else
    {
        cout<<prevElement<<" NOT found in the list and can not be inserted "<<endl;
    }
}

void deleteTheFirst()
{
    Node *p=head;
        head=head->next;
        delete p;
}

void deleteTheLast()
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

void deleteSomewhereInMiddle()
{
    int element;
    cout<<"Enter the data of the node that will be deleted from middle: ";
    cin>>element;

    bool found = searchElement(element);

    if(found)
    {
        currentNode = firstNode;

        while(currentNode->data != element)
        {
            prevNode = currentNode;
            currentNode = currentNode->nextNode;
        }
        prevNode->nextNode = currentNode->nextNode;

        delete currentNode;
    }
    else
    {
        cout<<"Not Found and cannot be Deleted"<<endl;
    }
}

int main()
{
    createLinkedList();
    printList();

    int element;
    cout<<"Enter the element to search: ";
    cin>>element;

    bool found = searchElement(element);

    if(found == true)
    {
        cout<<element<< " Found in the list"<<endl;
    }
    else
    {
        cout<<element<< " NOT Found in the list"<<endl;
    }

    insertAtFirst();
    printList();

    insertAtLast();
    printList();

    insertSomewhereInMiddle();
    printList();

    deleteSomewhereInMiddle();
    printList();

    deleteTheLast();
    printList();

    deleteTheFirst();
    printList();
}
