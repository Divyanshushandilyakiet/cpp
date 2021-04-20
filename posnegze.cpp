// to check the integer is positive negative and zero
#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int n;
    cout << "Enter any integer: ";
    cin >> n;

    if (n > 0)
    {
        cout << "You entered a positive number: " << n << endl;
    }
    else if (n < 0)
    {
        cout << "You entered a negative number: " << n << endl;
    }
    else
    {
        cout<<"You entered zero.";
    }
    return 0;
}
