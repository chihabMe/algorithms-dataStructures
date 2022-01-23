#include <iostream>
using namespace std;

class stack {
private:
	struct node
	{
		int data;
		node *next;
	};

	node*top;

public:
	
	stack() {
		top = NULL;
	}

	void push(int data){
		node *temp = new node();
		temp->data=data;
		temp->next=top;
		top=temp;
	}
	void print(){
		node *temp=top;
		while(temp!=NULL){
			cout <<" "<<temp->data;
			temp=temp->next;
		}
		cout <<endl;
	}
	bool isEmpty(){
		return top==NULL;
	}
	void pop(){
		if(isEmpty()){
			cout<<"the stack is empty";
		}else{
			node*temp = top;

		top= top->next;
		temp=NULL;
		delete temp;
	}
	}
	void pop(int &var){
	if(isEmpty()){
			cout<<"the stack is empty";
		}else{
			node*temp = top;

		top= top->next;
		var = temp->data;
		temp=NULL;
		delete temp;
	}	
	}
	int getTop(){
		if(isEmpty()){
			cout<<"the stack is empty";
			return -1;

		}else{
		return top->data;
	}
	
	}
};
int main(){
	stack st ;
	st.push(1);
	st.push(2);
	st.push(3);
	st.push(4);
	st.print();


	st.print();


}