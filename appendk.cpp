

/*
void bubblesort(Node* head)
{
	Node*i;
	Node*j;

	for(i=head;i!=NULL;i=i->next)
	{
		for(j=i->next;j!=NULL;j=j->next)
		{
			if(i->data>j->data)
			{
				int temp=i->data;
				i->data=j->data;
				j->data=temp;
			}
		}
	}
}

Node* append(Node*head,int n,int k){
Node*cur=head;
Node*q=head;
Node*p;

	for(int i=0;i<n-k;i++)
	{
      cur=cur->next;
	}

Node*cur1=cur->next;
p=cur1;
cur->next=NULL;
for(int j=0;j<k;j++)
{
	p=p->next;
}
p->next=q;
return cur1;
}

*/
#include<iostream>
using namespace std;

class Node{
	
    public:
	int data;
	Node* next=NULL;

	Node(int x)
	{
		data=x;
	}
};

Node* createLL(int n)
{
	Node* head=NULL;
	Node* tail=NULL;

	int i=0;
	while(i<n)
	{
		int x;
		cin>>x;

		Node* cur = new Node(x);

		if(!head)
		{
			head=cur;
			tail=cur;
		}
		else
		{
			tail->next=cur;
			tail=tail->next;
		}
		i++;
	}

	return head;
}

void print(Node* head)
{
	Node* temp = head;
	while(temp)
	{
		cout<<temp->data<<" ";
		temp=temp->next;
	}
}

Node* appendK(Node* head,int k,int n)
{  if(!head)
   {
       return NULL;
   }
     
 Node* p=head;
  Node* q=head;

  if(k<n)
  { int i=0;
    while(i<n-k-1)
    {
    	p=p->next;
    	i++;
    }

    Node* newHead=p->next;
    p->next=NULL;
    Node* r = newHead;
    
    int j=0;
    while(j<k-1)
    {
      r=r->next;
       j++;
    }

      r->next=q;

      return newHead;

  }
  else
  	{
  	k = k % n;
  	int a=0;
    while(a<n-k-1)
    {
    	p=p->next;
    	a++;
    }

    Node* newHead=p->next;
    p->next=NULL;
    Node* r = newHead;
    
    int b=0;
    while(b<k-1)
    {
      r=r->next;
       b++;
    }

      r->next=q;

      return newHead;

  }
  }



int main()
{   
	int N;
	cin>>N;
	Node* head=createLL(N);
	int K;
	cin>>K;
	Node* head1=appendK(head,K,N);
	print(head1);
}