#include <iostream>

using namespace std;

struct Node
{
    string data;
    Node *nextNode;
};

Node *firstNode, *currentNode, *newNode,*Temp;

void createLinkedList()
{
    int n;
    string data;

    cout<<"Enter the number of Nodes: ";
    cin>>n;

    for(int i = 1; i<=n; i++)
    {
        newNode = new (Node);


        cout<<"Enter the element of Node "<<i<<": ";
        cin>>data;

        newNode->data = data;
        newNode->nextNode = NULL;
        //----
        if(firstNode == NULL)
        {

            firstNode = newNode;
            currentNode = newNode;

        }
        else
        {

            currentNode->nextNode = newNode;
            currentNode = newNode;

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

void deleteTheFirst()
{

    Temp = firstNode;

    firstNode = firstNode->nextNode;

    delete Temp;

}
int main()
{
    createLinkedList();
    cout << "Initial Linked List:"<<endl;

    printList();

    int element;
    cout<<"Delete the First element: ";

    deleteTheFirst();
    printList();
}
