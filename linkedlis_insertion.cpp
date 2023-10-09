#include<bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    node *link;
};
void insertFront(node *header , int data);
void insertLast(node *header , int data);
void insertAt(node *header , int data,int index);
void insertBeforeValue(node *header , int data, int value);

int main()
{
    node *header;
    header = malloc(sizeof(node));

    if (header == NULL)
    {
        cout<<"MEMORY NOT AVAILABLE"<<endl;
        return 0;
    }

    header->data =
}

