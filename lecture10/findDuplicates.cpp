#include <iostream>
using namespace std;

// int findDuplicate(int arr[],int size){
//     int ans=0;
//     // XORing all array elements
//     for (int i = 0; i <size; i++)
//     {
//        ans=ans^arr[i];
//     }
//     // XORing [1 to n-1]
//     for (int i = 1; i <size; i++)
//     {
//        ans=ans^i;
//     }
//     return ans;
// }
void findDuplicate(int arr[], int size)
{
    bool found = false;

    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] == arr[j])
            {
                cout << arr[i] << " ";
                found = true;

                break;
            }
        }
        if (!found)
        {
        cout<<"No deplicates found";
        break;
        }
        
    }
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
    cout<<"Duplicate Element are:";
    findDuplicate(arr, size);
    return 0;
}