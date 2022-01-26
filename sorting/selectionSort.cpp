#include <iostream>
using namespace std;
const int SIZE = 7;

void Sort(int array[SIZE], int size)
{
    int min,minInd;
    int temp;

    for (int i = 0; i < size; ++i)
    {
        min = array[i];

        minInd = i;
        for(int j=i+1;j<size;j++){
            if(array[j]<min){
                min = array[j];
                minInd = j;
            }
        }
        temp = array[i];
        array[i] = min;
        array[minInd]=temp;
    }

};
void Print(int array[SIZE], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout <<" "<< array[i];
    }
}

int main()
{
    int list[SIZE] = {4222, 33, 245, 634, 63,0,12};
    Print(list, SIZE);
    cout << endl;
    Sort(list, SIZE);
    Print(list, SIZE);
    cout <<endl;
}