#include <iostream>
#include <cstring>
using namespace std;

class stack{
private:
	struct node{
		char data;
		node *next;
	};
	node *top;

public:

	stack(){
		top=NULL;
	}

	void push(char data){
		node *temp = new node();
		temp->data=data;
		temp->next=top;
		top=temp;
	}
	int isEmpty(){
		return top==NULL;
	}
	char pop(){
		if(isEmpty()){
			cout<<"the stack is empty";
		return '#';
		}else{
		node*temp = top;
		top= top->next;
		char data = temp->data;
		temp=NULL;
		delete temp;
		return data;
	
		}
	}
	char getTop(){
		if(isEmpty()){
			cout <<"the stack is empty";
			return '#';
		}else{
			return top->data;
		}
	}
	void print(){
		node *temp = top;
		cout<<"[";
		while(temp!=NULL){
			cout <<temp->data;
			temp=temp->next;
		}
		cout<<"]";
	}


};

int main(){
	char txt[10];
	cout <<endl<<"write your expressions=";
	cin>>txt;
	int len = strlen(txt);
	stack left;
	stack right;

	for(int i=0;i<len;i++){
		switch(txt[i]){
			case '(':
			case '{':
			case '[':
				cout <<txt[i];
				left.push(txt[i]);
			break;
			case ')':
			case ']':
			case '}':
				cout <<txt[i];
				right.push(txt[i]);

			break;


		}
		if(left.getTop() == '(' and right.getTop()==')'){
			left.pop();
			right.pop();
		}
		if(left.getTop() == '[' and right.getTop()==']'){
			left.pop();
			right.pop();	
		}
		if(left.getTop() == '{' and right.getTop()=='}'){
			left.pop();
			right.pop();
		}
	}

 	cout <<endl<<"----------end------------"<<endl;
	left.print();
	right.print();
	if(left.isEmpty() && right.isEmpty()){
	cout <<"the parentheses are balanced";
	}else{
		cout <<"the parentheses are not balanced";
	}
 	cout <<endl<<"----------end------------"<<endl;


}

