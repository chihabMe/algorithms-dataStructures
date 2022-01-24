#include <iostream>
class Array
{
    int *arr;
    int size;
    int index;

public:
    Array(int s)
    {
        if (s < 0)
        {
            s -= -1;
        }
        size = s;
        index = -1;
        arr = new int[size];
    }
    bool isEmpty()
    {
        return index == -1;
    }
    void push(int data)
    {
        if (!isFull())
        {
            index++;

            *(arr + index) = data;
        }
        else
        {
            std::cout << "the array is full  index==" << index << std::endl;
        }
    }
    bool isFull()
    {
        return index >= size - 1;
    }
    void print()
    {
        if (isEmpty())
        {
            std::cout << "the array is empty";
        }
        else
        {
            for (int i = 0; i <= index; i++)
            {
                std::cout << i << "->" << *(arr + i) << std::endl;
            }
        }
    }
    void insert(int data, int ind)
    {
        if (isFull())
        {
            std::cout << "the is no space to insert " << data << "the array is full " << std::endl;
            ;
        }
        else if (ind < 0 || ind >= size)
        {
            std::cout << "the index is out of range" << std::endl;
        }
        else
        {
            std::cout << "----------------" << std::endl;
            for (int i = index; i >= ind; i--)
            {
                std::cout << *(arr + i + 1) << " to " << *(arr + i) << std::endl;
                *(arr + i + 1) = *(arr + i);
            }
            *(arr + ind) = data;
            index++;
        }
        std::cout << "----------------" << std::endl;
    }
    void remove(int ind)
    {
        if (isEmpty())
        {
            std::cout << "the array is empty " << std::endl;
        }
        else if (ind < 0 || ind >= size)
        {
            std::cout << "the index is out of range" << std::endl;
        }
        else
        {
            for (int i = ind; i < index; i++)
            {
                arr[i] = arr[i + 1];
            }
            index--;
        }
    }
};
int main()
{
    Array list(5);
    list.push(1);
    list.push(2);
    list.push(3);
    list.push(4);
    list.print();
    list.insert(665, 2);
    list.print();
    std::cout << "removeing " << std::endl;
    list.remove(2);
    list.print();
}