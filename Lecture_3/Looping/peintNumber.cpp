#include <iostream>

using namespace std;

int main()
{
    // pattern no:1
    // Enter any number:4
    // 1111
    // 2222
    // 3333
    // 4444
    cout << "Enter any number:";
    int n;
    cin >> n;
    // By the use of while loop.
    // int i = 1;
    // while (i <= n)
    // {
    //     int j = 1;
    //     while (j <= n)
    //     {
    //         cout << i;
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    // }

    // by the use of for loop.

    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= n; j++)
    //     {
    //         cout << i;
    //     }
    //     cout << endl;
    // }

    // pettern no:2
    // Enter any number:4
    // 1234
    // 1234
    // 1234
    // 1234

    // for (int i = 1; i <= n; i++)
    // {
    //     for(int j=1;j<=n;j++){
    //         cout<<j;
    //     }
    //     cout<<endl;
    // }
    // pettern no:3
    // Enter any number:4
    // 4321
    // 4321
    // 4321
    // 4321

    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= n; j++)
    //     {
    //         cout << n - j + 1;
    //     }
    //     cout << endl;
    // }

    // pettern no:4
    // Enter any number:3
    // 1 2 3
    // 4 5 6
    // 7 8 9

    //     int count = 1;
    //     for (int i = 1; i <= n; i++)
    //     {
    //         for (int j = 1; j <= n; j++)
    //         {
    //             cout << count << " ";
    //             count++;
    //         }
    //         cout << endl;
    //     }

    // pettern no:5
    // Enter any number:4
    // * 
    // * * 
    // * * * 
    // * * * * 
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout << "*" << " ";
    //     }
    //     cout << endl;
    // }

    // pettern no:6
    // Enter any number:4
    // 1 
    // 2 2 
    // 3 3 3 
    // 4 4 4 4 

    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout << i << " ";
    //     }
    //     cout << endl;
    // }

    // pettern no:7
    // Enter any number:4
    // 1 
    // 2 3 
    // 4 5 6 
    // 7 8 9 10
    // int count=1;
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout << count << " ";
    //         count++;
    //     }
    //     cout << endl;
    // }

    // pettern no:8
    // Enter any number:5
    // 1 
    // 2 3 
    // 3 4 5 
    // 4 5 6 7 
    // 5 6 7 8 9 

    // for (int i = 1; i <= n; i++)
    // {
    //     int value = i;
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout << value << " ";
    //         value++;
    //     }
    //     cout << endl;
    // }

    // second way to print petter no 8.
    
    // for (int i = 1; i <= n; i++)
    // {
       
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout << (i+j-1) << " ";
            
    //     }
    //     cout << endl;
    // }

     
}