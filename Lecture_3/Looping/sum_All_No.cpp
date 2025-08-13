#include<iostream>
using namespace std;

int main(){

    int num,i=1,sum=0;
    cout<<"Enter number:";
    cin>>num;

    // by using While loop
    for ( i = 0; i <=num; i++)
    {
        sum=sum+i;
    }
    cout<<"sum:"<<sum;

    // by using While loop

    // while (i<=num)
    // {
    //     sum=sum+i;
    //     i++;
    // }
    // cout<<"sum:"<<sum;
    

    // by using do While loop
    
    // do
    // {
    //     sum=sum+i;
    //     i++;
    // } while (i<=num);
    // cout<<"sum:"<<sum;
    
    
    
    
}