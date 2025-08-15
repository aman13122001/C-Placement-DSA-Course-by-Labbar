#include <iostream>

using namespace std;

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int array[15] = {2, 7, 8};
    int n = 15;

    int arraySize= sizeof(array)/sizeof(int);
    cout<<"size of array is "<<arraySize<<endl;

    Output:
    // size of array is 15

    printArray(array, n);
    // Output:
    // 2 7 8 0 0 0 0 0 0 0 0 0 0 0 0

    
}