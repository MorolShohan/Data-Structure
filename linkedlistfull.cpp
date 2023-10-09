#include <iostream>
using namespace std;
struct Node
{
int data;
Node *nextNode;
};
Node *newNode, *firstNode, *lastNode, *currentNode ;
bool isEmpty()
{
if (firstNode == NULL && lastNode == NULL)
return true;
else
return false;
}
void insertNodeAtFirst(int data)
{
Node *newNode = new Node();
newNode->data = data;
newNode->nextNode = NULL;
if (isEmpty())
{
firstNode = newNode;
lastNode = newNode;
}
else
{
newNode->nextNode = firstNode;
firstNode = newNode;
}
}
void insertNodeAtLast(int data)
{
Node *newNode = new Node();
newNode->data = data;
newNode->nextNode = NULL;
if (isEmpty())
{
firstNode = newNode;
lastNode = newNode;
}
else
{
lastNode->nextNode = newNode;
lastNode = newNode;
}
}
void insertNodeInMiddle(int index, int data)
{ index=index-1;
Node *newNode = new Node();
newNode->data = data;
newNode->nextNode = NULL;
int i = 0;
currentNode = firstNode;
while (currentNode != NULL && i < index)
{
i++;
currentNode = currentNode->nextNode;
}
newNode->nextNode = currentNode->nextNode;
currentNode->nextNode = newNode;
}
void deleteNodeAtFirst()
{
firstNode = firstNode->nextNode;
}
void deleteNodeAtLast()
{
currentNode = firstNode;
while (currentNode->nextNode != lastNode)
{
currentNode = currentNode->nextNode;
}
lastNode = currentNode;
lastNode->nextNode = NULL;
}
void deleteNodeInMiddle(int index)
{
int i = 0;
currentNode = firstNode;
while (currentNode != NULL && i < index - 1)
{
i++;
currentNode = currentNode->nextNode;
}
currentNode->nextNode = (currentNode->nextNode)->nextNode;
}
void printLinkedList()
{
currentNode = firstNode;
while (currentNode != NULL)
{
cout << currentNode->data << " ";
currentNode = currentNode->nextNode;
}
cout << endl;
}
void count()
{
int c = 0;
for (currentNode = firstNode; currentNode != NULL; currentNode = currentNode->nextNode)
{
c++;
}
cout << c << endl;
}
void searchElement()
{
bool flag = false;
int element;
cout << "Enter the element to search: ";
cin >> element;
currentNode = firstNode;
while (currentNode != NULL)
{
if (currentNode->data == element)
{
cout << "Found" << endl;
flag = true;
break;
}
else
{
currentNode = currentNode->nextNode;
}
}
if (flag == false)
{
cout << "Not Found" << endl;
}
}
int main()
{
int n,x;
cout << "Enter the number of nodes: ";
cin >> n;
for (int i = 1; i <= n; i++)
{
newNode = new (Node);
cout << "Enter the Value of node no {" << i << "} : ";
int element;
cin >> element;
newNode->data = element;
newNode->nextNode = NULL;
if (firstNode == NULL)
{
firstNode = newNode;
currentNode = newNode;
lastNode = currentNode;
}
else
{
currentNode->nextNode = newNode;
currentNode = newNode;
lastNode = currentNode;
}
}
cout << "The Linked List is: ";
printLinkedList();
cout<<endl;
bool check=true;
while (check)
{
cout<<"1. Search Element"<<endl;
cout<<"2. Insert Node At First"<<endl;
cout<<"3. Insert Node in Middle"<<endl;
cout<<"4. Insert Node At Last"<<endl;
cout<<"5. Delete Node At First"<<endl;
cout<<"6. Delete Node in Middle"<<endl;
cout<<"7. Delete Node At Last"<<endl;
cout<<"8. Exit"<<endl;
cout<<"Enter Option :" ; cin>>x;
switch(x)
{
case 1 : searchElement(); break;
case 2 : int first;
cout<<"Enter Node to Insert At First :"; cin>>first;
insertNodeAtFirst(first);
cout << "\nThe Linked List is: ";
printLinkedList(); break;
case 3 : int middle, index;
cout<<"Enter Node to Insert At Middle :"; cin>>middle;
cout<<"Enter Node Index :"; cin>>index;
insertNodeInMiddle(index, middle);
cout << "\nThe Linked List is: ";
printLinkedList(); break;
case 4 :int last;
cout<<"Enter Node to Insert At Last :"; cin>>last;
insertNodeAtLast(last);
cout << "\nThe Linked List is: ";
printLinkedList(); break;
case 5 : deleteNodeAtFirst();
cout << "\nThe Linked List is: ";
printLinkedList(); break;
case 6 : int indexToDelete;
cout<<"Enter Middle node Index :" ;
cin>>indexToDelete;
deleteNodeInMiddle(indexToDelete);
cout << "\nThe Linked List is: ";
printLinkedList(); break;
case 7 : deleteNodeAtLast();
cout <<"\nThe Linked List is: ";
printLinkedList();
break;
case 8 : cout<<"You've chosen to Exit"<<endl;
check=false;
break;
}
}

return 0;
}
