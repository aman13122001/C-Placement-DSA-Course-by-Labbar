#include<iostream>
using namespace  std;

int ap(int n){
    int Ap=(3*n+7);
    return Ap;
}

int main(){
    int n;
    cout<<"enter any number:";
    cin>>n;
    cout<<"AP:"<<ap(n);
}

