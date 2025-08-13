#include<iostream>
using namespace  std;

int fibo(int n){
    int a=0;
    int b=1;
    cout<<a<<" "<<b<<" ";
    int fib=0;
    for ( int i = 1; i <= n; i++)
    {
        fib=a+b;
        cout<<fib<<" ";

        a=b;
        b=fib;
    }
    
}

int main(){
    int n;
    cout<<"enter any number:";
    cin>>n;
    fibo(n);
}