
#include<iostream>
#define sizes 5 /// Declaring constant Variable;
using namespace std;
int size = 5;
int showArr[sizes];

//********************************************** Creating Root Class ********************************************//
class Root{
public:
    int data;
    Root *left;
    Root *right;
    Root(){}
    Root(int data){
        this->data = data;
        left = NULL;
        right = NULL;
    }
};
//********************************************** Creating BST Class ********************************************//
class BST{
public :
    BST(){}
    void Search(int item, Root *head);
    void inOrderPrint(Root* head);
    Root* insertNode(int item,Root *head);



    Root* deleteNode(Root *ptr, int value)
    {
		ptr = searchNode(ptr, value);
		if (ptr == NULL)
		{
			return ptr;
		}
		else ///BSNode
		{
			if (ptr->left == NULL && ptr->right == NULL)
			{
				delete ptr;
				ptr = NULL;
			}
			else if (ptr->right == NULL)
			{
				Root *temp = ptr;
				ptr = ptr->left;
				delete temp;
			}
			else if (ptr->left == NULL)
			{
				Root *temp = ptr;
				ptr = ptr->right;
				delete temp;
			}
			else
			{

			}
            cout<< "Node Deleted !!"<<endl;
			return ptr;
		}
	}


	Root* searchNode(Root *ptr, int value)
	{
		if (ptr == NULL)
			return ptr;
		else if (value < ptr->data)
		{
			ptr = searchNode(ptr->left, value);
		}
		else if (value > ptr->data)
		{
			ptr = searchNode(ptr->right, value);
		}

		return ptr;
	}





};///////////////////

//---------------------------------------------- Implementing BST Class Methods --------------------------------//
void BST :: Search(int item, Root *head){
    int flag = 0 ;
    string flagName = "Root ";

    while(head != NULL){
        if(item == head->data){
            cout<< "Item Found at "<< flagName<<" Node "<<flag<<endl;
            break;
        }else if(item > head->data){
            head = head->right;
            flagName = flagName + "Right ";
            flag++;
        }else if(item < head->data){
            head = head->left;
            flagName = flagName + "Left ";
            flag++;
        }else{
            cout<< "Item Not Found"<<endl;
        }
    }
}

void BST :: inOrderPrint(Root* head){
    if(head != NULL){return ;}
    inOrderPrint(head->left);
    cout << head->data << " ";
    inOrderPrint(head->right);
}

Root* BST :: insertNode(int item,Root *head){
    if(!head){ /// When Root is null
        return new Root(item); /// Then set the value in the root
    }
    if(item > head->data){
        head->right =  insertNode(item,head->right);
    }else if(item < head->data){
        head->left = insertNode(item,head->left);
    }
    return head;
}
////



//******************************************** Creating LinkedList Class *************************************//
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
    int headVal;
    int lastVal;
    int flag = 0;

    Node* createNode(int value)
    {
        Node *temp=new Node();
        temp->data=value;
        temp->next=NULL;
        return temp;
    }
    void insertAtFirst(int value)
    {
        Node *temp=createNode(value);
        if(head==NULL){
            head=temp;
            current=temp;
        }
        else{
            temp->next=head;
            head=temp;
        }
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

    int binarySearch(int item){
        int low = 0;
        int range = size;
        int foundAtPos = -1;


        while(low <=range){
            int mid = (low+range)/2;
            if(getNode(mid)->data == item){ /// Here by using get node we can get the mid node & value
                cout<<endl;
                foundAtPos = mid;
                cout<<"Element found at index: "<<mid<<endl;
                break;
            }

            if(item > getNode(mid)->data ){ /// Shift in right
                low = mid+1;
            }else{ // Shift in Left
                range = mid-1;
            }
        }
        return foundAtPos;
    }


    Node* getNode(int num){
        int size = 1;
        while(head != NULL){
            head =  head->next;
            size++;
            if(size == num){
                return head->next;
            }
        }
    }


    void swap(int value, int position){
		int tV;
		Node *temp = createNode(value);
		Node *p = head;
		while (p != NULL){
			if (p->data == value){
				if (position == 0){
					tV = p->data;
					p->data = head->data;
					head->data = tV;
				}else if (position == 1){
					tV = p->data;
					p->data = current->data;
					current->data = tV;
				}
				break;
			}else{
				p = p->next;
			}
		}
	}

    getCount(int arr[],int size){
        int nodeCounter = 0;
        int i = 0;
        for(int i=0;i<size;i++){
            nodeCounter++;
        }
        return nodeCounter;
    }


    void deleteFromFirst(){
		Node *p = head;
		head = head->next;
		delete p;
		cout<< "First Node Deleted !! "<<endl;
	}

	void deleteFromLast(){
		Node *temp = head, *p;
		while (temp->next->next != NULL){
			temp = temp->next;
		}
		p = temp->next;
		temp->next = NULL;
		current = temp;
		delete p;
		cout<< "Last Node Deleted !! "<<endl;
	}




};

int main(){
    BST tree;

    LinkedList list ;
    int number[size]; /// Array
    int switchVal = 1;
    int linkedListSearchVal;
    int pos;

    cout<<"Just enter "<<size<<" Numbers"<<endl;

    for(int i=0;i<size;i++){
        cout<<"Enter Number ["<<(i+1)<<"] : ";
        cin>>number[i];
    }

    Root *root = new Root(number[0]);

    for(int i=0;i<size;i++){
        int val = number[i];
        list.insertAtFirst(val);
    }
    cout<<"Inserted into the Linked-List  !!"<<endl;
    cout<<"Elements in the linked-list are = ";
    list.displayElements();
    cout<<"Total Nodes available in Linked-list = "<<(list.getCount(number,size))<<endl;
    int counter=0;
    cout<< "Enter a value to search in the linked list : ";
    cin>>linkedListSearchVal;


    cout<< "Enter Position Between 0 & 1 : ";
    cin>>pos;
    if(pos == 0 || pos ==1){counter++;}else{cout<<"Please Enter a Valid Input !!"<<endl;exit(1);}

    list.swap(linkedListSearchVal,pos);
    cout<<"Enter Value to Swap : ";

    cout<<"After Swapping Linked-List Will be = ";
    list.displayElements();

    for(int i=1;i<size;i++){
    int val = number[i];
        tree.insertNode(val,root);
    }
    cout<<endl<< "Inserted into the Binary Searched Tree  !!"<<endl;
    int treeSearchVal;
    cout<<"Enter Value to search : ";
    cin>>treeSearchVal;
    tree.Search(treeSearchVal,root);
    cout<< "Enter Value to Remove a node From Tree = ";
    int removeVal;
    cin>>removeVal;

    tree.deleteNode(root,removeVal);
    cout<< "Press 0 For delete from First"<<endl;
    cout<< "Press 1 For delete from Last"<<endl;
    cout<< "Enter Your Choice >> ";
    int link_delete;
    cin>>link_delete;
    switch(link_delete){
        case 0:{
            list.deleteFromFirst();
            break;
        }
        case 1:{
            list.deleteFromLast();
            break;
        }
        default:{
            cout<< "Insert a valid Input !!!"<<endl;
            break;
        }
    }

}




