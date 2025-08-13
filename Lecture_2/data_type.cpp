#include<iostream>

using namespace std;
int main(){

    // int 
    int a=123;
    cout<<"int:"<<a<<endl;

    int size_int = sizeof(a);
    cout<<"size of a is :" <<size_int<<endl;

    // char
    char ch ='a';
    cout<<"char:"<<ch<<endl;

    int size_ch = sizeof(ch);
    cout<<"size of ch is :" <<size_ch<<endl;

    // bool
    bool bl=true;
    cout<<"bool:"<<bl<<endl;

    int size_bl = sizeof(bl);
    cout<<"size of bl is :" <<size_bl<<endl;

    // float
    float f=123.22;
    cout<<"float:"<<f<<endl;

    int size_f = sizeof(f);
    cout<<"size of f is :" <<size_f<<endl;

    // double
    double dl= 12.1112;
    cout<<"double:"<<dl<<endl;

    int size_dl = sizeof(dl);
    cout<<"size of dl is :" <<size_dl<<endl;



}