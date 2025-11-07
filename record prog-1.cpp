#include <iostream>
using namespace std;

template <typename T>
T big(T a, T b)  // Template function
{
    return (a > b ? a : b);
}

int main()
{
    cout << big(5, 8) << endl;     // Works with int
    cout << big(9.8, 8.9);         // Works with double
    return 0;
}

