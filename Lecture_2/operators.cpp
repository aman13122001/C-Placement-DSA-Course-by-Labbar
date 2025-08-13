#include<iostream>

using namespace std;
int main(){
    int a=2;
    int b=3;
// Relationl Operator
    bool first = (a==b);
    cout<<first<<endl; //output: 0.
    bool second = (a<b);
    cout<<second<<endl; //output: 1.
    bool third = (a>b);
    cout<<third<<endl; //output: 0.
    bool forth = (a<=b);
    cout<<forth<<endl; //output: 1.
    bool fifth = (a>=b);
    cout<<fifth<<endl; //output: 0.
    bool six = (a!=b);
    cout<<six<<endl; //output: 1.

    // assignment Operator

    int num=3;
    cout<<"num="<<num<<endl; //output: num=3.

    // logical Operator

    int l1 = 0;
    cout<<!l1<<endl; //output: 1.
    int l2 = 1;
    cout<<!l2<<endl; //output: 0.



}