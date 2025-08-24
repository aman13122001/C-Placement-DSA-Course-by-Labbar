#include <iostream>
using namespace std;

void swapAtternete(int arr[], int size)
{

    for (int i = 0; i < size; i += 2)
    {
        if (i + 1 < size)
        {
            swap(arr[i], arr[i + 1]);
        }
    }
}

void printArray(int arr[], int size)
{
    for (int i = 0; i <size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int size;
    cout << "Enter the size of array:";
    cin >> size;
    int arr[100];
    cout << "Enter the Element of Array:";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    swapAtternete(arr, size);
    printArray(arr, size);
}