#include <iostream>
using namespace std;
const int SIZE = 7;

void Sort(int array[SIZE],int size){
	int temp;
	int steps=0 ; 
	for(int i=0;i<size-1;i++){		
		for(int j=0;j< size-i-1;++j){
			if(array[j]>array[j+1]){
				temp = array[j];
				array[j] = array[j+1];
				array[j+1] = temp;
				steps++;
			}
		}
		if(steps ==0 ){
			cout <<"the list is allready sorted"<<endl;
			return ;
		}
	}
	cout <<"number of steps => "<<steps<<endl;
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
    int list[SIZE] = {1, 2, 3, 4, 5,6,11};
    Print(list, SIZE);
    cout << endl;
    Sort(list, SIZE);

    Print(list, SIZE);
    cout <<endl;
}