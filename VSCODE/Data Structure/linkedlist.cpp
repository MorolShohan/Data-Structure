#include<iostream>
#include<stdlib.h>
using namespace std;

struct node
{
    int data;
    struct node *next;
};

struct node * head;
void print()
{
    struct node * temp;
    temp = head;
    while(temp !=NULL)
    {
        cout<<temp->data<<endl;
        temp = temp->next;
    }
}
int main()
{
  struct node* head = NULL;
  struct node* second = NULL;
  struct node* third = NULL;

  head -> next = (struct node*)malloc(sizeof(struct node));
  second ->next= (struct node*)malloc(sizeof(struct node));
    third->next = (struct node*)malloc(sizeof(struct node));

    head ->next->data = 1;
    head->next = second;

    second->next->data =2;
    second->next = third;

    third->next->data = 3;
    third->next = NULL;

    print();


    return 0;
}


