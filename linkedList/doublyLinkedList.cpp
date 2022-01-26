#include <iostream>
using namespace std;

class DoublyLinkedList{
private:
	struct Node{
		char data ; 
		Node *next,*prev;
	};
	Node *head,*tail;
	int length;

public:

	DoublyLinkedList(){
		head  = tail= NULL;
		length=0;
	}
	bool isEmpty(){
		return head==0;
	}

	void pushFisrt(char data){
		Node *newNode = new Node();
		newNode->data=data;
		if(isEmpty()){
			newNode->next=newNode->prev=NULL;
			head = tail = newNode;
		}else{
			newNode->prev=NULL;
			newNode->next=head;
			head->prev = newNode;
			head = newNode;
		}
		length++;
	}
	void print(){
		Node *temp = head;
		cout <<endl;

		while(temp!=NULL){
			cout <<temp->data<<"->";
			temp= temp->next;
		}
		cout <<"NULL";

		cout <<endl;

	}
	void printReverse(){
		Node *temp = tail;
		cout <<endl;

		while(temp!=NULL){
			cout <<temp->data<<"->";
			temp= temp->prev;
		}	
		cout <<"NULL";

		cout <<endl;
	}
	void reverse(){
		Node *temp1 = head ;  
		Node *temp2 = new Node() ;
		cout<<endl; 
		cout <<"reversing ... "<<endl;  
		while(temp1!=NULL){
			temp2 = temp1->next;
			temp1->next = temp1->prev;
			temp1->prev = temp2;
			temp1 = temp1->prev; 
		}
		temp1 = tail;
		tail = head;
		head = temp1;
	}
};


int main(){
	string name = "chihab";
	DoublyLinkedList list =  DoublyLinkedList();
	for(int i=0;i<name.length();i++){
		list.pushFisrt(name[i]);
	}

	list.print();
	list.reverse();
	list.print();

}