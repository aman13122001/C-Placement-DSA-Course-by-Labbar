#include <iostream>
using namespace std;

int sumOfArrayElement(int arr[], int size)
{

    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum = sum + arr[i];
    }
    
    

    return sum;
}

int main()
{

    int size;
    cout << "Enter the size of array:";
    cin >> size;

    int arr[100];
    cout << "Enter the element of Array: ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout <<"Sum of all Elenment Array: "<< sumOfArrayElement(arr, size) << endl;
}