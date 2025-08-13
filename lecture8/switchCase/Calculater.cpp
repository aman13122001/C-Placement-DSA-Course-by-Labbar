#include <iostream>

using namespace std;

int main()
{
    int a,b;

    cout<<"Enter the value of a: ";
    cin>>a;
    cout<<"Enter the value of b: ";
    cin>>b;

    char ch;
    cout<<"Enter the operation you want to perform:";
    cin>>ch;

    switch (ch)
    {
    case '+':
        cout << "additiion: "<<a+b<< endl;
        break;
    case '-':
        cout <<"subtraction:"<<a-b  << endl;
        break;
    case '*':
        cout << "Multiplication:"<<a*b << endl;
        break;
    case '/':
        cout << "divide:"<<a/b << endl;
        break;
    case '%':
        cout << "modulo:"<<a%b << endl;
        break;

    default:
        cout << "invalid option" << endl;

        break;
    }
}