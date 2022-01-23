#include <iostream>
using namespace std;
const int MAX_SIZE = 100;
class stack
{
    int top;
    int items[MAX_SIZE];

public: 
    stack()
    {
        top = -1;
    }
    bool isEmpty()
    {
        return top == -1;
    }
    void push(int element)
    {
        if (top < MAX_SIZE - 1)
        {
            top++;
            items[top] = element;
        }
        else
        {
            cout << "the stuck is full";
        }
    };

    int getTop()
    {
        if (!isEmpty())
        {
            return items[top];
        }
        else
        {
            cout << "the stuck is empty";
            return -1;
        }
    }
    void print()
    {
        cout << "[";
        for (int i = top; i >= 0; i--)
        {
            if (i != top)
            {
                cout << ",";
            }
            cout << items[i];
        }
        cout << "]";
    };
    int pop()
    {
        if (isEmpty())
        {
            cout << "the stuck is empty";
            return -1;
        }
        else
        {
            top--;
            return items[top + 1];
        }
    }
};
int main()
{
    cout << "chihab";
    stack s;
    s.push(2);
    s.push(5);
    s.push(6);
    s.push(6);
    s.push(6);
    s.pop();
    s.getTop();
    s.print();
}