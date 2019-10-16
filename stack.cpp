/*
  Implementing stack using c++ class
*/

#include<iostream>

using namespace std;

class our_stack{
	private:
		int top;
		int *elements;
		int capacity;
		
	public:
	
		our_stack(int n){
			top = -1;
			capacity = n;
			elements = new int[n];
		}
		
		~our_stack(){
			delete elements;
		}
		
		void push(int x){
			if(top+1<capacity){
				elements[++top] = x;
			}
			else{
				cout<<"Stack full"<<endl;
			}
		}
		
		int pop(){
			if(top>=0){
				return elements[top--];	
			}
			else{
				return -1; // Stack empty
			}
		}
		
		int top_element(){
			if(top==-1){
				return 999999999;
			}
			return elements[top];
		}
		
		bool isEmpty(){
			if(top==-1){
				return true;
			}
			return false;
		}
		
		bool isFull(){
			if(top==99){
				return true;
			}
			return false;
		}
		
		int size(){
			return top+1;
		}
};

int main(){
	our_stack stack(3);
	
	int choice,x;
	A:
	cout<<endl;
	cout<<"Choose the operation to perform from following: "<<endl;
	cout<<"1. Push"<<endl;
	cout<<"2. Pop"<<endl;
	cout<<"3. Top"<<endl;
	cout<<"4. isEmpty"<<endl;
	cout<<"5. isFull"<<endl;
	cout<<"6. size"<<endl;
	cout<<"7. exit the application"<<endl;
	cout<<"Enter your choice: ";
	cin>>choice;
	
	switch(choice){
		case 1: cout<<"Enter element to push: ";
				cin>>x;
				stack.push(x);
				goto A;
				break;
		case 2: x = stack.pop();
				if(x!=-1){
					cout<<"Element popped from stack: "<<x<<endl;
				}
				else{
					cout<<"Cannot pop. Stack empty"<<endl;
				}
				goto A;
				break;
		case 3: cout<<"Element at top: "<<stack.top_element()<<endl;
				goto A;
				break;
		case 4: if(stack.isEmpty()){
					cout<<"Stack empty"<<endl;
				}
				else{
					cout<<"Stack not empty"<<endl;
				}
				goto A;
				break;
		case 5: if(stack.isFull()){
					cout<<"Stack full"<<endl;
				}
				else{
					cout<<"Stack not full"<<endl;
				}
				goto A;
				break;
		case 6: cout<<"Number of elements in stack: "<<stack.size()<<endl;
				goto A;
				break;
		case 7: exit(0);
		default: cout<<"Choose a valid option";
				 goto A;
	}
}
