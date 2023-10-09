#include <iostream>
using namespace std;

class Node
{
public:
    int data;
	Node * next;
};

class LinkedList
{
	Node *head = NULL, *current = NULL;
	int count = 0;
	public:

		Node* createNode(int value)
		{
			Node *temp = new Node();
			temp->data = value;
			temp->next = NULL;
			count++;
			return temp;
		}

	void insertAtFirst(int value)
	{
		Node *temp = createNode(value);
		if (head == NULL)
		{
			head = temp;
			current = temp;
		}
		else
		{
			temp->next = head;
			head = temp;
		}
	}

	void insertAtLast(int value)
	{
		Node *temp = createNode(value);
		if (head == NULL)
		{
			head = temp;
			current = temp;
		}
		else
		{
			current->next = temp;
			current = current->next;
		}
	}

	void insertAfterValue(int value, int searchValue)
	{
		Node *temp = createNode(value);
		if (head == NULL)
		{
			head = temp;
			current = temp;
		}
		else
		{
			Node *p = head;
			while (p != NULL)
			{
				if (p->data == searchValue)
				{
					temp->next = p->next;
					p->next = temp;
					break;
				}
				else
				{
					p = p->next;
				}
			}
		}
	}

	void deleteFromFirst()
	{
		Node *p = head;
		head = head->next;
		delete p;
	}

	void deleteFromLast()
	{
		Node *temp = head, *p;
		while (temp->next->next != NULL)
		{
			temp = temp->next;
		}

		p = temp->next;
		temp->next = NULL;
		current = temp;
		delete p;
	}

	void displayElements()
	{
		Node *p = head;
		while (p != NULL)
		{
			cout << p->data << " ";
			p = p->next;
		}

		cout << endl;
	}

	int getCount()
	{
		return count;
	}

	void swap(int value, int position)
	{
		int tV;
		Node *temp = createNode(value);
		Node *p = head;
		while (p != NULL)
		{
			if (p->data == value)
			{
				if (position == 0)
				{
					tV = p->data;
					p->data = head->data;
					head->data = tV;
				}
				else if (position == 1)
				{
					tV = p->data;
					p->data = current->data;
					current->data = tV;
				}

				break;
			}
			else
			{
				p = p->next;
			}
		}
	}
};
class BSNode
{
public:
    int data;
	BSNode *left = NULL;
	BSNode *right = NULL;
};

class BST
{
	public:
		BSNode* createNode(int value)
		{
			BSNode *ptr = new BSNode();
			ptr->data = value;
			ptr->left = NULL;
			ptr->right = NULL;
			return ptr;
		}

	BSNode* insertNode(BSNode *ptr, int value)
	{
		if (ptr == NULL)
		{
			ptr = createNode(value);
		}
		else if (value < ptr->data)
		{
			ptr->left = insertNode(ptr->left, value);
		}
		else if (value > ptr->data)
		{
			ptr->right = insertNode(ptr->right, value);
		}

		return ptr;
	}

	void inorder(BSNode *ptr)
	{
		if (ptr != NULL)
		{
			inorder(ptr->left);
			cout << ptr->data << " ";
			inorder(ptr->right);
		}
	}

	BSNode* searchNode(BSNode *ptr, int value)
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

	BSNode* findMin(BSNode *ptr)
	{
		while (ptr->left != NULL)
		{
			ptr = ptr->left;
		}

		return ptr;
	}

	BSNode* findMax(BSNode *ptr)
	{
		while (ptr->right != NULL)
		{
			ptr = ptr->right;
		}

		return ptr;
	}

	BSNode* deleteNode(BSNode *ptr, int value)
	{
		ptr = searchNode(ptr, value);
		if (ptr == NULL)
		{
			return ptr;
		}
		else
		{
			if (ptr->left == NULL && ptr->right == NULL)
			{
				delete ptr;
				ptr = NULL;
			}
			else if (ptr->right == NULL)
			{
				BSNode *temp = ptr;
				ptr = ptr->left;
				delete temp;
			}
			else if (ptr->left == NULL)
			{
				BSNode *temp = ptr;
				ptr = ptr->right;
				delete temp;
			}
			else
			{
				BSNode *temp = findMin(ptr->right);
				ptr->data = temp->data;
				ptr->right = deleteNode(ptr->right, temp->data);
			}

			return ptr;
		}
	}
};

int main()
{
	LinkedList l;
	l.insertAtFirst(10);
	l.insertAtFirst(5);
	l.insertAtLast(20);
	l.insertAtLast(22);
	l.swap(20, 1);
	l.displayElements();
	BST bst;
	BSNode *root = NULL, *tmp = NULL;
	root = bst.insertNode(root, 10);
	tmp = bst.insertNode(root, 5);
	tmp = bst.insertNode(root, 20);
	tmp = bst.insertNode(root, 22);
	bst.inorder(root);
	return 0;
}
