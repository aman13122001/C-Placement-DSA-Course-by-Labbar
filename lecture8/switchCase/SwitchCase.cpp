#include <iostream>

using namespace std;

int main()
{
    int num = 2;

    switch (num)
    {
    case 1:
        cout << "One " << endl;
        break;
    case 2:
        cout << "Second" << endl;
        break;
    case 3:
        cout << "third" << endl;
        break;

    default:
        cout << "Unfefin value" << endl;

        break;
    }
}