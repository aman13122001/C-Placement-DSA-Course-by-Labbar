#include<iostream>

using namespace std;

int main(){
    int num;
    cout<<"Enter number: ";
    cin>>num;
    
    for (int i = 2; i <=num ; i++)
    {
        if(num%i==0){
            cout<<"prime no";
        }
        else{
            cout<<"not prime";
        }
        
        
        
    }
    



}