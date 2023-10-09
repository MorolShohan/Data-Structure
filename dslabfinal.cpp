#include<iostream>
#include<stdio.h>

using namespace std;

typedef struct nodee
{
int data;
nodee *next;
nodee *prev;
}node;
node * addnode(node*);
void shownodes(node*);
node delete_node(node);
node *head;
int main()
{
int ch;
ch=1;
head=NULL;
while( ch != 0)
{
cout<<"\nMENU\n";
cout<<"\t1.ADD A NODE\n";
cout<<"\t2.DISPLAY THE NODES\n";
cout<<"\t3.DELETION\n";
cout<<"\t0.QUIT\n";
cin>>ch;switch(ch)
{
case 1:
head=addnode(head);break;
case 2:
shownodes(head);break;
case 3:
head=delete_node(head);break;
case 0:
ch=0;break;
default:
cout<<"INVALID CHOICE ?? \n";break;
}
}
return 0;
}
node * addnode(node *f)
{
node *n;
int ch;
n=new node;
cout<<"ENTER A ELEMENT TO BE INSERTED :";
cin>>n->data;
n->next=n->prev=NULL;
if(f==NULL)
{f=n;cout<<"\nLIST IS EMPTY.. NODE IS INSERTED AT THE BEGINING..\n";}
else{
cout<<"WHERE YOU WANT TO INSERT :\n";
cout<<"From\n\t1.BEG\n\t2.END\n";
cin>>ch;
switch(ch)
{
case 1:
n->next=f;
f->prev=n;
f=n;
cout<<"SUCCESS\n";
break;
case 2:
node *temp;

temp=f;
while(temp->next != NULL)
{
temp=temp->next;
}
temp->next=n;
n->prev=temp;
cout<<"SUCCESS \n";
break;
default:
cout<<"INVALID ??\n";break;
}
}
return f;
}
void shownodes(node *f)
{
node *temp=f;
if ( temp == NULL ){
cout<<endl<<"EMPTY LIST ..\n";
return;}
else{
cout<<"HEAD";
while(temp!=NULL)
{cout<<" <=> ";
cout<<temp->data;temp=temp->next;}
cout<<" -> NULL "<<endl;}
}
node * delete_node(node *f)
{
node *temp1,*temp2;int ch;
temp1=temp2=f;
if( temp1 == NULL ){
cout<<"\nEMPTY LIST ... CANNOT BE DELETED \n";}
else{
cout<<"From\n\t1.BEG\n\t2.END\n";
cin>>ch;
switch(ch){
case 1:f=f->next;
cout<<"SUCCESS\n";break;
case 2: while(temp1->next!=NULL){
temp2=temp1;temp1=temp1->next;}
temp2->next=NULL;
cout<<"SUCCESS \n";break;
default:cout<<"INVALID ??\n";break;}}
return f;
}

CODE FOR implementing BST using linkedlist:

struct nod {
   nod *l, *r;
   int d;
}*r = NULL, *p = NULL, *np = NULL, *q;

void create() {
   int v,c = 0;
   while (c < 6) {
      if (r == NULL) {
         r = new nod;
         cout<<"enter value of root node\n";
         cin>>r->d;
         r->r = NULL;
         r->l = NULL;
      } else {
         p = r;
         cout<<"enter value of node\n";
         cin>>v;
         while(true) {
            if (v< p->d) {
               if (p->l == NULL) {
                  p->l = new nod;
                  p = p->l;
                  p->d = v;
                  p->l = NULL;
                  p->r = NULL;
                  cout<<"value entered in left\n";
                  break;
               } else if (p->l != NULL) {
                  p = p->l;
               }
            } else if (v >p->d) {
               if (p->r == NULL) {
                  p->r = new nod;
                  p = p->r;
                  p->d = v;
                  p->l = NULL;
                  p->r = NULL;
                  cout<<"value entered in right\n";
                  break;
               } else if (p->r != NULL) {
                  p = p->r;
               }
            }
         }
      }
      c++;
   }
}

void inorder(nod *p) {
   if (p != NULL) {
      inorder(p->l);
      cout<<p->d<<endl;
      inorder(p->r);
   }
}

void preorder(nod *p) {
   if (p != NULL) {
      cout<<p->d<<endl;
      preorder(p->l);
      preorder(p->r);
   }
}

void postorder(nod *p) {
   if (p != NULL) {
      postorder(p->l);
      postorder(p->r);
      cout<<p->d<<endl;
   }
}

int main() {
   create();
   cout<<" traversal in inorder\n";
   inorder(r);
   cout<<" traversal in preorder\n";
   preorder(r);
   cout<<" traversal in postorder\n";
   postorder(r);
}
