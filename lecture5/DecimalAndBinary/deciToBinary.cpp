#include<iostream>
#include<math.h>
using namespace std;


int main(){
    // int n;
    // cout<<"enter any number:  ";
    // cin>>n;

    // int ans=0;
    // int i=0;
    // while (n!=0)
    // {
    //     int bit = n&1;
    //     ans=(bit*pow(10,i))+ans;
    //     n=n>>1;
    //     i++;
    // }
    
    // cout<<"Answer is "<<ans<<endl;

    int decNum=50;
    int ans=0;
    int pow=1;
    while (decNum>0)
    {
       int rem=decNum%2;
       decNum/=2;
       ans+=(rem*pow);
       pow*=10;
    }
    
      cout<<ans;

}