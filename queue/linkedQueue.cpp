#include <iostream>
using std::cout;
using std::endl;
using std::string;
class Queue
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
    Queue()
    {
        head = NULL;
        tail = NULL;
        length = 0;
    }
    bool isEmpty()
    {
        return head == NULL;
    }
    void enqueue(char data)
    {
        Node *temp = new Node();
        temp->data = data;
        temp->next = NULL;
        length++;
        if (isEmpty())
        {
            head = tail = temp;
        }
        else
        {
            tail->next = temp;
            tail = temp;
        }
    }
    void print()
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout << " " << temp->data;
            temp = temp->next;
        }
    }
    char getTop()
    {
        if (isEmpty())
        {
            cout << "the queue is empty ";
            return '#';
        }
        return head->data;
    }
    char getTail()
    {
        if (isEmpty())
        {
            cout << "the queue is empty ";
            return '#';
        }
        return tail->data;
    }
    char pop()
    {
        if (isEmpty())
        {
            cout << "the queue is empty";
            return '#';
        }
        else
        {
            Node *temp = head;
            head = head->next;
            char data = temp->data;
            temp = NULL;
            delete temp;
            length--;
            return data;
        }
    }
    int getLength()
    {
        return length;
    }

    void clear()
    {
        Node *temp = new Node();

        while (head != NULL)
        {
            temp = head;
            head = head->next;
            delete temp;
        }
        tail = NULL;
        length = 0;
    }
};

int main()
{
    Queue qu;
    qu.enqueue('c');
    qu.enqueue('h');
    qu.enqueue('i');
    qu.enqueue('h');
    qu.enqueue('a');
    qu.enqueue('b');
    qu.print();
    cout << endl;
    cout << " deleting " << qu.pop() << endl;
    cout << endl;
    cout << " deleting " << qu.pop() << endl;
    qu.print();
    cout << " top=" << qu.getTop();
    cout << " last= " << qu.getTail();
    cout << " length= " << qu.getLength() << endl;
    cout << " clearing" << endl;
    qu.clear();
    qu.print();
    cout << "length = " << qu.getLength();
    cout << " top=" << qu.getTop();
    cout << " last= " << qu.getTail();
}