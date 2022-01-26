#include <iostream>



void Sort(){
	
}


void Print(int array[SIZE], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout <<" "<< array[i];
    }
}

int main()
{
    int list[] = {1, 2, 3, 4, 5,6,11};
    int SIZE = sizeof(list)/sizeof[list[0]];
    Print(list, SIZE);
    cout << endl;
    Sort(list, SIZE);

    Print(list, SIZE);
    cout <<endl;
}