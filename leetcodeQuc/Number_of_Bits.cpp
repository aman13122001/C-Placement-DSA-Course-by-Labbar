// 191. Number of 1 Bits

#include<iostream>
using namespace std;


int NumberOfbit(int n){
    int count=0;
    while (n!=0)
    {
        if(n&1){
            count++;
        }
        n=n>>1;
    }
    return count;
    
}

int main(){
    int n;
    cout<<"enter any number:  ";
    cin>>n;
    cout<<NumberOfbit(n);

}