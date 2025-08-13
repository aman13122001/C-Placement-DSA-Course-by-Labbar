// print table

#include<iostream>

using namespace std;

int main(){
    int n;
    cout<<"Enter any number:";
    cin>>n;
    cout<<"printing table of "<<n;
    for(int i=1;i<=10;i++){
        cout<<i*n<<endl;
    }
}
