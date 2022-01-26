#include <iostream>
using namespace std;

class LinkedList
{
private:
    struct Node
    {
        char data;
        Node *next;
    };
    Node *head;
    Node *tail;
    int length;

public:
    LinkedList()
    {
        head = tail = NULL;
        length = 0;
    }
    bool isEmpty() { return length == 0; }
    void pushFirst(char data)
    {
        Node *temp = new Node();
        temp->data = data;
        if (isEmpty())
        {
            temp->next = NULL;
            head = tail = temp;
        }
        else
        {
            temp->next = head;
            head = temp;
        }
        length++;
    }
    void pushLast(char data)
    {
        Node *temp = new Node();
        temp->data = data;
        if (isEmpty())
        {
            temp->next = NULL;
            head = tail = temp;
        }
        else
        {
            temp->next = NULL;
            tail->next = temp;
            tail = temp;
        }
        length++;
    }
    void insert(char data, int ind)
    {
        if (ind <= 0)
        {
            pushFirst(data);
        }
        else if (ind >= length)
        {
            pushLast(data);
        }
        else
        {
            Node *temp1 = head;
            Node *temp2 = new Node();
            Node *temp3 = new Node();
            temp2->data = data;
            int i = 0;
            while (i < ind - 1)
            {
                temp1 = temp1->next;
                i++;
            }
            temp3 = temp1->next;
            temp1->next = temp2;
            temp2->next = temp3;
        }
    }
    void print()
    {
        Node *temp = head;
        if (isEmpty())
        {
            cout << endl;
            cout << "the stuck is empty i can't print anything ";
            cout << endl;

            return;
        }
        while (temp != NULL)
        {
            cout << temp->data << "->";
            temp = temp->next;
        }
        cout << "NULL";
    }
    void getTop(char &var)
    {
        var = head->data;
    }
    void getBottom(char &var)
    {
        var = tail->data;
    }
    void getSize(int &var)
    {
        var = length;
    }
    void clear()
    {
        Node *temp = head;
        Node *temp1 = new Node();
        while (temp != NULL)
        {
            temp1 = temp;
            temp = temp->next;
            delete temp1;
        }
        length = 0;
    }

    void remove(int ind)
    {

        Node *current = new Node();
        Node *prev = new Node();
        Node *newNode = new Node();
        prev = head;
        int i = 0;
        if (isEmpty())
        {
            return;
        }
        if (ind <= 0)
        {
            current = head;
            head = head->next;
            delete current;
        }
        else if (ind >= length)
        {
            prev = head;
            current = prev->next;
            while (current->next != NULL)
            {
                prev = prev->next;

                current = prev->next;
            }
            prev->next = NULL;
            tail = prev;
            delete current;
        }
        else
        {

            prev = head;
            while (i < ind - 1)
            {
                prev = prev->next;
                i++;
            }
            current = prev->next;
            prev->next = prev->next->next;
            cout << "{" << current->data << "} has been removed" << endl;
            delete current;
        }
        length--;
    }
    void reverse(){
        Node *curr = head;
        Node *prev = NULL;
        Node *next = curr->next;



        while(next!=NULL){
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr=  next;

        }
        curr = head;
        head = tail;
        tail = curr;

        

    }
};

int main()
{
    int size;
    char top, bottom;
    string name = "chihab";
    LinkedList list = LinkedList();

    for (int i = 0; i < name.length(); i++)
    {
        list.pushLast(name[i]);
    }
    list.print();
    cout << endl;
    list.reverse();

    list.print();
}