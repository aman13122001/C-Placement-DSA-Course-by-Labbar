#include <iostream>
using namespace std;

int main()
{
    int num, i = 1;

    cout << "Enter number:";
    cin >> num;
    // by using For loop
    for (int i = 1; i <= num; i++)
    {
        cout<<i<<endl;
    }

    // by using While loop

    // while (i<=num)
    // {
    //     cout<<i<<endl;
    //     i++;
    // }

    // by do While loop

    // do
    // {
    //   cout<<i<<endl;
    //   i++;
    // } while (i<=num);
}