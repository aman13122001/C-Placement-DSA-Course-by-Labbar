#include<iostream>
using namespace std;

int main(){
    // print the ascii value 
    int a='a';
    cout<<a<<endl;// It print 97 (ASCII CODE)

    char ch = 64;
    cout<<ch<<endl; // It print @ . 64 is ascii value of @ 

    int f = 123.23;
    cout<< "value of f :"<<f<<endl; //it only print integer part.

    // type Cast:--

    int p = 5;
    int q = 2;
    int r;

    r= p/q;
    cout<< "value of r is :"<<r<<endl; // It print r=2. becouse data type is int.

    float s=23,e=2;
    float fl;

    fl=s/e;

    cout<<"value of f :"<<fl<<endl;
    cout<<2.0/5<<endl;

    // Unsigned 

    unsigned int num1 = 123;
    cout<< "value of num1 :"<<num1<<endl;// print 123
    unsigned int num2 = -193;
    cout<< "value of num2 :"<<num2<<endl;//but  it print 4294967103 becouse  unsigned not print negative value.

    
}