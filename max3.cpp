// Find maximum number among three numbers
#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int n1, n2, n3;
    cout << "Enter three numbers to check: \n";
    cin >> n1 >> n2 >> n3;

    if (n1 > n2)
    {
        if (n1 > n3)
        {
            cout << n1 << " is greater number";
        }
        else
        {
            cout << n3 << " is greater number";
        }
    }
    else
    {
        if (n2 > n3)
        {
            cout << n2 << " is greater number ";
        }
        else
        {
            cout << n3 << " is greater number ";
        }
    }

    return 0;
}
