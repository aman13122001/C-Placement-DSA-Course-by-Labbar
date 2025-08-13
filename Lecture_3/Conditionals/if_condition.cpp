#include <iostream>
using namespace std;

int main()
{
    // Qun:-Check the number is Positive or negative.
    // int n;
    // cout << "Enter n :";
    // cin >> n;
    // if (n > 0)
    // {
    //     cout << "Positive " << endl;
    // }
    // else{
    //     cout<<"Negative"<< endl;
    // }

    // Take input from user.
    // int a,b;
    // cout<<"Enter the value a and b:"<<endl;
    // cin>>a>>b;
    // With the use of it we can take input "space","newline" and "tab".and print ascii value.
    // a= cin.get();
    // b= cin.get();
    // cout<<"value of a and b is :"<<a <<" "<<b<<endl;

    // Qun:-Check the number is greatest between two number.
    // int a, b;
    // cout << "Enter the value a:" << endl;
    // cin>>a;
    // cout << "Enter the value b:" << endl;
    // cin>>b;
    // if(a>b){
    //     cout<<"A is greater "<<endl;
    // }
    // else{
    //     cout<<"B is greater "<<endl;
    // }

    int a;
    cout << "Enter the value a:" << endl;
    cin>>a;

    if(a>0){
        cout<<"A is positive"<<endl;
    }
    else{
        if (a<0)
        {
            cout<<"A is Negitive"<<endl;
        }
        else{
            cout<<"A is Zero"<<endl;
        }
    }

}