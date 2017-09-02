#include <iostream>
using namespace std;

class Node
{
public:
	int data;
	Node *next;
	Node(int d)
	{
		data = d;
		next = NULL;
	}
};

Node* insert(Node* head,int d)
{
	Node *temp = new Node(d);
	if(head==NULL)
	{
		return temp;
	}
	temp->next = head;
	return temp;
}

Node* createList() {
	Node * head = NULL;
	int x;

	while (true) {
		cin >> x;
		if (x == - 1) break;
		head = insert(head, x);
	}
	return head;
}

void printll(Node* head)
{
	Node* cur = head;
	while(cur!=NULL)
	{
		cout<<cur->data<<" ";
		cur=cur->next;
	}
}

Node* searchLL(Node* head,int x)
{
	if(head == NULL)
	{
		return NULL;
	}
	if(head->data==x)
	{
		return head;
	}
	 return searchLL(head->next,x);
}

int lengthLL(Node* head)
{
	int len = 0;
	while(head)
	{
		len++;
		head=head->next;
	}
	return len;
}

int main()
{
	Node* head = createList();
	printll(head);	
	// int val;
	// cin>>val;
	// Node* ans = searchLL(head,val);
	// cout<<ans<<" ";
	// if(ans!=NULL) cout<<ans->data;
	int len = lengthLL(head);
	cout<<"numbers of elements in the linked list:"<<len;
}