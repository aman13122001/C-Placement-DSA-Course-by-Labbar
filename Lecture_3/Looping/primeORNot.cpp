// Qun: Check the number is prime or not?

#include<iostream>

using namespace std;

int main(){
    int num;
    cout<<"Enter number: ";
    cin>>num;

    int i=2;

    while (i<num)
    {
        if(num%i==0){
            cout<<"Not prime for "<<i<<endl;
        }
        else{
            cout<<"primr for "<<i<<endl;
        }
        i++;
    }
    
}