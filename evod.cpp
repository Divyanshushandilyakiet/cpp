// print even and odd integers
#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int n;
    cout << "Enter any number to check:";
    cin >> n;

    if (n % 2 == 0)
    {
        cout << n << "is an even number";
    }
    else
    {
        cout << n << " is an odd number";
    }
    return 0;
}
