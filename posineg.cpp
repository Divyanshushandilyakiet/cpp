// check the number is positive or negative
#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int n;

    cout << "Enter any integer to check: ";
    cin >> n;

    if (n > 0)
    {
        cout << "The number is positive\n";
    }
    else
    {
        cout << "The number is negative";
    }
    return 0;
}
