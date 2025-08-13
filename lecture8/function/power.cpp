#include<iostream>
using namespace std;


// create by using function
int pow(int a,int b){
int ans=1;
for (int i = 1; i <=b; i++)
{
    ans=ans*a;
}
return ans;
}
int main(){
    int a,b;
    // cout<<"Enter number: ";
    // cin>>a;
    // cout<<"Enter power of number:";
    // cin>>b;

    cout<<"power of number:"<<pow(2,4)<<endl;
    cout<<"power of number:"<<pow(12,2)<<endl;
    _
    
}