#include <iostream>
using namespace std;

struct node
{
	int inf;
	node *next;
	};
	
class Linked_list
{
	private:
		node *head,*tail;
	public:
		Linked_list()
		{
			head = NULL;
			tail = NULL;
		}
			
		void add_node(int n)
		{
			node *tmp = new node;
			tmp->inf = n;
			tmp->next = NULL;	
			
			if(head == NULL)
				{
					head = tmp;
					tail = tmp;
				}
			else
				{
					tail->next = tmp;
					tail = tail->next;
				}
		}
		
		void display()
		{
			node *tmp;
			tmp = head;
			while(tmp!=NULL)
			{
				cout<<"  DATA: "<<tmp->inf<<"  ADDRESS: ";
				cout<<tmp->next<<endl;
				tmp = tmp->next;
			}
		}
	};
	
int main()
	{
		Linked_list a;
		a.add_node(1);
		a.add_node(2);
		a.add_node(3);
		a.add_node(4);
		a.add_node(5);
		a.display();
		return 0;
	}

