#include<iostream>
using namespace std;


bool isEven(int num){
    if(num&1){
return 0;
    }
    else{
        return 1;
    }
}

int main(){
    int num;
    cout<<"Enter number: ";
    cin>>num;

    if (isEven(num))
    {
       cout<<"Number is Even"<<endl; 
    }
    else{
        cout<<"Number is Odd"<<endl;
    }
    
}