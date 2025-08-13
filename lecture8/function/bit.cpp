#include<iostream>
using namespace  std;

int bit(int a,int b){
    int Bit = a&b;
    return Bit;
}

int main(){
    int a,b;
    cout<<"enter a:";
    cin>>a;
    cout<<"enter b:";
    cin>>b;
    cout<<"Bit:"<<bit(a,b);
}