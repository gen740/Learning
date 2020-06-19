#include <iostream>
using namespace std;


int main()
{
    int a;
    int& p = a;

    a = 0;
    cout << a << endl
         << p << endl;
    a = 4;
    cout << a << endl
         << p << endl;
    return 0;
}
